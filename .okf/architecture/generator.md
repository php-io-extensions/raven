---
type: Architecture
title: Generator
description: How tools/ turns Raven's headers into stubs and C, and where a binding that does not fit goes.
resource: tools/generate.php
tags: [raven, generator]
status: draft
generated: { by: cursor-grok/4.6, at: 2026-11-20T02:30:00Z }
sources:
  - id: extract
    resource: tools/extract.php
    title: clang JSON AST to tools/api.json
  - id: generate
    resource: tools/generate.php
    title: stubs, src/gen
  - id: roles
    resource: tools/bindings.php
    title: not_bound, manual, manual_structs, slots, user_handles
---

# Generator

1. `clang -Ilib/raven/include -Xclang -ast-dump=json -fsyntax-only tools/ast.c | php84 -d memory_limit=-1 tools/extract.php > tools/api.json` records functions (and the header comment immediately before each `RAVEN_API` declaration; one comment only, not a file-level `/**` glued onto the first function), structs, enums, callback typedefs (parameter names from the header text) and object-like `#define`s of the headers `Raven.h` includes.
2. `php84 tools/generate.php` prints `bound N, manual M, not bound K, pending P`. P must be 0: a pending function is a shape the generator does not know; teach the generator, or list it in `bindings.php` `manual` and write it in `src/manual.c` with its stub in `stubs/manual.stub.php`. Each generated stub function whose header had a comment gets that comment as a PHPDoc block.
3. `php84 /opt/homebrew/opt/php@8.4/lib/php/build/gen_stub.php -f stubs`.

Every binding is its own written-out `ZEND_FUNCTION`; structs convert through field tables walked by `src/runtime.c`. The C return is `ret`, so it cannot collide with a parameter named `r` (`Rchart_add_band`). Never edit `src/gen/`, `stubs/raven_*.stub.php` or `*_arginfo.h` by hand.

Generated slot keys: the setter's name plus the `Rid` arguments before its first callback (or the first `const char*` name, for actions and XML tags — `Raction_bind_with_parameters` keys by `name`, not `signature`). `bindings.php` `slots` overrides it: `Rtask_post` once, `Rtimer_create` keyed by the returned timer, `Rdialog_open` and `Rpopup_open` by their content. `const uint8_t*` RGBA pixels are sized by the next two `int` parameters (`width`/`height`, or `pixels_width`/`pixels_height`), skipping intervening `const uint8_t*` of the same kind (`Rtest_compare_pixels`: actual, expected, width, height). A `uint8_t*` RGBA out-buffer sized by `width`/`height` is written back as `?string`. `const float*` is an array sized by a following `count`, or by the two preceding `int`s (`Rchart_set_grid`: `rows` × `columns`). Opaque `RActionContext*` is wrapped like `RPainter*`. `Rimage_encode_png` is manual: PNG bytes released with `Rpixels_free`.
