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
	{ 0xc798c6ea, "adis_update_scan_mode" },
	{ 0x86f434e2, "driver_unregister" },
	{ 0xf6dd8fef, "__spi_register_driver" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7f5cb80c, "adis_single_conversion" },
	{ 0xfc0bf29c, "adis_read_reg" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x3d5abd0a, "adis_write_reg" },
	{ 0xab1b6c43, "__iio_device_register" },
	{ 0x1316505d, "adis_initial_startup" },
	{ 0xa39c23f3, "adis_setup_buffer_and_trigger" },
	{ 0x76727782, "adis_init" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0x6c079b79, "adis_cleanup_buffer_and_trigger" },
	{ 0xe1f088fa, "iio_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "adis_lib,industrialio");


MODULE_INFO(srcversion, "A9A93DEB81E09516679A052");
