/*
 * raven: 1:1 bindings of Raven (vendored from upstream main). The library is
 * compiled into this extension. Function, struct and constant names stay the C names.
 */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "php.h"
#include "php_raven.h"

#include "ext/standard/info.h"

#include "Raven.h"
#include "runtime.h"

void raven_gen_minit(int module_number);
void raven_manual_minit(int module_number);
void raven_manual_rshutdown(void);

static PHP_MINIT_FUNCTION(raven)
{
#if defined(ZTS) && defined(COMPILE_DL_RAVEN)
	ZEND_TSRMLS_CACHE_UPDATE();
#endif
	raven_runtime_minit();
	raven_threads_minit();
	raven_gen_minit(module_number);
	raven_manual_minit(module_number);
	return SUCCESS;
}

static PHP_GINIT_FUNCTION(raven)
{
#if defined(COMPILE_DL_RAVEN) && defined(ZTS)
	ZEND_TSRMLS_CACHE_UPDATE();
#endif
	memset(raven_globals, 0, sizeof(*raven_globals));
}

static PHP_RINIT_FUNCTION(raven)
{
#if defined(ZTS) && defined(COMPILE_DL_RAVEN)
	ZEND_TSRMLS_CACHE_UPDATE();
#endif
	raven_runtime_rinit();
	return SUCCESS;
}

static PHP_RSHUTDOWN_FUNCTION(raven)
{
	raven_runtime_rshutdown();
	raven_manual_rshutdown();
	return SUCCESS;
}

static PHP_MINFO_FUNCTION(raven)
{
	php_info_print_table_start();
	php_info_print_table_header(2, "raven support", "enabled");
	php_info_print_table_row(2, "Version", PHP_RAVEN_VERSION);
	php_info_print_table_row(2, "Raven version", Rget_version());
	php_info_print_table_row(2, "Raven commit", PHP_RAVEN_UPSTREAM_COMMIT);
	php_info_print_table_row(2, "Vulkan-Headers commit", PHP_RAVEN_VULKAN_HEADERS_COMMIT);
	php_info_print_table_end();
}

zend_module_entry raven_module_entry = {
	STANDARD_MODULE_HEADER,
	"raven",
	NULL,
	PHP_MINIT(raven),
	NULL,
	PHP_RINIT(raven),
	PHP_RSHUTDOWN(raven),
	PHP_MINFO(raven),
	PHP_RAVEN_VERSION,
	PHP_MODULE_GLOBALS(raven),
	PHP_GINIT(raven),
	NULL,
	NULL,
	STANDARD_MODULE_PROPERTIES_EX
};

#ifdef COMPILE_DL_RAVEN
#ifdef ZTS
ZEND_TSRMLS_CACHE_DEFINE()
#endif
ZEND_GET_MODULE(raven)
#endif
