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
	{ 0x3f556282, "simple_attr_release" },
	{ 0xa615d9a, "simple_attr_write" },
	{ 0x2a456f5f, "simple_attr_read" },
	{ 0x91fc7183, "generic_file_llseek" },
	{ 0x578ddaca, "adis_debugfs_reg_access" },
	{ 0xc798c6ea, "adis_update_scan_mode" },
	{ 0x86f434e2, "driver_unregister" },
	{ 0xf6dd8fef, "__spi_register_driver" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xd0a46a6a, "debugfs_create_file" },
	{ 0xab1b6c43, "__iio_device_register" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x41c7f606, "adis_check_status" },
	{ 0xf9a482f9, "msleep" },
	{ 0x589c62c9, "adis_reset" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xa39c23f3, "adis_setup_buffer_and_trigger" },
	{ 0x76727782, "adis_init" },
	{ 0x5573a68c, "spi_get_device_id" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7f5cb80c, "adis_single_conversion" },
	{ 0xfc0bf29c, "adis_read_reg" },
	{ 0x6c079b79, "adis_cleanup_buffer_and_trigger" },
	{ 0xe1f088fa, "iio_device_unregister" },
	{ 0x703de441, "simple_attr_open" },
	{ 0x3d5abd0a, "adis_write_reg" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "adis_lib,industrialio");

MODULE_ALIAS("of:N*T*Cadi,adis16460");
MODULE_ALIAS("of:N*T*Cadi,adis16460C*");
MODULE_ALIAS("spi:adis16460");

MODULE_INFO(srcversion, "F4830658694470045D0B139");
