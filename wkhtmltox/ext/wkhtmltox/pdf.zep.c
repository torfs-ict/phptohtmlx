
#ifdef HAVE_CONFIG_H
#include "../ext_config.h"
#endif

#include <php.h>
#include "../php_ext.h"
#include "../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"


ZEPHIR_INIT_CLASS(WkHtmlToX_Pdf) {

	ZEPHIR_REGISTER_CLASS(WkHtmlToX, Pdf, wkhtmltox, pdf, NULL, 0);

	return SUCCESS;

}

