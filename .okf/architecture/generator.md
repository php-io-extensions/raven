---
type: Architecture
title: Generator
description: How tools/ turns Raven's headers into stubs and C, and where a binding that does not fit goes.
resource: tools/generate.php
tags: [raven, generator]
status: draft
generated: { by: cursor-grok/4.6, at: 2026-11-14T00:00:00Z }
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

1. `clang -Ilib/raven/include -Xclang -ast-dump=json -fsyntax-only tools/ast.c | php84 -d memory_limit=-1 tools/extract.php > tools/api.json` records functions, structs, enums, callback typedefs (parameter names from the header text) and object-like `#define`s of the headers `Raven.h` includes.
2. `php84 tools/generate.php` prints `bound N, manual M, not bound K, pending P`. P must be 0: a pending function is a shape the generator does not know; teach the generator, or list it in `bindings.php` `manual` and write it in `src/manual.c` with its stub in `stubs/manual.stub.php`.
3. `php84 /opt/homebrew/opt/php@8.4/lib/php/build/gen_stub.php -f stubs`.

Every binding is its own written-out `ZEND_FUNCTION`; structs convert through field tables walked by `src/runtime.c`. Never edit `src/gen/`, `stubs/raven_*.stub.php` or `*_arginfo.h` by hand.

Generated slot keys: the setter's name plus the `Rid` arguments before its first callback (or the `const char*` name, for actions and XML tags). `bindings.php` `slots` overrides it: `Rtask_post` once, `Rtimer_create` keyed by the returned timer, `Rdialog_open` and `Rpopup_open` by their content. `const uint8_t*` RGBA pixels are sized by the next two `int` parameters (`width`/`height`, or `pixels_width`/`pixels_height`).
