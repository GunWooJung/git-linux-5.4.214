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
	{ 0x12d9271e, "st_lsm6dsx_pm_ops" },
	{ 0xa2eaa1e6, "i3c_driver_unregister" },
	{ 0xed23eee7, "i3c_driver_register_with_owner" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa6334b66, "st_lsm6dsx_probe" },
	{ 0x2d2755b8, "__devm_regmap_init_i3c" },
	{ 0xc6506380, "i3c_device_match_id" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "st_lsm6dsx,i3c,regmap-i3c");


MODULE_INFO(srcversion, "7FF00C302290D133BC0C377");
