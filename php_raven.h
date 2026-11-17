#ifndef PHP_RAVEN_H
#define PHP_RAVEN_H

extern zend_module_entry raven_module_entry;
#define phpext_raven_ptr &raven_module_entry

#define PHP_RAVEN_VERSION "0.11.0"

/* Raven main at 0f0da68 (library still reports 0.2.3). Vendored unchanged. */
#define PHP_RAVEN_UPSTREAM_COMMIT "0f0da68197c8def4f4ffab93bae53bccb6a199c8"

/* Khronos Vulkan-Headers tag v1.3.290, the tag Raven's CMake fetches when no Vulkan SDK is found. */
#define PHP_RAVEN_VULKAN_HEADERS_COMMIT "b379292b2ab6df5771ba9870d53cf8b2c9295daf"

#if defined(ZTS) && defined(COMPILE_DL_RAVEN)
ZEND_TSRMLS_CACHE_EXTERN()
#endif

#endif
