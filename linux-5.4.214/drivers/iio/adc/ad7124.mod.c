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
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x5723493, "ad_sd_read_reg" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xc514b908, "ad_sigma_delta_single_conversion" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xba67a6db, "ad_sd_init" },
	{ 0x5573a68c, "spi_get_device_id" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0x461de3a2, "ad_sd_write_reg" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xd0fe3a42, "ad_sd_cleanup_buffer_and_trigger" },
	{ 0xe1f088fa, "iio_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,ad_sigma_delta");

MODULE_ALIAS("of:N*T*Cadi,ad7124-4");
MODULE_ALIAS("of:N*T*Cadi,ad7124-4C*");
MODULE_ALIAS("of:N*T*Cadi,ad7124-8");
MODULE_ALIAS("of:N*T*Cadi,ad7124-8C*");
MODULE_ALIAS("spi:ad7124-4");
MODULE_ALIAS("spi:ad7124-8");

MODULE_INFO(srcversion, "79B5A82169DC85755454966");
