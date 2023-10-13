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
	{ 0x765395c3, "param_ops_int" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0x3d1960e2, "acpi_bus_unregister_driver" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x56975ed9, "acpi_bus_register_driver" },
	{ 0xe34d9651, "platform_device_del" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0xaf465642, "platform_device_put" },
	{ 0xf14ea0e9, "platform_device_add" },
	{ 0xd73c36a2, "platform_device_alloc" },
	{ 0x9b9a702f, "devm_led_classdev_register_ext" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x56470118, "__warn_printk" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0x41c10d3e, "devm_backlight_device_register" },
	{ 0x94a09154, "input_register_device" },
	{ 0xd549d4ef, "sparse_keymap_setup" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8b30e894, "acpi_device_hid" },
	{ 0x2cc132c2, "devm_input_allocate_device" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x6de7f7ff, "acpi_video_get_backlight_type" },
	{ 0x509b64ea, "acpi_has_method" },
	{ 0xb4043948, "acpi_execute_simple_method" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x9ba870e8, "sparse_keymap_report_event" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xb754a627, "sparse_keymap_entry_from_scancode" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd8df08ac, "acpi_handle_printk" },
	{ 0xc36a3bd4, "__acpi_handle_debug" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "sparse-keymap,video");

MODULE_ALIAS("acpi*:FUJ02B1:*");
MODULE_ALIAS("acpi*:FUJ02E3:*");

MODULE_INFO(srcversion, "D06F1AB91DC08FB496AA131");
