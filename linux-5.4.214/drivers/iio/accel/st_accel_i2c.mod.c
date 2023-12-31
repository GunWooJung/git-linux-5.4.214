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
	{ 0xcc934ef9, "st_accel_common_remove" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xceb8b100, "st_accel_common_probe" },
	{ 0xfe774b58, "st_sensors_i2c_configure" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0x9820f44, "st_accel_get_settings" },
	{ 0x5792f848, "strlcpy" },
	{ 0x3bd1fe4c, "device_get_match_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "st_accel,st_sensors_i2c,industrialio");

MODULE_ALIAS("i2c:lsm303dlh_accel");
MODULE_ALIAS("i2c:lsm303dlhc_accel");
MODULE_ALIAS("i2c:lis3dh");
MODULE_ALIAS("i2c:lsm330d_accel");
MODULE_ALIAS("i2c:lsm330dl_accel");
MODULE_ALIAS("i2c:lsm330dlc_accel");
MODULE_ALIAS("i2c:lis331dlh");
MODULE_ALIAS("i2c:lsm303dl_accel");
MODULE_ALIAS("i2c:lsm303dlm_accel");
MODULE_ALIAS("i2c:lsm330_accel");
MODULE_ALIAS("i2c:lsm303agr_accel");
MODULE_ALIAS("i2c:lis2dh12_accel");
MODULE_ALIAS("i2c:lis3l02dq");
MODULE_ALIAS("i2c:lng2dm");
MODULE_ALIAS("i2c:h3lis331dl_accel");
MODULE_ALIAS("i2c:lis331dl_accel");
MODULE_ALIAS("i2c:lis3lv02dl_accel");
MODULE_ALIAS("i2c:lis2dw12");
MODULE_ALIAS("i2c:lis3de");
MODULE_ALIAS("i2c:lis2de12");
MODULE_ALIAS("acpi*:SMO8840:*");
MODULE_ALIAS("acpi*:SMO8A90:*");

MODULE_INFO(srcversion, "B76BA7E57F0AC09D453A3FB");
