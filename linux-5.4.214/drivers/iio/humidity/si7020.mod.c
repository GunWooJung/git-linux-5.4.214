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
	{ 0x1a0f5952, "__devm_iio_device_register" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xbca0b1e, "i2c_smbus_write_byte" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1d67d36f, "i2c_smbus_read_word_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("of:N*T*Csilabs,si7020");
MODULE_ALIAS("of:N*T*Csilabs,si7020C*");
MODULE_ALIAS("i2c:si7020");
MODULE_ALIAS("i2c:th06");

MODULE_INFO(srcversion, "6676495A4E6C9A854B2C21A");
