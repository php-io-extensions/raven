<?php

declare(strict_types=1);

it('builds struct classes with every C field, zero by default', function (): void {
    $d = new RInitDesc();
    expect($d->backend)->toBe(0)->and($d->app_name)->toBeNull()->and($d->ui_scale)->toBe(0.0);
    $look = new RShaderLook();
    expect($look->color)->toBe([0.0, 0.0, 0.0, 0.0])->and($look->params)->toHaveCount(4);
    $named = new RShaderLook(radius: 3.0);
    expect($named->radius)->toBe(3.0)->and($named->press)->toBe(0.0)->and($named->color2)->toBe([0.0, 0.0, 0.0, 0.0]);
    $props = array_map(fn ($p) => $p->getName(), (new ReflectionClass(RFileDialogDesc::class))->getProperties());
    expect($props)->toBe(['parent', 'title', 'directory', 'file_name', 'filters', 'filter_count', 'default_extension', 'flags']);
    $touch = new RTouchSettings();
    expect($touch->min_touch_size)->toBe(0.0);
    $section = new RTileSection();
    expect($section->first)->toBe(0)->and($section->text)->toBeNull()->and($section->detail)->toBeNull();
    $item = new RTileItem();
    expect($item->note)->toBeNull()->and($item->detail_color)->toBe([0.0, 0.0, 0.0, 0.0]);
    $info = new RViewportDrawInfo();
    expect($info->metal_encoder)->toBe(0)
        ->and($info->metal_command_buffer)->toBe(0)
        ->and($info->metal_device)->toBe(0);
    expect(fn () => new RActionContext())->toThrow(Error::class);
    $golden = new RGoldenOptions();
    expect($golden->channel_tolerance)->toBe(0)
        ->and($golden->max_diff_ratio)->toBe(0.0)
        ->and($golden->per_platform)->toBe(0)
        ->and($golden->output_directory)->toBeNull();
    $result = new RGoldenResult();
    expect($result->status)->toBe(0)
        ->and($result->golden_path)->toBeNull()
        ->and($result->message)->toBeNull();
    $item = new RDataItem();
    expect($item->mime)->toBeNull()->and($item->data)->toBeNull()->and($item->size)->toBe(0);
    $picked = new RPickedFile();
    expect($picked->path)->toBeNull()->and($picked->width)->toBe(0);
    $share = new RShareDesc();
    expect($share->text)->toBeNull()->and($share->anchor)->toBe(0);
    $req = new RHostServiceRequest();
    expect($req->id)->toBe(0)->and($req->data)->toBeNull()->and($req->size)->toBe(0);
    $action = new RNotificationAction();
    expect($action->id)->toBeNull()->and($action->label)->toBeNull();
});

it('type-checks constructor arguments into the typed properties', function (): void {
    expect(fn () => new RInitDesc(backend: 'vulkan'))->toThrow(TypeError::class);
});

it('reads and writes in/out structs', function (): void {
    $defaults = new RTouchSettings();
    Rtouch_get_default_settings($defaults);
    expect($defaults->slop)->toBeGreaterThan(0.0)
        ->and($defaults->min_touch_size)->toBeFloat()->toBeGreaterThanOrEqual(0.0);
    $mine = clone $defaults;
    $mine->slop = 12.5;
    Rtouch_set_settings($mine);
    $back = new RTouchSettings();
    Rtouch_get_settings($back);
    expect($back->slop)->toBe(12.5);
});

it('fills shader looks through Raven', function (): void {
    $look = new RShaderLook();
    Rshader_look_init($look);
    expect($look->color)->toHaveCount(4);
    $springs = new RSpring();
    Rspring_set($springs, 2.5);
    expect($springs->value)->toBe(2.5);
    Rspring_kick($springs, 1.0);
    expect($springs->velocity)->toBe(1.0);
});

it('rejects fixed arrays of the wrong length and out-of-range fields', function (): void {
    $look = new RShaderLook(color: [1.0, 0.0]);
    expect(fn () => Rborder_set_effect(Rwidget_create(R_WIDGET_BORDER), 0, $look))->toThrow(ValueError::class, 'RShaderLook::$color');
    $settings = new RTouchSettings(mouse_emulation: PHP_INT_MAX);
    expect(fn () => Rtouch_set_settings($settings))->toThrow(ValueError::class, 'mouse_emulation');
});

it('passes arrays of structs with their count field', function (): void {
    $browser = Rfile_browser_create();
    Rfile_browser_set_filters($browser, [new RFileFilter('Images', '*.png;*.jpg'), new RFileFilter('All', '*')], 2);
    expect(fn () => Rfile_browser_set_filters($browser, [new RFileFilter('One', '*')], 2))->toThrow(ValueError::class);
});
