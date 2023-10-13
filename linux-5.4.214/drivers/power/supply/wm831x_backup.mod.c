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
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x1418158d, "power_supply_register" },
	{ 0xf8a00c0e, "wm831x_reg_lock" },
	{ 0xea009af7, "wm831x_set_bits" },
	{ 0x7c1a8902, "wm831x_reg_unlock" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x6208eac7, "wm831x_auxadc_read_uv" },
	{ 0x48f8f3e6, "wm831x_reg_read" },
	{ 0xebdd7402, "power_supply_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "94E29E141E9A9A137D1D748");
