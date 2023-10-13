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
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x12a38747, "usleep_range" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xc4fb10cd, "gpiod_set_value_cansleep" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x65489876, "gpiod_get_raw_value_cansleep" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x586583b8, "spi_sync" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xaa8565d5, "fpga_mgr_register" },
	{ 0x67d846f8, "devm_fpga_mgr_create" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0x2bf355c4, "devm_gpiod_get_optional" },
	{ 0xa08d547b, "devm_gpiod_get" },
	{ 0x5573a68c, "spi_get_device_id" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x9e379360, "gpiod_get_value_cansleep" },
	{ 0x13819104, "fpga_mgr_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "fpga-mgr");

MODULE_ALIAS("spi:cyclone-ps-spi");
MODULE_ALIAS("spi:fpga-passive-serial");
MODULE_ALIAS("spi:fpga-arria10-passive-serial");
MODULE_ALIAS("of:N*T*Caltr,fpga-passive-serial");
MODULE_ALIAS("of:N*T*Caltr,fpga-passive-serialC*");
MODULE_ALIAS("of:N*T*Caltr,fpga-arria10-passive-serial");
MODULE_ALIAS("of:N*T*Caltr,fpga-arria10-passive-serialC*");

MODULE_INFO(srcversion, "83D3C7086B9A3561FD4B4C6");
