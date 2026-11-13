---
type: API
title: Bindings
description: What ext-raven binds from Raven.h, the translations from C, and the five functions it leaves out.
resource: stubs/
tags: [raven, api]
status: draft
generated: { by: claude-opus/5.5, at: 2026-11-12T00:00:00Z }
sources:
  - id: stubs
    resource: stubs/
    title: one stub per Raven header, plus manual.stub.php
  - id: spec
    resource: docs/superpowers/specs/2026-11-12-raven-design.md
    title: design spec, Names and translations
---

# Bindings

Every function `Raven.h` declares (its 21 headers, 1,128 `RAVEN_API` functions) under the C name, except `Rmemory_alloc`, `Rmemory_realloc`, `Rmemory_free`, `Rpixels_alloc`, `Rpixels_free`: raw memory has no PHP meaning. 1,108 are generated into `src/gen/<header>.c`, 15 are written in `src/manual.c` (lifecycle, allocator, Raven-owned memory, foreign-thread callbacks, the backend and host-platform tables). `tests/CoverageTest.php` checks the set.

Classes: one final class per struct of the headers (27 generated, with field tables in `src/gen/structs.c`), plus `RPainter`, `RAllocator` (not constructible), `RCapture`, `RBackendVTable`, `RHostPlatformDesc` (in `stubs/manual.stub.php`).

Translations are the spec's list and nothing else. The ones found by testing:

* Every struct pointer parameter is `?T`: Raven checks `NULL` for all of them (the 18 non-const ones were read in its source).
* A `const char*` followed by a `size_t` is sized text (`Rxml_document_parse`, `Rwidget_create_from_xml`, `Rfont_create` and eight more): the size may not pass the string's end.
* Fixed C arrays default to `[]` in the stub (gen_stub cannot default a property to a non-empty array); every constructor fills the ones not given with N zeros.
* Out-structs are written back after the call; a by-reference out-parameter is `?int` / `?float` / `?string`.
