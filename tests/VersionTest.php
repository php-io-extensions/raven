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
        ->and($info)->toContain('c34466db536219f5ed0e026c4286a1ce27887b57')
        ->and($info)->toContain('b379292b2ab6df5771ba9870d53cf8b2c9295daf');
});
