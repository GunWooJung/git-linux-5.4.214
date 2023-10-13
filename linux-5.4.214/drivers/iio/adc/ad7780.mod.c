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
	{ 0x86f434e2, "driver_unregister" },
	{ 0xf6dd8fef, "__spi_register_driver" },
	{ 0xc514b908, "ad_sigma_delta_single_conversion" },
	{ 0x4853215d, "regulator_get_voltage" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xab1b6c43, "__iio_device_register" },
	{ 0x9a028921, "ad_sd_setup_buffer_and_trigger" },
	{ 0xfe543c51, "regulator_enable" },
	{ 0x868b9359, "devm_regulator_get" },
	{ 0x2bf355c4, "devm_gpiod_get_optional" },
	{ 0x5573a68c, "spi_get_device_id" },
	{ 0xba67a6db, "ad_sd_init" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xe23f1472, "gpiod_set_value" },
	{ 0x1643a127, "regulator_disable" },
	{ 0xd0fe3a42, "ad_sd_cleanup_buffer_and_trigger" },
	{ 0xe1f088fa, "iio_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ad_sigma_delta,industrialio");

MODULE_ALIAS("spi:ad7170");
MODULE_ALIAS("spi:ad7171");
MODULE_ALIAS("spi:ad7780");
MODULE_ALIAS("spi:ad7781");

MODULE_INFO(srcversion, "B0BCC8811AAA7C97A921356");
