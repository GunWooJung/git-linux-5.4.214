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
	{ 0x8e17faf3, "put_device" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xe4975b3b, "siox_master_register" },
	{ 0xa08d547b, "devm_gpiod_get" },
	{ 0xe597fbd2, "siox_master_alloc" },
	{ 0x9e379360, "gpiod_get_value_cansleep" },
	{ 0xdf8c695a, "__ndelay" },
	{ 0xc4fb10cd, "gpiod_set_value_cansleep" },
	{ 0xa0594c30, "siox_master_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "siox-core");

MODULE_ALIAS("of:N*T*Ceckelmann,siox-gpio");
MODULE_ALIAS("of:N*T*Ceckelmann,siox-gpioC*");

MODULE_INFO(srcversion, "8293261D488F132994C9C85");
