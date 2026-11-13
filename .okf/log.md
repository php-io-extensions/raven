# Log

## 2026-11-12

* **Built**: Raven v0.2.3 vendored, generator and runtime, 1,123 functions. Suite 48 passed (370 assertions) on Homebrew PHP 8.4.27 NTS and ZTS. Crash sweep clean but the three headless file dialogs.
* **Found by tests**: sized text read past the string (`Rxml_document_parse` and ten more) now length-checked; struct pointers all nullable; `clone` of `RPainter` crashed through a throwing `clone_obj` (now `NULL`); a forked child hung in `Rshutdown()` at request end (now skipped).
