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
	{ 0x26000124, "spmi_register_read" },
	{ 0xade1b6da, "spmi_register_zero_write" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x65c1c347, "spmi_ext_register_write" },
	{ 0x4a794bc, "__regmap_init" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9bfceb49, "spmi_register_write" },
	{ 0xbb080f79, "spmi_ext_register_readl" },
	{ 0x3c391e6a, "spmi_ext_register_read" },
	{ 0x30cb2839, "spmi_ext_register_writel" },
};

MODULE_INFO(depends, "spmi");


MODULE_INFO(srcversion, "1E3246823CE1A9B76C01ADA");
