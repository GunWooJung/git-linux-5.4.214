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
	{ 0xab1b6c43, "__iio_device_register" },
	{ 0x12a38747, "usleep_range" },
	{ 0xfe543c51, "regulator_enable" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x868b9359, "devm_regulator_get" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0xc5850110, "printk" },
	{ 0x1c7db409, "i2c_smbus_read_byte_data" },
	{ 0x1643a127, "regulator_disable" },
	{ 0xe1f088fa, "iio_device_unregister" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x7931933d, "i2c_smbus_write_byte_data" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("of:N*T*Cmaxim,ds4422");
MODULE_ALIAS("of:N*T*Cmaxim,ds4422C*");
MODULE_ALIAS("of:N*T*Cmaxim,ds4424");
MODULE_ALIAS("of:N*T*Cmaxim,ds4424C*");
MODULE_ALIAS("i2c:ds4422");
MODULE_ALIAS("i2c:ds4424");

MODULE_INFO(srcversion, "9CA25C2A265083190F4A9AA");
