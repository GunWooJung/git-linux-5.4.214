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
	{ 0xb372d8f7, "led_classdev_register_ext" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x94c51c70, "regulator_is_enabled" },
	{ 0x1584833d, "regulator_count_voltages" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x2d6cbfb1, "devm_regulator_get_exclusive" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x72f16fbc, "regulator_set_voltage" },
	{ 0xca5c94f8, "regulator_list_voltage" },
	{ 0xfe543c51, "regulator_enable" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x6b2998d4, "led_classdev_unregister" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x1643a127, "regulator_disable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "18BAD9A75D8B3563FC92F3E");
