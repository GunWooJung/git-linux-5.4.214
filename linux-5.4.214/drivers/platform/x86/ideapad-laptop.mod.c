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
	{ 0x68a41536, "param_ops_bool" },
	{ 0x8ce08cc0, "single_release" },
	{ 0x21ba44a5, "seq_read" },
	{ 0xda2b5d09, "seq_lseek" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x76ae31fd, "wmi_remove_notify_handler" },
	{ 0x4e97c8d9, "input_free_device" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdf8165bf, "backlight_device_register" },
	{ 0xff282521, "rfkill_register" },
	{ 0xaad6d92f, "rfkill_init_sw_state" },
	{ 0xe5b440f1, "rfkill_alloc" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x5b1c5c13, "debugfs_remove_recursive" },
	{ 0x2ab40469, "input_unregister_device" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0x472afdf9, "backlight_device_unregister" },
	{ 0x1c58427f, "acpi_remove_notify_handler" },
	{ 0xf18bdd75, "wmi_install_notify_handler" },
	{ 0x170ddf79, "acpi_install_notify_handler" },
	{ 0x6de7f7ff, "acpi_video_get_backlight_type" },
	{ 0x94a09154, "input_register_device" },
	{ 0xd549d4ef, "sparse_keymap_setup" },
	{ 0x4f55cb4, "input_allocate_device" },
	{ 0xd0a46a6a, "debugfs_create_file" },
	{ 0x7f3966fa, "debugfs_create_dir" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0xb4577003, "acpi_dev_present" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xae7be25, "acpi_bus_get_device" },
	{ 0x15cb5620, "is_acpi_device_node" },
	{ 0x6987aeb, "backlight_force_update" },
	{ 0x4fdee897, "i8042_command" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x509b64ea, "acpi_has_method" },
	{ 0x97999817, "rfkill_set_hw_state" },
	{ 0xe35ed617, "seq_puts" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x1000e51, "schedule" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xb4043948, "acpi_execute_simple_method" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0x7ee415d5, "single_open" },
	{ 0xc5850110, "printk" },
	{ 0x9ba870e8, "sparse_keymap_report_event" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "wmi,video,sparse-keymap");

MODULE_ALIAS("acpi*:VPC2004:*");

MODULE_INFO(srcversion, "56D69188220DADCA7EA8359");
