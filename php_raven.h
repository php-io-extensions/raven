#ifndef PHP_RAVEN_H
#define PHP_RAVEN_H

extern zend_module_entry raven_module_entry;
#define phpext_raven_ptr &raven_module_entry

#define PHP_RAVEN_VERSION "0.11.0"

/* Raven main at 4eaba42 (library still reports 0.2.3). Vendored unchanged. */
#define PHP_RAVEN_UPSTREAM_COMMIT "4eaba42d35eb716f3b42da5b5f5d775837a8e533"

/* Khronos Vulkan-Headers tag v1.3.290, the tag Raven's CMake fetches when no Vulkan SDK is found. */
#define PHP_RAVEN_VULKAN_HEADERS_COMMIT "b379292b2ab6df5771ba9870d53cf8b2c9295daf"

#if defined(ZTS) && defined(COMPILE_DL_RAVEN)
ZEND_TSRMLS_CACHE_EXTERN()
#endif

#endif
