# Log

## 2026-11-17

* **Synced**: Raven main `4eaba42d35eb716f3b42da5b5f5d775837a8e533` vendored (library still reports 0.2.3). Pull request #218: a Label with a tooltip takes the hover so the tooltip shows (`Rwidget_set_tooltip`, XML `Tooltip="..."` goes through that setter). No new functions: 1,283 `RAVEN_API`, 1,278 bound (1,262 generated, 16 manual), 35 classes. Header comments are copied into the stubs; `Rwidget_set_tooltip` carries the new label-hover sentence. Suite 59 passed (469 assertions).

## 2026-11-16

* **Synced**: Raven main `0f0da68197c8def4f4ffab93bae53bccb6a199c8` vendored, copied unchanged from a clone of upstream. It is `dfac083` plus the two Vulkan fixes above, merged upstream as pull requests #215 and #216, so `lib/raven/` is plain upstream again and the exception in AGENTS.md rule 3 is gone. Re-extracted: API unchanged, bound 1,262, manual 16, not bound 5, pending 0.
* **Patched**: two Vulkan fixes on top of `dfac083` in `lib/raven/src/render/vulkan/`, sent upstream as pull requests from projectsaturnstudios/Raven: texture uploads no longer wait for the GPU after every batch (`vk_texture.c`, `vk_frame.c`, `vk_backend.c`, `vk_backend.h`), and three swapchain images at least with vsync (`vk_surface.c`). Raven test_render 374 checks, 0 failures (macOS, headless and windowed). Suite 57 passed on NTS and ZTS. Kitchen sink, Raven + Metal + GlassDark, uncapped, vsync on, 120 Hz: 47 to 60 frames a second before, 115 to 120 after.
* **Synced**: Raven main `dfac083f27703b458ae359aeb792e7efc0699885` vendored (library still reports 0.2.3). 1,283 `RAVEN_API` functions, 1,278 bound (1,262 generated, 16 manual), 35 classes. Chart (pie, donut, gauge, heatmap, sparkline: 48 functions, `RChartKind`, `R_WIDGET_CHART`), table cell colors and multi-select (7 functions). `const float*` arrays generated: `Rchart_set_values` by `count`, `Rchart_set_grid` by `rows` × `columns`. Generated C return is `ret` so it does not collide with a parameter named `r` (`Rchart_add_band`). Cocoa links UserNotifications. No signature breaks. Suite 57 passed (451 assertions). Crash sweep 1,278 functions, the three headless file dialogs timed out as before.

## 2026-11-14

* **Synced**: Raven main `b0a4aa786d99442fed08d9f3509e8e4e97a245cf` vendored (library still reports 0.2.3). 1,228 `RAVEN_API` functions, 1,223 bound (1,207 generated, 16 manual), 35 classes. `Rpdf_document_save_memory` is manual (`Rmemory_free`). `const uint8_t*` RGBA is sized by the next two `int` parameters so `Rpdf_document_draw_image` (`pixels_width` / `pixels_height`) is generated. `Rpopup_open` slots by content, as `Rdialog_open`. Suite 54 passed (408 assertions), 1 skipped (gd); crash sweep 1,223 functions, the three headless file dialogs timed out as before. Vulkan demo under Xvfb + lavapipe rendered.

## 2026-11-12

* **Built**: Raven v0.2.3 vendored, generator and runtime, 1,123 functions. Suite 48 passed (370 assertions) on Homebrew PHP 8.4.27 NTS and ZTS. Crash sweep clean but the three headless file dialogs.
* **Found by tests**: sized text read past the string (`Rxml_document_parse` and ten more) now length-checked; struct pointers all nullable; `clone` of `RPainter` crashed through a throwing `clone_obj` (now `NULL`); a forked child hung in `Rshutdown()` at request end (now skipped).
