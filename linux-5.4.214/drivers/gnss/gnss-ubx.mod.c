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
	{ 0x1643a127, "regulator_disable" },
	{ 0xa7597ca, "gnss_serial_free" },
	{ 0xf6666592, "__serdev_device_driver_register" },
	{ 0xcdf1b301, "gnss_serial_allocate" },
	{ 0x86f434e2, "driver_unregister" },
	{ 0x868b9359, "devm_regulator_get" },
	{ 0xf25bbee8, "gnss_serial_deregister" },
	{ 0xf1a50cbd, "devm_regulator_get_optional" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xee556a50, "gnss_serial_pm_ops" },
	{ 0xf005d5c1, "gnss_serial_register" },
	{ 0xfe543c51, "regulator_enable" },
};

MODULE_INFO(depends, "gnss-serial");


MODULE_INFO(srcversion, "C8C1AA418DCB638225F140F");
