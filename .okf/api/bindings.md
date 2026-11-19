---
type: API
title: Bindings
description: What ext-raven binds from Raven.h, the translations from C, and the five functions it leaves out.
resource: stubs/
tags: [raven, api]
status: draft
generated: { by: cursor-grok/4.6, at: 2026-11-19T02:30:00Z }
sources:
  - id: stubs
    resource: stubs/
    title: one stub per Raven header, plus manual.stub.php
  - id: spec
    resource: docs/superpowers/specs/2026-11-12-raven-design.md
    title: design spec, Names and translations
---

# Bindings

Every function `Raven.h` declares (its 22 headers, 1,375 `RAVEN_API` functions) under the C name, except `Rmemory_alloc`, `Rmemory_realloc`, `Rmemory_free`, `Rpixels_alloc`, `Rpixels_free`: raw memory has no PHP meaning. 1,354 are generated into `src/gen/<header>.c`, 16 are written in `src/manual.c` (lifecycle, allocator, Raven-owned memory including `Rpdf_document_save_memory`, foreign-thread callbacks, the backend and host-platform tables). Generated stubs copy the header comment of each function. `tests/CoverageTest.php` checks the set. 0.3.0 adds Carousel, MapView, Raven Script (`raven_script.h`), tile-view sections, `Raction_bind_with_parameters` / `RActionContext`, app lifecycle, window back, and Metal backend constants (`R_BACKEND_DEFAULT`, `R_BACKEND_METAL`). A Label with a tooltip takes the hover (`Rwidget_set_tooltip`; XML `Tooltip` uses that setter).

Classes: one final class per struct of the headers (31 generated, with field tables in `src/gen/structs.c`, including `RTileSection`), plus `RPainter`, `RAllocator`, `RActionContext` (not constructible), `RCapture`, `RBackendVTable`, `RHostPlatformDesc` (in `stubs/manual.stub.php`).

Translations are the spec's list and nothing else. The ones found by testing:

* Every struct pointer parameter is `?T`: Raven checks `NULL` for all of them (the 18 non-const ones were read in its source).
* A `const char*` followed by a `size_t` is sized text (`Rxml_document_parse`, `Rwidget_create_from_xml`, `Rfont_create` and eight more): the size may not pass the string's end.
* Fixed C arrays default to `[]` in the stub (gen_stub cannot default a property to a non-empty array); every constructor fills the ones not given with N zeros.
* Out-structs are written back after the call; a by-reference out-parameter is `?int` / `?float` / `?string`.
