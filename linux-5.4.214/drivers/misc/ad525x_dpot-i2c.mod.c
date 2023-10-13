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
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbc1f43a, "ad_dpot_probe" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x377a9732, "i2c_smbus_read_byte" },
	{ 0x1c7db409, "i2c_smbus_read_byte_data" },
	{ 0x1d67d36f, "i2c_smbus_read_word_data" },
	{ 0xbca0b1e, "i2c_smbus_write_byte" },
	{ 0x7931933d, "i2c_smbus_write_byte_data" },
	{ 0xdcd5c2e5, "i2c_smbus_write_word_data" },
	{ 0xe6d63adb, "ad_dpot_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ad525x_dpot");

MODULE_ALIAS("i2c:ad5258");
MODULE_ALIAS("i2c:ad5259");
MODULE_ALIAS("i2c:ad5251");
MODULE_ALIAS("i2c:ad5252");
MODULE_ALIAS("i2c:ad5253");
MODULE_ALIAS("i2c:ad5254");
MODULE_ALIAS("i2c:ad5255");
MODULE_ALIAS("i2c:ad5241");
MODULE_ALIAS("i2c:ad5242");
MODULE_ALIAS("i2c:ad5243");
MODULE_ALIAS("i2c:ad5245");
MODULE_ALIAS("i2c:ad5246");
MODULE_ALIAS("i2c:ad5247");
MODULE_ALIAS("i2c:ad5248");
MODULE_ALIAS("i2c:ad5280");
MODULE_ALIAS("i2c:ad5282");
MODULE_ALIAS("i2c:adn2860");
MODULE_ALIAS("i2c:ad5273");
MODULE_ALIAS("i2c:ad5161");
MODULE_ALIAS("i2c:ad5171");
MODULE_ALIAS("i2c:ad5170");
MODULE_ALIAS("i2c:ad5172");
MODULE_ALIAS("i2c:ad5173");
MODULE_ALIAS("i2c:ad5272");
MODULE_ALIAS("i2c:ad5274");

MODULE_INFO(srcversion, "4F6D9217DFF2DA494F271D2");
