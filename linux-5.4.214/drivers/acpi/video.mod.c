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
	{ 0x56975ed9, "acpi_bus_register_driver" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1c58427f, "acpi_remove_notify_handler" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x9939eba0, "backlight_unregister_notifier" },
	{ 0x170ddf79, "acpi_install_notify_handler" },
	{ 0xebdd1a34, "thermal_cooling_device_unregister" },
	{ 0xdf8165bf, "backlight_device_register" },
	{ 0xacea8173, "acpi_debug_print" },
	{ 0xae7be25, "acpi_bus_get_device" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x3d1960e2, "acpi_bus_unregister_driver" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x7b60e478, "acpi_notifier_call_chain" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x3c416a40, "acpi_match_device_ids" },
	{ 0x66c54ff1, "input_event" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x2f384db3, "acpi_is_video_device" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x69c81caa, "backlight_device_get_by_type" },
	{ 0xa40ff01b, "acpi_dbg_layer" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xdce553d3, "acpi_get_pci_dev" },
	{ 0x9cc4f70a, "register_pm_notifier" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xb4043948, "acpi_execute_simple_method" },
	{ 0x1a45cb6c, "acpi_disabled" },
	{ 0x70f7f79, "sysfs_remove_link" },
	{ 0xe3a53f4c, "sort" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x32e6f1a0, "acpi_video_backlight_string" },
	{ 0xcfe9b0cc, "sysfs_create_link" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x94a09154, "input_register_device" },
	{ 0x4e97c8d9, "input_free_device" },
	{ 0xd0c1e622, "pci_read_config_dword" },
	{ 0xdc512134, "backlight_register_notifier" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xfe9ebbbb, "acpi_osi_is_win8" },
	{ 0xddad7952, "acpi_dbg_level" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xefcea2e7, "acpi_warning" },
	{ 0x970d5a4a, "thermal_cooling_device_register" },
	{ 0x37a0cba, "kfree" },
	{ 0x2ab40469, "input_unregister_device" },
	{ 0x7681946c, "unregister_pm_notifier" },
	{ 0x377d8004, "acpi_error" },
	{ 0x7d12d76d, "acpi_get_parent" },
	{ 0xa207ea98, "pci_get_device" },
	{ 0x8423aab5, "pci_dev_put" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x6987aeb, "backlight_force_update" },
	{ 0xec2b8a42, "acpi_walk_namespace" },
	{ 0xcad1aca8, "acpi_exception" },
	{ 0x472afdf9, "backlight_device_unregister" },
	{ 0x509b64ea, "acpi_has_method" },
	{ 0x8b30e894, "acpi_device_hid" },
	{ 0x4f55cb4, "input_allocate_device" },
	{ 0x81e6b37f, "dmi_get_system_info" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:LNXVIDEO:*");

MODULE_INFO(srcversion, "166FEEE75444D242D7100EE");
