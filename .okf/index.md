---
okf_version: "0.2"
---

# ext-raven

1:1 PHP bindings of Raven main `c00b3f2` (library 0.3.0, vendored; merge-lost declarations restored so it compiles), a retained-mode GUI toolkit in C with a Vulkan renderer (Metal on Apple). Version 0.11.0. Linux, macOS. PHP 8.4 NTS + ZTS.

# API

* [Bindings](api/bindings.md) — 1,618 functions, 45 classes, every enumerator and define; translations; what is not bound.

# Architecture

* [Generator](architecture/generator.md) — api.json from clang's AST, bindings.php roles, generated stubs and C.
* [Callbacks and threads](architecture/callbacks.md) — slots, sweep, UI-thread calls, foreign threads, deadlines, fork, request end.

# Runbooks

* [Build, install, test](runbooks/build.md) — Mac NTS/ZTS, Debian, the crash sweep.
