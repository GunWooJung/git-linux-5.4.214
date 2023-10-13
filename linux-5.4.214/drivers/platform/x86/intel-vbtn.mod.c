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
	{ 0xec2b8a42, "acpi_walk_namespace" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x66c54ff1, "input_event" },
	{ 0x6bdef35c, "acpi_ec_mark_gpe_for_wake" },
	{ 0x170ddf79, "acpi_install_notify_handler" },
	{ 0x94a09154, "input_register_device" },
	{ 0xc5850110, "printk" },
	{ 0xd549d4ef, "sparse_keymap_setup" },
	{ 0x2cc132c2, "devm_input_allocate_device" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x9ba870e8, "sparse_keymap_report_event" },
	{ 0x30c1302a, "pm_wakeup_dev_event" },
	{ 0xb754a627, "sparse_keymap_entry_from_scancode" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x40947f3c, "acpi_create_platform_device" },
	{ 0x3c416a40, "acpi_match_device_ids" },
	{ 0xae7be25, "acpi_bus_get_device" },
	{ 0x1c58427f, "acpi_remove_notify_handler" },
	{ 0x4fc0c5ca, "device_init_wakeup" },
	{ 0x15cb5620, "is_acpi_device_node" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "sparse-keymap");

MODULE_ALIAS("acpi*:INT33D6:*");

MODULE_INFO(srcversion, "2B6065DFD867426ABF52AB7");
