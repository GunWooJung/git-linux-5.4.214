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
	{ 0x5ae8a115, "noop_llseek" },
	{ 0x3d1960e2, "acpi_bus_unregister_driver" },
	{ 0x56975ed9, "acpi_bus_register_driver" },
	{ 0x7369dd1b, "proc_mkdir" },
	{ 0x77456e0a, "acpi_root_dir" },
	{ 0x94a09154, "input_register_device" },
	{ 0xfa1b15d7, "i8042_install_filter" },
	{ 0xff282521, "rfkill_register" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xdf8165bf, "backlight_device_register" },
	{ 0x6de7f7ff, "acpi_video_get_backlight_type" },
	{ 0xe92ca535, "acpi_video_set_dmi_backlight_type" },
	{ 0xc62cb64, "proc_create_single_data" },
	{ 0x609c0d36, "proc_create_data" },
	{ 0xe5b440f1, "rfkill_alloc" },
	{ 0xab1b6c43, "__iio_device_register" },
	{ 0x4e97c8d9, "input_free_device" },
	{ 0xd549d4ef, "sparse_keymap_setup" },
	{ 0x4f55cb4, "input_allocate_device" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x13454a0a, "iio_device_alloc" },
	{ 0xb372d8f7, "led_classdev_register_ext" },
	{ 0x4b2e0ffe, "misc_register" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x509b64ea, "acpi_has_method" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0xc9d4d6d1, "wmi_has_guid" },
	{ 0x9ba870e8, "sparse_keymap_report_event" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xe2ee81dc, "i8042_remove_filter" },
	{ 0x6b2998d4, "led_classdev_unregister" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0x472afdf9, "backlight_device_unregister" },
	{ 0x2ab40469, "input_unregister_device" },
	{ 0x83298cb2, "iio_device_free" },
	{ 0xe1f088fa, "iio_device_unregister" },
	{ 0xcbaa4b74, "remove_proc_entry" },
	{ 0x35775925, "misc_deregister" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x97999817, "rfkill_set_hw_state" },
	{ 0xb4043948, "acpi_execute_simple_method" },
	{ 0x37a0cba, "kfree" },
	{ 0x1d07e365, "memdup_user_nul" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x7ee415d5, "single_open" },
	{ 0x135c3d16, "PDE_DATA" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0x45081703, "ec_get_handle" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xabaf82b5, "led_classdev_notify_brightness_hw_changed" },
	{ 0x74754435, "acpi_bus_generate_netlink_event" },
	{ 0x2d721cca, "sysfs_update_group" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "video,industrialio,sparse-keymap,wmi");

MODULE_ALIAS("acpi*:TOS6200:*");
MODULE_ALIAS("acpi*:TOS6207:*");
MODULE_ALIAS("acpi*:TOS6208:*");
MODULE_ALIAS("acpi*:TOS1900:*");

MODULE_INFO(srcversion, "5BD5AE8677804BAF9A55395");
