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
	{ 0x983c8c67, "devm_hwmon_device_register_with_groups" },
	{ 0x7410aba2, "strreplace" },
	{ 0x15f68f5d, "devm_kasprintf" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x9c34b528, "devm_iio_channel_get_all" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x552385d9, "iio_get_channel_type" },
	{ 0x5bfbdd92, "iio_read_channel_processed" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("of:N*T*Ciio-hwmon");
MODULE_ALIAS("of:N*T*Ciio-hwmonC*");

MODULE_INFO(srcversion, "F16FFE1BEC8EE88C4EBEA61");
