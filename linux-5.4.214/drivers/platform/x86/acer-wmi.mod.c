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
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0x5b1c5c13, "debugfs_remove_recursive" },
	{ 0x2ab40469, "input_unregister_device" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x57d403e2, "debugfs_create_u32" },
	{ 0x7f3966fa, "debugfs_create_dir" },
	{ 0xaf465642, "platform_device_put" },
	{ 0xf14ea0e9, "platform_device_add" },
	{ 0xd73c36a2, "platform_device_alloc" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xd4419732, "input_set_abs_params" },
	{ 0x8e17faf3, "put_device" },
	{ 0x4e97c8d9, "input_free_device" },
	{ 0x76ae31fd, "wmi_remove_notify_handler" },
	{ 0x8fcb13eb, "acpi_dev_get_first_match_dev" },
	{ 0x94a09154, "input_register_device" },
	{ 0xcad1aca8, "acpi_exception" },
	{ 0xf18bdd75, "wmi_install_notify_handler" },
	{ 0x7ef2952e, "input_set_capability" },
	{ 0xd549d4ef, "sparse_keymap_setup" },
	{ 0x4f55cb4, "input_allocate_device" },
	{ 0x6de7f7ff, "acpi_video_get_backlight_type" },
	{ 0xe92ca535, "acpi_video_set_dmi_backlight_type" },
	{ 0x141271bf, "acpi_dev_found" },
	{ 0xaba842fe, "wmi_query_block" },
	{ 0x7c983a5d, "dmi_walk" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xb372d8f7, "led_classdev_register_ext" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdf8165bf, "backlight_device_register" },
	{ 0xff282521, "rfkill_register" },
	{ 0xe5b440f1, "rfkill_alloc" },
	{ 0x97999817, "rfkill_set_hw_state" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0xfc4152fc, "ec_read" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0x472afdf9, "backlight_device_unregister" },
	{ 0x6b2998d4, "led_classdev_unregister" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xc9d4d6d1, "wmi_has_guid" },
	{ 0x1b8b95ad, "i8042_unlock_chip" },
	{ 0x4fdee897, "i8042_command" },
	{ 0x17f341a0, "i8042_lock_chip" },
	{ 0x8a490c90, "rfkill_set_sw_state" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x9ba870e8, "sparse_keymap_report_event" },
	{ 0xb754a627, "sparse_keymap_entry_from_scancode" },
	{ 0x17b0f8ca, "wmi_get_event_data" },
	{ 0x66c54ff1, "input_event" },
	{ 0x37a0cba, "kfree" },
	{ 0xc708f1fe, "ec_write" },
	{ 0x6068bedf, "wmi_evaluate_method" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "wmi,sparse-keymap,video");


MODULE_INFO(srcversion, "680A0056767AD34952E070E");
