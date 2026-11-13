<?php
/*
 * Crash sweep: every bound function called once with zero / null arguments, each in its own
 * child process, headless on the null backend. Prints the functions that crashed or hung.
 *
 *   php84 tools/sweep.php
 */

// Child: php sweep.php <function>. Parent: php sweep.php
if (isset($argv[1])) {
    Rinit_ex(new RInitDesc(backend: R_BACKEND_NULL, headless: R_TRUE));
    $w = Rwindow_create('w', 100, 100, R_WINDOW_DEFAULT);
    $rf = new ReflectionFunction($argv[1]);
    $args = [];
    foreach ($rf->getParameters() as $p) {
        $t = (string) $p->getType();
        if ($p->isPassedByReference()) { $args[] = null; continue; }
        $args[] = match (true) {
            $t === 'int' => 0, $t === 'float' => 0.0, $t === 'string' => '',
            $t === 'array' => [], $t === 'mixed' => null,
            str_starts_with($t, '?') => null,
            class_exists($t) && $t !== 'RPainter' => new $t(),
            default => null,
        };
    }
    try { $rf->invokeArgs($args); } catch (Throwable $e) { echo get_class($e), ': ', $e->getMessage(), "\n"; }
    Rdraw_frame();
    echo "OK\n";
    exit(0);
}
$fns = get_extension_funcs('raven');
$bad = [];
foreach ($fns as $i => $fn) {
    $p = proc_open([PHP_BINARY, '-d', 'memory_limit=256M', __FILE__, $fn], [1 => ['pipe', 'w'], 2 => ['pipe', 'w']], $pipes);
    $start = microtime(true); $out = '';
    while (true) {
        $st = proc_get_status($p);
        if (!$st['running']) break;
        if (microtime(true) - $start > 5) { proc_terminate($p, 9); $bad[$fn] = 'TIMEOUT'; break; }
        usleep(5000);
    }
    $out = stream_get_contents($pipes[1]) . stream_get_contents($pipes[2]);
    $code = proc_close($p);
    if (!isset($bad[$fn]) && !str_contains($out, "OK\n")) $bad[$fn] = "exit {$st['exitcode']} signal " . ($st['termsig'] ?? '') . ' ' . trim(substr($out, 0, 200));
}
echo count($fns), " functions, ", count($bad), " bad\n";
foreach ($bad as $f => $why) echo "$f: $why\n";
