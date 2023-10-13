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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0x61d19c6, "__devm_regmap_init" },
	{ 0x3ab00a6c, "w1_reset_select_slave" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x4a794bc, "__regmap_init" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xadc30d10, "w1_write_8" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9ea21153, "w1_read_8" },
};

MODULE_INFO(depends, "wire");


MODULE_INFO(srcversion, "31EAA0ADF38C06BF96DCDEE");
