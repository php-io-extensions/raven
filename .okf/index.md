---
okf_version: "0.2"
---

# ext-raven

1:1 PHP bindings of Raven main `b0a4aa7` (vendored, unchanged; the library still reports 0.2.3), a retained-mode GUI toolkit in C with a Vulkan renderer. Version 0.11.0. Linux, macOS. PHP 8.4 NTS + ZTS.

# API

* [Bindings](api/bindings.md) — 1,223 functions, 35 classes, every enumerator and define; translations; what is not bound.

# Architecture

* [Generator](architecture/generator.md) — api.json from clang's AST, bindings.php roles, generated stubs and C.
* [Callbacks and threads](architecture/callbacks.md) — slots, sweep, UI-thread calls, foreign threads, deadlines, fork, request end.

# Runbooks

* [Build, install, test](runbooks/build.md) — Mac NTS/ZTS, Debian, the crash sweep.
