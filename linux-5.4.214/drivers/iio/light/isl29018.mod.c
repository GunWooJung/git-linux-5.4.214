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
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x1a0f5952, "__devm_iio_device_register" },
	{ 0xb8b5aa45, "__devm_regmap_init_i2c" },
	{ 0x33560c9e, "devm_add_action" },
	{ 0x868b9359, "devm_regulator_get" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xeee38cc9, "acpi_match_device" },
	{ 0x15cb5620, "is_acpi_device_node" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0xc5850110, "printk" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1643a127, "regulator_disable" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xfe543c51, "regulator_enable" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0x12a38747, "usleep_range" },
	{ 0x904a8908, "regmap_write" },
	{ 0xe1b1c080, "regmap_get_device" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("of:N*T*Cisil,isl29018");
MODULE_ALIAS("of:N*T*Cisil,isl29018C*");
MODULE_ALIAS("of:N*T*Cisil,isl29023");
MODULE_ALIAS("of:N*T*Cisil,isl29023C*");
MODULE_ALIAS("of:N*T*Cisil,isl29035");
MODULE_ALIAS("of:N*T*Cisil,isl29035C*");
MODULE_ALIAS("i2c:isl29018");
MODULE_ALIAS("i2c:isl29023");
MODULE_ALIAS("i2c:isl29035");
MODULE_ALIAS("acpi*:ISL29018:*");
MODULE_ALIAS("acpi*:ISL29023:*");
MODULE_ALIAS("acpi*:ISL29035:*");

MODULE_INFO(srcversion, "4CA0CF23EFAF92D1357F72D");
