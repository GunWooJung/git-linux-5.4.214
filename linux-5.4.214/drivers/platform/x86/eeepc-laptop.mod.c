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
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x3d1960e2, "acpi_bus_unregister_driver" },
	{ 0x56975ed9, "acpi_bus_register_driver" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x9380de86, "__pci_hp_register" },
	{ 0xe65f7d31, "pci_find_bus" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xb372d8f7, "led_classdev_register_ext" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x4e97c8d9, "input_free_device" },
	{ 0x983c8c67, "devm_hwmon_device_register_with_groups" },
	{ 0x94a09154, "input_register_device" },
	{ 0xd549d4ef, "sparse_keymap_setup" },
	{ 0x4f55cb4, "input_allocate_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdf8165bf, "backlight_device_register" },
	{ 0xaf465642, "platform_device_put" },
	{ 0xe34d9651, "platform_device_del" },
	{ 0x6de7f7ff, "acpi_video_get_backlight_type" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0xf14ea0e9, "platform_device_add" },
	{ 0xd73c36a2, "platform_device_alloc" },
	{ 0xab03b9eb, "acpi_bus_get_status" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x81e6b37f, "dmi_get_system_info" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xff282521, "rfkill_register" },
	{ 0xaad6d92f, "rfkill_init_sw_state" },
	{ 0xe5b440f1, "rfkill_alloc" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x170ddf79, "acpi_install_notify_handler" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xc708f1fe, "ec_write" },
	{ 0xfc4152fc, "ec_read" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x37a0cba, "kfree" },
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x2ab40469, "input_unregister_device" },
	{ 0x472afdf9, "backlight_device_unregister" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x6b2998d4, "led_classdev_unregister" },
	{ 0xe9c81d43, "pci_hp_deregister" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0x1c58427f, "acpi_remove_notify_handler" },
	{ 0x9975dc22, "acpi_get_handle" },
	{ 0x25537606, "pci_bus_add_device" },
	{ 0x2d397ee6, "pci_bus_assign_resources" },
	{ 0x293efc00, "pci_scan_single_device" },
	{ 0x5e2381c7, "pci_stop_and_remove_bus_device" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5790e7a0, "pci_unlock_rescan_remove" },
	{ 0x8423aab5, "pci_dev_put" },
	{ 0xbbfe175a, "pci_get_slot" },
	{ 0x500384ce, "pci_bus_read_config_dword" },
	{ 0xdce553d3, "acpi_get_pci_dev" },
	{ 0xddbeeecc, "pci_lock_rescan_remove" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8a490c90, "rfkill_set_sw_state" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x6987aeb, "backlight_force_update" },
	{ 0x74754435, "acpi_bus_generate_netlink_event" },
	{ 0xc5850110, "printk" },
	{ 0x9ba870e8, "sparse_keymap_report_event" },
	{ 0xb4043948, "acpi_execute_simple_method" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "sparse-keymap,video");

MODULE_ALIAS("acpi*:ASUS010:*");

MODULE_INFO(srcversion, "A52E93EA49186A3634DAC84");
