#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0xd3bc5fa0, "iio_read_const_attr" },
	{ 0xdfa5f1bb, "ad_sd_validate_trigger" },
	{ 0x86f434e2, "driver_unregister" },
	{ 0xf6dd8fef, "__spi_register_driver" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xab1b6c43, "__iio_device_register" },
	{ 0x5723493, "ad_sd_read_reg" },
	{ 0x12a38747, "usleep_range" },
	{ 0x62b30984, "ad_sd_reset" },
	{ 0x9a028921, "ad_sd_setup_buffer_and_trigger" },
	{ 0x5573a68c, "spi_get_device_id" },
	{ 0x4853215d, "regulator_get_voltage" },
	{ 0xfe543c51, "regulator_enable" },
	{ 0x868b9359, "devm_regulator_get" },
	{ 0xba67a6db, "ad_sd_init" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xc514b908, "ad_sigma_delta_single_conversion" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xaf9a0f50, "ad_sd_calibrate_all" },
	{ 0xb4e1369f, "iio_device_release_direct_mode" },
	{ 0x3ccdc02b, "iio_device_claim_direct_mode" },
	{ 0x461de3a2, "ad_sd_write_reg" },
	{ 0x1643a127, "regulator_disable" },
	{ 0xd0fe3a42, "ad_sd_cleanup_buffer_and_trigger" },
	{ 0xe1f088fa, "iio_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,ad_sigma_delta");

MODULE_ALIAS("spi:ad7785");
MODULE_ALIAS("spi:ad7792");
MODULE_ALIAS("spi:ad7793");
MODULE_ALIAS("spi:ad7794");
MODULE_ALIAS("spi:ad7795");
MODULE_ALIAS("spi:ad7796");
MODULE_ALIAS("spi:ad7797");
MODULE_ALIAS("spi:ad7798");
MODULE_ALIAS("spi:ad7799");

MODULE_INFO(srcversion, "5AE2FB31B6E978C86D021A4");
