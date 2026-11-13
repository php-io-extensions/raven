<?php

/*
 * Reads clang's JSON AST of Raven.h and writes tools/api.json: every function,
 * struct (fields in order), enum (enumerators), callback typedef (parameter
 * names from the header text) and object-like #define of lib/raven/include/raven.
 *
 *   clang -Ilib/raven/include -Xclang -ast-dump=json -fsyntax-only tools/ast.c | php84 -d memory_limit=-1 tools/extract.php > tools/api.json
 */

declare(strict_types=1);

$root = dirname(__DIR__) . '/lib/raven/include';
$ast = json_decode(stream_get_contents(STDIN), true, 4096, JSON_THROW_ON_ERROR);

// Raven.h includes these headers; raven_emscripten.h is not among them.
preg_match_all('/#include "raven\/(\w+\.h)"/', file_get_contents("$root/Raven.h"), $m);
$headers = $m[1];

$api = ['headers' => $headers, 'functions' => [], 'structs' => [], 'enums' => [], 'callbacks' => [], 'defines' => [], 'opaque' => []];
$file = null;

foreach ($ast['inner'] as $node) {
    $loc = $node['loc'] ?? [];
    if (isset($loc['expansionLoc'])) {
        $loc = $loc['expansionLoc'];
    }
    if (isset($loc['file'])) {
        $file = $loc['file'];
    }
    if ($file === null || ! in_array(basename($file), $headers, true) || ($node['isImplicit'] ?? false)) {
        continue;
    }
    $header = basename($file);

    switch ($node['kind']) {
        case 'FunctionDecl':
            $params = [];
            foreach ($node['inner'] ?? [] as $p) {
                if ($p['kind'] === 'ParmVarDecl') {
                    $params[] = ['name' => $p['name'] ?? ('arg' . count($params)), 'type' => $p['type']['qualType']];
                }
            }
            if ($node['variadic'] ?? false) {
                fwrite(STDERR, "variadic: {$node['name']}\n");
            }
            $api['functions'][$node['name']] = [
                'header' => $header,
                'ret' => trim(preg_replace('/\(.*$/s', '', $node['type']['qualType'])),
                'params' => $params,
            ];
            break;

        case 'RecordDecl':
            if (! ($node['completeDefinition'] ?? false) || ! isset($node['name'])) {
                if (isset($node['name'])) {
                    $api['opaque'][$node['name']] = $header;
                }
                break;
            }
            $fields = [];
            foreach ($node['inner'] ?? [] as $f) {
                if ($f['kind'] === 'FieldDecl') {
                    $fields[] = ['name' => $f['name'], 'type' => $f['type']['qualType']];
                }
            }
            $api['structs'][$node['name']] = ['header' => $header, 'fields' => $fields];
            unset($api['opaque'][$node['name']]);
            break;

        case 'EnumDecl':
            $names = [];
            foreach ($node['inner'] ?? [] as $c) {
                if ($c['kind'] === 'EnumConstantDecl') {
                    $names[] = $c['name'];
                }
            }
            $api['enums'][$node['name'] ?? ('anon@' . $header . ':' . count($api['enums']))] = ['header' => $header, 'constants' => $names];
            break;
    }
}

// Callback typedefs: the AST keeps the types, the header text keeps the parameter names.
foreach ($headers as $header) {
    $text = file_get_contents("$root/raven/$header");
    preg_match_all('/typedef\s+([\w\s\*]+?)\s*\(\s*\*\s*(\w+)\s*\)\s*\(([^)]*)\)\s*;/', $text, $mm, PREG_SET_ORDER);
    foreach ($mm as [, $ret, $name, $args]) {
        $params = [];
        $args = trim($args);
        if ($args !== '' && $args !== 'void') {
            foreach (explode(',', $args) as $i => $arg) {
                $arg = trim(preg_replace('/\s+/', ' ', $arg));
                preg_match('/^(.*?)(\w+)$/', $arg, $pm);
                $type = trim(str_replace(' *', '*', $pm[1] ?? $arg));
                $params[] = ['name' => $pm[2] ?? "arg$i", 'type' => preg_replace('/\s*\*/', ' *', $type)];
            }
        }
        $api['callbacks'][$name] = ['header' => $header, 'ret' => trim(preg_replace('/\s*\*/', ' *', trim($ret))), 'params' => $params];
    }

    // Object-like #defines: R_* and RAVEN_* names that are not guards, export macros or function-like.
    preg_match_all('/^[ \t]*#[ \t]*define[ \t]+((?:R|RAVEN)_\w+)(?![\w(])[ \t]+(.+?)[ \t]*(?:\/\*.*)?$/m', $text, $dm, PREG_SET_ORDER);
    foreach ($dm as [, $name, $value]) {
        if (str_ends_with($name, '_H') || $name === 'RAVEN_API') {
            continue;
        }
        $api['defines'][$name] = ['header' => $header, 'value' => trim($value)];
    }
}

echo json_encode($api, JSON_PRETTY_PRINT | JSON_UNESCAPED_SLASHES), "\n";
