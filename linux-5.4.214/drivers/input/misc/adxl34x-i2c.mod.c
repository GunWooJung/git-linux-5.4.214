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
	{ 0x6238dc29, "adxl34x_probe" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x49a4fcbd, "adxl34x_remove" },
	{ 0x66535a18, "adxl34x_suspend" },
	{ 0xe4586827, "adxl34x_resume" },
	{ 0xcb315f1c, "i2c_smbus_read_i2c_block_data" },
	{ 0x1c7db409, "i2c_smbus_read_byte_data" },
	{ 0x4fc58c0c, "i2c_transfer_buffer_flags" },
	{ 0x7931933d, "i2c_smbus_write_byte_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "adxl34x");

MODULE_ALIAS("of:N*T*Cadi,adxl345");
MODULE_ALIAS("of:N*T*Cadi,adxl345C*");
MODULE_ALIAS("of:N*T*Cadi,adxl34x");
MODULE_ALIAS("of:N*T*Cadi,adxl34xC*");
MODULE_ALIAS("i2c:adxl34x");

MODULE_INFO(srcversion, "A8EC2311FE69BA46699E517");
