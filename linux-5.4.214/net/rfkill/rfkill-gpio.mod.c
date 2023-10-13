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
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x815588a6, "clk_enable" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xc4fb10cd, "gpiod_set_value_cansleep" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9853f85f, "devm_acpi_dev_add_driver_gpios" },
	{ 0xeee38cc9, "acpi_match_device" },
	{ 0xff282521, "rfkill_register" },
	{ 0xe5b440f1, "rfkill_alloc" },
	{ 0x2bf355c4, "devm_gpiod_get_optional" },
	{ 0x6164d63, "devm_clk_get" },
	{ 0x15cb5620, "is_acpi_device_node" },
	{ 0x50b73ce2, "rfkill_find_type" },
	{ 0x53ea5903, "device_property_read_string" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:BCM4752:*");
MODULE_ALIAS("acpi*:LNV4752:*");

MODULE_INFO(srcversion, "B471F4E8EA0C3FE4458E916");
