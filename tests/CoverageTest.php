<?php

declare(strict_types=1);

it('binds every function of Raven.h but raw memory, and nothing else', function (): void {
    $root = dirname(__DIR__);
    $api = json_decode(file_get_contents("$root/tools/api.json"), true);
    $cfg = require "$root/tools/bindings.php";
    $expected = array_diff(array_keys($api['functions']), array_keys($cfg['not_bound']));
    sort($expected);
    $bound = get_extension_funcs('raven');
    sort($bound);
    expect($bound)->toBe(array_values($expected))->and($bound)->toHaveCount(1370);
});

it('declares a class per struct of Raven.h', function (): void {
    $api = json_decode(file_get_contents(dirname(__DIR__) . '/tools/api.json'), true);
    foreach (array_keys($api['structs']) as $struct) {
        expect(class_exists($struct))->toBeTrue();
    }
});
