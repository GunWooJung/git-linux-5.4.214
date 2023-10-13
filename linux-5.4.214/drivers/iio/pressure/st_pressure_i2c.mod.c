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
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x5792f848, "strlcpy" },
	{ 0x23dc4fa6, "st_sensors_match_acpi_device" },
	{ 0x15cb5620, "is_acpi_device_node" },
	{ 0x7328818f, "st_press_common_probe" },
	{ 0xfe774b58, "st_sensors_i2c_configure" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0xfe6250a, "st_press_get_settings" },
	{ 0xb1294078, "st_press_common_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "st_sensors_i2c,st_pressure,industrialio");

MODULE_ALIAS("i2c:lps001wp");
MODULE_ALIAS("i2c:lps25h");
MODULE_ALIAS("i2c:lps331ap");
MODULE_ALIAS("i2c:lps22hb");
MODULE_ALIAS("i2c:lps33hw");
MODULE_ALIAS("i2c:lps35hw");
MODULE_ALIAS("i2c:lps22hh");
MODULE_ALIAS("acpi*:SNO9210:*");

MODULE_INFO(srcversion, "E024EE017C4B9E7F2CB7BFA");
