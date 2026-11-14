# Log

## 2026-11-14

* **Synced**: Raven main `b0a4aa786d99442fed08d9f3509e8e4e97a245cf` vendored (library still reports 0.2.3). 1,228 `RAVEN_API` functions, 1,223 bound (1,207 generated, 16 manual), 35 classes. `Rpdf_document_save_memory` is manual (`Rmemory_free`). `const uint8_t*` RGBA is sized by the next two `int` parameters so `Rpdf_document_draw_image` (`pixels_width` / `pixels_height`) is generated. `Rpopup_open` slots by content, as `Rdialog_open`. Suite 54 passed (408 assertions), 1 skipped (gd); crash sweep 1,223 functions, the three headless file dialogs timed out as before. Vulkan demo under Xvfb + lavapipe rendered.

## 2026-11-12

* **Built**: Raven v0.2.3 vendored, generator and runtime, 1,123 functions. Suite 48 passed (370 assertions) on Homebrew PHP 8.4.27 NTS and ZTS. Crash sweep clean but the three headless file dialogs.
* **Found by tests**: sized text read past the string (`Rxml_document_parse` and ten more) now length-checked; struct pointers all nullable; `clone` of `RPainter` crashed through a throwing `clone_obj` (now `NULL`); a forked child hung in `Rshutdown()` at request end (now skipped).
