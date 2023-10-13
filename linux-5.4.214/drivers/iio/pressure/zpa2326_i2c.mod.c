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
	{ 0xe8688be4, "zpa2326_isreg_precious" },
	{ 0x67003069, "zpa2326_isreg_readable" },
	{ 0x2623e63e, "zpa2326_isreg_writeable" },
	{ 0xfea266f, "zpa2326_pm_ops" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x4a97e1c4, "zpa2326_probe" },
	{ 0xb8b5aa45, "__devm_regmap_init_i2c" },
	{ 0xef5fcd28, "zpa2326_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "zpa2326");

MODULE_ALIAS("i2c:zpa2326");

MODULE_INFO(srcversion, "1651B1A32634043B57DB1C5");
