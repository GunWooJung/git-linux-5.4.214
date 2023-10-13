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
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0xc9d8b484, "param_ops_string" },
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc9d174fb, "thermal_zone_device_register" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0xaf465642, "platform_device_put" },
	{ 0x970d5a4a, "thermal_cooling_device_register" },
	{ 0xf14ea0e9, "platform_device_add" },
	{ 0xd73c36a2, "platform_device_alloc" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x81e6b37f, "dmi_get_system_info" },
	{ 0x797a0345, "thermal_zone_device_update" },
	{ 0x340e1eb9, "thermal_zone_bind_cooling_device" },
	{ 0xe27592e5, "thermal_zone_unbind_cooling_device" },
	{ 0xc708f1fe, "ec_write" },
	{ 0x92920cb2, "thermal_zone_device_unregister" },
	{ 0xebdd1a34, "thermal_cooling_device_unregister" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfc4152fc, "ec_read" },
	{ 0x5a921311, "strncmp" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "FE0D9838712E19A0980A2AD");
