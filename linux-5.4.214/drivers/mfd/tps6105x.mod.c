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
	{ 0xaed06536, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xa55d7e61, "mfd_add_devices" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0xb8b5aa45, "__devm_regmap_init_i2c" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0xc0c3028b, "mfd_remove_devices" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cti,tps61050");
MODULE_ALIAS("of:N*T*Cti,tps61050C*");
MODULE_ALIAS("of:N*T*Cti,tps61052");
MODULE_ALIAS("of:N*T*Cti,tps61052C*");
MODULE_ALIAS("i2c:tps61050");
MODULE_ALIAS("i2c:tps61052");

MODULE_INFO(srcversion, "36BF76B4BB1EEF945D6742C");
