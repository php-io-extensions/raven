<?php

declare(strict_types=1);

it('reports Raven 0.2.3', function (): void {
    expect(Rget_version())->toBe('0.2.3');
});

it('prints the extension version, the Raven version, and the upstream commits', function (): void {
    ob_start();
    phpinfo(INFO_MODULES);
    $info = ob_get_clean();

    expect($info)->toContain('0.11.0')
        ->and($info)->toContain('0.2.3')
        ->and($info)->toContain('0f0da68197c8def4f4ffab93bae53bccb6a199c8')
        ->and($info)->toContain('b379292b2ab6df5771ba9870d53cf8b2c9295daf');
});
