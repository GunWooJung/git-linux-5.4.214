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
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0x5b1c5c13, "debugfs_remove_recursive" },
	{ 0xd6c6b12d, "dell_laptop_unregister_notifier" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0xaf465642, "platform_device_put" },
	{ 0xe34d9651, "platform_device_del" },
	{ 0x6b2998d4, "led_classdev_unregister" },
	{ 0x472afdf9, "backlight_device_unregister" },
	{ 0xdf8165bf, "backlight_device_register" },
	{ 0xce593c22, "ledtrig_audio_get" },
	{ 0x6de7f7ff, "acpi_video_get_backlight_type" },
	{ 0x1b0b3141, "dell_laptop_register_notifier" },
	{ 0xd0a46a6a, "debugfs_create_file" },
	{ 0x7f3966fa, "debugfs_create_dir" },
	{ 0xb372d8f7, "led_classdev_register_ext" },
	{ 0xfa1b15d7, "i8042_install_filter" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x868784cb, "__symbol_get" },
	{ 0xff282521, "rfkill_register" },
	{ 0xe5b440f1, "rfkill_alloc" },
	{ 0x5a921311, "strncmp" },
	{ 0x81e6b37f, "dmi_get_system_info" },
	{ 0xf14ea0e9, "platform_device_add" },
	{ 0xd73c36a2, "platform_device_alloc" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xc0763484, "rfkill_blocked" },
	{ 0x8a490c90, "rfkill_set_sw_state" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xabaf82b5, "led_classdev_notify_brightness_hw_changed" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc5850110, "printk" },
	{ 0x45170471, "dell_smbios_call" },
	{ 0x2c208607, "power_supply_is_system_supplied" },
	{ 0x7fd2ce06, "dell_smbios_find_token" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0xc2871e79, "dell_smbios_error" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4fdee897, "i8042_command" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x97999817, "rfkill_set_hw_state" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xe2ee81dc, "i8042_remove_filter" },
	{ 0x6e9dd606, "__symbol_put" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7ee415d5, "single_open" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "dell-smbios,ledtrig-audio,video");

MODULE_ALIAS("dmi*:svn*DellInc.*:ct*8*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:ct*9*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:ct*10*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:ct*30*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:ct*31*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:ct*32*:");
MODULE_ALIAS("dmi*:svn*DellComputerCorporation*:ct*8*:");

MODULE_INFO(srcversion, "44D460FA209D473F169DB38");
