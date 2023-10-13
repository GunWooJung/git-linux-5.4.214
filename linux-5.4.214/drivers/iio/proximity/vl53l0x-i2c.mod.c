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
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xcb315f1c, "i2c_smbus_read_i2c_block_data" },
	{ 0x12a38747, "usleep_range" },
	{ 0x1c7db409, "i2c_smbus_read_byte_data" },
	{ 0x7931933d, "i2c_smbus_write_byte_data" },
	{ 0x1a0f5952, "__devm_iio_device_register" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("of:N*T*Cst,vl53l0x");
MODULE_ALIAS("of:N*T*Cst,vl53l0xC*");

MODULE_INFO(srcversion, "D445428A648B682BC6D4ACA");
