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
	{ 0x174e203e, "device_remove_file" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xd0bb4ec1, "pci_write_config_dword" },
	{ 0x8a490c90, "rfkill_set_sw_state" },
	{ 0x293efc00, "pci_scan_single_device" },
	{ 0x7f3966fa, "debugfs_create_dir" },
	{ 0x1c58427f, "acpi_remove_notify_handler" },
	{ 0x7ee415d5, "single_open" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x170ddf79, "acpi_install_notify_handler" },
	{ 0x84aa2ac, "battery_hook_unregister" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x65b4695, "wmi_get_acpi_device_uid" },
	{ 0x5e2381c7, "pci_stop_and_remove_bus_device" },
	{ 0x8ce08cc0, "single_release" },
	{ 0xbbfe175a, "pci_get_slot" },
	{ 0x9cab34a6, "rfkill_set_led_trigger_name" },
	{ 0xdf8165bf, "backlight_device_register" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x5790e7a0, "pci_unlock_rescan_remove" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xe8830b36, "debugfs_create_x32" },
	{ 0xff282521, "rfkill_register" },
	{ 0x2d397ee6, "pci_bus_assign_resources" },
	{ 0xd0a46a6a, "debugfs_create_file" },
	{ 0x9e3c8eea, "battery_hook_register" },
	{ 0x141271bf, "acpi_dev_found" },
	{ 0x9380de86, "__pci_hp_register" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5b1c5c13, "debugfs_remove_recursive" },
	{ 0x21ba44a5, "seq_read" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xe9c81d43, "pci_hp_deregister" },
	{ 0xd549d4ef, "sparse_keymap_setup" },
	{ 0x9ba870e8, "sparse_keymap_report_event" },
	{ 0x983c8c67, "devm_hwmon_device_register_with_groups" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0xe5b440f1, "rfkill_alloc" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xb372d8f7, "led_classdev_register_ext" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xf18bdd75, "wmi_install_notify_handler" },
	{ 0xe92ca535, "acpi_video_set_dmi_backlight_type" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc9d4d6d1, "wmi_has_guid" },
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0xe65f7d31, "pci_find_bus" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x6de7f7ff, "acpi_video_get_backlight_type" },
	{ 0xcd8ce890, "acpi_format_exception" },
	{ 0x5748356e, "device_create_file" },
	{ 0x9975dc22, "acpi_get_handle" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x6068bedf, "wmi_evaluate_method" },
	{ 0xaad6d92f, "rfkill_init_sw_state" },
	{ 0x500384ce, "pci_bus_read_config_dword" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x94a09154, "input_register_device" },
	{ 0x48f7540c, "__platform_create_bundle" },
	{ 0x4e97c8d9, "input_free_device" },
	{ 0xabaf82b5, "led_classdev_notify_brightness_hw_changed" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd0c1e622, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xddbeeecc, "pci_lock_rescan_remove" },
	{ 0x6b2998d4, "led_classdev_unregister" },
	{ 0xda2b5d09, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0x69acdf38, "memcpy" },
	{ 0x2ab40469, "input_unregister_device" },
	{ 0x96848186, "scnprintf" },
	{ 0xa207ea98, "pci_get_device" },
	{ 0x8423aab5, "pci_dev_put" },
	{ 0x76ae31fd, "wmi_remove_notify_handler" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x6987aeb, "backlight_force_update" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0x472afdf9, "backlight_device_unregister" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x25537606, "pci_bus_add_device" },
	{ 0x17b0f8ca, "wmi_get_event_data" },
	{ 0x4f55cb4, "input_allocate_device" },
	{ 0x81e6b37f, "dmi_get_system_info" },
};

MODULE_INFO(depends, "wmi,sparse-keymap,video");


MODULE_INFO(srcversion, "F9552BDB9D7BEED35963943");
