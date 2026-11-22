<?php

declare(strict_types=1);

it('reports Raven 0.3.0', function (): void {
    expect(Rget_version())->toBe('0.3.0');
});

it('prints the extension version, the Raven version, and the upstream commits', function (): void {
    ob_start();
    phpinfo(INFO_MODULES);
    $info = ob_get_clean();

    expect($info)->toContain('0.11.0')
        ->and($info)->toContain('0.3.0')
        ->and($info)->toContain('fc37a06763395c9557c1723b41f1bd7b89e2caef')
        ->and($info)->toContain('b379292b2ab6df5771ba9870d53cf8b2c9295daf');
});
