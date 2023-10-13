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
	{ 0x12a38747, "usleep_range" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1c7db409, "i2c_smbus_read_byte_data" },
	{ 0x7931933d, "i2c_smbus_write_byte_data" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xdcd5c2e5, "i2c_smbus_write_word_data" },
	{ 0x1d67d36f, "i2c_smbus_read_word_data" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x1a0f5952, "__devm_iio_device_register" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("of:N*T*Cvishay,vcnl4000");
MODULE_ALIAS("of:N*T*Cvishay,vcnl4000C*");
MODULE_ALIAS("of:N*T*Cvishay,vcnl4010");
MODULE_ALIAS("of:N*T*Cvishay,vcnl4010C*");
MODULE_ALIAS("of:N*T*Cvishay,vcnl4020");
MODULE_ALIAS("of:N*T*Cvishay,vcnl4020C*");
MODULE_ALIAS("of:N*T*Cvishay,vcnl4040");
MODULE_ALIAS("of:N*T*Cvishay,vcnl4040C*");
MODULE_ALIAS("of:N*T*Cvishay,vcnl4200");
MODULE_ALIAS("of:N*T*Cvishay,vcnl4200C*");
MODULE_ALIAS("i2c:vcnl4000");
MODULE_ALIAS("i2c:vcnl4010");
MODULE_ALIAS("i2c:vcnl4020");
MODULE_ALIAS("i2c:vcnl4040");
MODULE_ALIAS("i2c:vcnl4200");

MODULE_INFO(srcversion, "F5AEC4891918D2F69132C41");
