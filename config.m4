PHP_ARG_ENABLE([raven],
  [whether to enable raven support],
  [AS_HELP_STRING([--enable-raven], [Enable the Raven bindings])],
  [no])

if test "$PHP_RAVEN" != "no"; then
  dnl The binding's own C. Generated files live in src/gen.
  raven_glue=" \
    src/raven.c src/runtime.c src/threads.c src/manual.c \
    src/gen/minit.c src/gen/structs.c src/gen/callbacks.c \
    src/gen/raven_accessibility.c \
    src/gen/raven_backend.c \
    src/gen/raven_controls.c \
    src/gen/raven_core.c \
    src/gen/raven_device.c \
    src/gen/raven_dialogs.c \
    src/gen/raven_draw.c \
    src/gen/raven_host.c \
    src/gen/raven_layout.c \
    src/gen/raven_locale.c \
    src/gen/raven_resources.c \
    src/gen/raven_script.c \
    src/gen/raven_shader.c \
    src/gen/raven_shell.c \
    src/gen/raven_style.c \
    src/gen/raven_testing.c \
    src/gen/raven_text_editor.c \
    src/gen/raven_tools.c \
    src/gen/raven_touch.c \
    src/gen/raven_viewport.c \
    src/gen/raven_vulkan.c \
    src/gen/raven_widget.c \
    src/gen/raven_window.c \
    src/gen/raven_xml.c"

  dnl Raven as its CMakeLists.txt builds it for this platform: Vulkan backend on,
  dnl stb_image and nanosvg on, the web pages (web/) off. lib/raven is upstream plus merge-lost restorations at c00b3f2.
  raven_lib=" \
    src/core/accessibility.c src/core/accessibility_touch.c src/core/context.c src/core/deflate.c \
    src/core/diff.c src/core/error.c src/core/file.c src/core/fs.c \
    src/core/fs_watch.c src/core/handle.c src/core/heap.c src/core/jobs.c src/core/lfmap.c \
    src/core/locale.c src/core/memory.c src/core/thread_posix.c src/core/timezone.c src/core/transfer.c src/core/utf8.c \
    src/platform/platform.c src/platform/preedit.c src/platform/web_input.c src/platform/notify.c src/platform/services.c \
    src/platform/spell.c src/platform/taskbar.c src/platform/tray.c \
    src/platform/null/null_platform.c src/platform/host/host_platform.c \
    src/render/draw.c src/render/font.c src/render/font_system.c src/render/bidi.c \
    src/render/font_raster.c src/render/icons.c src/render/image_decode.c src/render/anim_decode.c src/render/image_encode.c src/render/svg_decode.c src/render/renderer.c \
    src/render/texture.c src/render/shader.c src/render/device.c src/render/null/null_backend.c \
    src/render/vulkan/vk_backend.c src/render/vulkan/vk_device.c src/render/vulkan/vk_frame.c \
    src/render/vulkan/vk_glass.c src/render/vulkan/vk_loader.c src/render/vulkan/vk_pipeline.c \
    src/render/vulkan/vk_public.c src/render/vulkan/vk_surface.c src/render/vulkan/vk_texture.c \
    src/resources/default_font.c src/resources/mono_font.c src/resources/icons.c \
    src/widget/actions.c src/widget/anim.c src/widget/events.c src/widget/touch.c src/widget/layout.c \
    src/widget/direction.c src/widget/paint.c src/widget/registry.c src/widget/style.c src/widget/theme.c \
    src/widget/look.c src/widgets/platform_looks.c src/widget/widget.c src/widget/window.c \
    src/widget/inspector.c src/widget/testing.c src/widget/headless.c \
    src/widgets/common.c src/widgets/textedit.c src/widgets/background_blur.c src/widgets/border.c \
    src/widgets/box_panel.c src/widgets/canvas.c src/widgets/expander.c src/widgets/grid.c \
    src/widgets/overlay.c src/widgets/scroll_box.c src/widgets/size_box.c src/widgets/splitter.c \
    src/widgets/switcher.c src/widgets/tab_view.c src/widgets/wrap_box.c src/widgets/button.c \
    src/widgets/checkbox.c src/widgets/color_picker.c src/widgets/timeline.c src/widgets/node_graph.c \
    src/widgets/canvas_look.c src/widgets/block_editor.c src/widgets/tile_view.c src/widgets/combo_box.c \
    src/widgets/image.c src/widgets/label.c src/widgets/markdown.c src/widgets/list_view.c \
    src/widgets/menu.c src/widgets/progress_bar.c src/widgets/slider.c src/widgets/spin_box.c \
    src/widgets/syntax.c src/widgets/text_editor.c src/widgets/header_bar.c src/widgets/file_browser.c \
    src/widgets/dialogs.c src/widgets/dock_area.c src/widgets/island.c src/widgets/text_input.c \
    src/widgets/tree_view.c src/widgets/viewport.c src/widgets/table.c src/widgets/date_picker.c \
    src/widgets/time_picker.c src/widgets/toast.c src/widgets/breadcrumb.c src/widgets/rating.c \
    src/widgets/pagination.c src/widgets/plot.c src/widgets/pdf_view.c \
    src/widgets/chart.c src/widgets/map_view.c src/widgets/carousel.c \
    src/widgets/diff_view.c src/widgets/system_web_view.c src/widgets/spelling.c \
    src/widgets/pdf_document.c src/widgets/pdf_print.c \
    src/script/rs_common.c src/script/rs_builtins.c src/script/rs_lexer.c \
    src/script/rs_parser.c src/script/rs_checker.c src/script/rs_compiler.c \
    src/script/rs_vm.c src/script/rs_batch.c src/script/rs_format.c \
    src/script/rs_analysis.c src/script/script_raven.c \
    src/xml/xml_attributes.c src/xml/xml_components.c src/xml/xml_dom.c src/xml/xml_schema.c \
    src/xml/xml_loader.c src/xml/xml_watch.c src/xml/xml_parser.c"

  raven_defs="-DRAVEN_BACKEND_VULKAN_ENABLED -DRAVEN_WITH_STB_IMAGE -DRAVEN_WITH_SVG"
  case $host_os in
    darwin*)
      raven_lib="$raven_lib src/platform/cocoa/cocoa_platform.m src/platform/cocoa/cocoa_print.m \
        src/platform/cocoa/cocoa_spell.m src/platform/apple/webkit_web_view.m \
        src/render/metal/metal_backend.m src/render/metal/metal_pipeline.m \
        src/render/metal/metal_texture.m src/render/metal/metal_frame.m"
      raven_defs="$raven_defs -DRAVEN_PLATFORM_COCOA -DRAVEN_BACKEND_METAL_ENABLED -D_DARWIN_C_SOURCE"
      raven_frameworks="CoreFoundation Foundation AppKit QuartzCore Metal UserNotifications"
      ;;
    *)
      PKG_CHECK_MODULES([X11], [x11])
      raven_lib="$raven_lib src/platform/x11/x11_platform.c src/platform/atspi.c src/platform/x11/x11_keys.c \
        src/platform/x11/x11_xi2.c src/platform/sni.c src/platform/wayland/wayland_platform.c \
        src/platform/spell_unix.c"
      raven_defs="$raven_defs -DRAVEN_PLATFORM_X11 -DRAVEN_PLATFORM_WAYLAND $X11_CFLAGS"
      raven_frameworks=""
      PHP_EVAL_LIBLINE([$X11_LIBS], [RAVEN_SHARED_LIBADD])
      PHP_ADD_LIBRARY([pthread],, [RAVEN_SHARED_LIBADD])
      PHP_ADD_LIBRARY([m],, [RAVEN_SHARED_LIBADD])
      PHP_ADD_LIBRARY([dl],, [RAVEN_SHARED_LIBADD])
      ;;
  esac

  PHP_NEW_EXTENSION([raven],
    [$raven_glue],
    [$ext_shared],,
    [-std=gnu17 -fvisibility=hidden -DZEND_ENABLE_STATIC_TSRMLS_CACHE=1 -I$ext_srcdir/lib/raven/include])
  PHP_ADD_BUILD_DIR([$ext_builddir/src])
  PHP_ADD_BUILD_DIR([$ext_builddir/src/gen])

  dnl Raven's sources keep upstream's flags (-std=c11, its defines), which PHP_NEW_EXTENSION
  dnl cannot give one group of files. The rules are written the way PHP_ADD_SOURCES_X writes a
  dnl .c rule, as appkit's config.m4 does for its .m files. cocoa_platform.m is manual
  dnl retain/release (upstream builds it without -fobjc-arc).
  case $ext_dir in
    "") raven_srcdir="$abs_srcdir/"; raven_bdir=""; raven_inc="-I. -I$abs_srcdir" ;;
    *) raven_srcdir="$abs_srcdir/$ext_dir/"; raven_bdir="$ext_dir/"; raven_inc="-I$raven_bdir -I$raven_srcdir" ;;
  esac
  if test "$ext_shared" = "yes"; then
    raven_cc="$shared_c_pre $raven_inc $shared_c_meta"
    raven_post=$shared_c_post
  else
    raven_cc="$php_c_pre $raven_inc $php_c_meta"
    raven_post=$php_c_post
  fi
  raven_libflags="-std=c11 -fvisibility=hidden $raven_defs -I${raven_srcdir}lib/raven/include -I${raven_srcdir}lib/raven/third_party -I${raven_srcdir}lib/vulkan-headers/include"
  for raven_src in $raven_lib; do
    PHP_ADD_BUILD_DIR([$ext_builddir/lib/raven/$(dirname $raven_src)])
    raven_obj=${raven_bdir}lib/raven/$(echo "$raven_src" | $SED -e 's/\.c$//;s/\.m$//')
    case $raven_src in
      src/render/metal/*.m|src/platform/apple/*.m) raven_lang="-x objective-c -fobjc-arc -Wno-overlength-strings" ;;
      *.m) raven_lang="-x objective-c -fno-objc-arc" ;;
      *) raven_lang="" ;;
    esac
    if test "$ext_shared" = "yes"; then
      shared_objects_raven="$shared_objects_raven $raven_obj.lo"
    else
      PHP_GLOBAL_OBJS="$PHP_GLOBAL_OBJS $raven_obj.lo"
    fi
    cat >>Makefile.objects<<EOF
-include $raven_obj.dep
$raven_obj.lo: ${raven_srcdir}lib/raven/$raven_src
	$raven_cc $raven_lang $raven_libflags '-DRVN_VERSION_STRING="0.3.0"' -c ${raven_srcdir}lib/raven/$raven_src -o $raven_obj.lo $raven_post -MMD -MF $raven_obj.dep -MT $raven_obj.lo
EOF
  done

  dnl Shared, the frameworks go to the .so; compiled in, to PHP's own link line.
  if test "$ext_shared" = "yes"; then
    for raven_framework in $raven_frameworks; do
      RAVEN_SHARED_LIBADD="$RAVEN_SHARED_LIBADD -framework $raven_framework"
    done
  else
    for raven_framework in $raven_frameworks; do
      PHP_ADD_FRAMEWORK([$raven_framework])
    done
  fi
  PHP_SUBST([RAVEN_SHARED_LIBADD])
fi
