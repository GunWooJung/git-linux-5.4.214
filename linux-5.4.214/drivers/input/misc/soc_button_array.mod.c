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
	{ 0xae5a04bb, "acpi_evaluate_dsm" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xca944cd, "devm_kfree" },
	{ 0x37a0cba, "kfree" },
	{ 0x3aff3200, "acpi_evaluate_object_typed" },
	{ 0x15cb5620, "is_acpi_device_node" },
	{ 0x56cf6cd9, "platform_device_register_full" },
	{ 0xe22cbce1, "gpiod_put" },
	{ 0xd38e0687, "desc_to_gpio" },
	{ 0x349726b2, "gpiod_get_index" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xfef787f1, "gpiod_count" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x974299e8, "acpi_device_get_match_data" },
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:PNP0C40:*");
MODULE_ALIAS("acpi*:ACPI0011:*");
MODULE_ALIAS("acpi*:MSHW0040:*");

MODULE_INFO(srcversion, "CF130AD740F60C660E67E33");
