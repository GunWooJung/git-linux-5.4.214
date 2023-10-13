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
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x1c7db409, "i2c_smbus_read_byte_data" },
	{ 0x81555aa5, "i2c_smbus_write_i2c_block_data" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x5748356e, "device_create_file" },
	{ 0xb13c162f, "devm_rtc_device_register" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7931933d, "i2c_smbus_write_byte_data" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xb35586ed, "i2c_transfer" },
	{ 0xcb315f1c, "i2c_smbus_read_i2c_block_data" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x174e203e, "device_remove_file" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cricoh,r2025sd");
MODULE_ALIAS("of:N*T*Cricoh,r2025sdC*");
MODULE_ALIAS("of:N*T*Cricoh,r2221tl");
MODULE_ALIAS("of:N*T*Cricoh,r2221tlC*");
MODULE_ALIAS("of:N*T*Cricoh,rs5c372a");
MODULE_ALIAS("of:N*T*Cricoh,rs5c372aC*");
MODULE_ALIAS("of:N*T*Cricoh,rs5c372b");
MODULE_ALIAS("of:N*T*Cricoh,rs5c372bC*");
MODULE_ALIAS("of:N*T*Cricoh,rv5c386");
MODULE_ALIAS("of:N*T*Cricoh,rv5c386C*");
MODULE_ALIAS("of:N*T*Cricoh,rv5c387a");
MODULE_ALIAS("of:N*T*Cricoh,rv5c387aC*");
MODULE_ALIAS("i2c:r2025sd");
MODULE_ALIAS("i2c:r2221tl");
MODULE_ALIAS("i2c:rs5c372a");
MODULE_ALIAS("i2c:rs5c372b");
MODULE_ALIAS("i2c:rv5c386");
MODULE_ALIAS("i2c:rv5c387a");

MODULE_INFO(srcversion, "B3A40A6DFE28BCCA5FC9630");
