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
	{ 0x32ee9868, "simple_open" },
	{ 0xc2448345, "default_llseek" },
	{ 0x3f556282, "simple_attr_release" },
	{ 0x54d16a13, "debugfs_attr_write" },
	{ 0xebaa60f0, "debugfs_attr_read" },
	{ 0x5c42b5ca, "no_llseek" },
	{ 0x578ddaca, "adis_debugfs_reg_access" },
	{ 0xc798c6ea, "adis_update_scan_mode" },
	{ 0x86f434e2, "driver_unregister" },
	{ 0xf6dd8fef, "__spi_register_driver" },
	{ 0x7f5cb80c, "adis_single_conversion" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdb798d3d, "debugfs_create_file_unsafe" },
	{ 0xab1b6c43, "__iio_device_register" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x1316505d, "adis_initial_startup" },
	{ 0xa39c23f3, "adis_setup_buffer_and_trigger" },
	{ 0x76727782, "adis_init" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0x5573a68c, "spi_get_device_id" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xfc0bf29c, "adis_read_reg" },
	{ 0x6c079b79, "adis_cleanup_buffer_and_trigger" },
	{ 0xe1f088fa, "iio_device_unregister" },
	{ 0x703de441, "simple_attr_open" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x3d5abd0a, "adis_write_reg" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "adis_lib,industrialio");

MODULE_ALIAS("spi:adis16133");
MODULE_ALIAS("spi:adis16135");
MODULE_ALIAS("spi:adis16136");
MODULE_ALIAS("spi:adis16137");

MODULE_INFO(srcversion, "95960E64B58FD3EC16012CF");
