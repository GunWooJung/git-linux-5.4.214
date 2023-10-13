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
	{ 0x765395c3, "param_ops_int" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0x174e203e, "device_remove_file" },
	{ 0x472afdf9, "backlight_device_unregister" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0xaf465642, "platform_device_put" },
	{ 0xe34d9651, "platform_device_del" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xe2ee81dc, "i8042_remove_filter" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x5748356e, "device_create_file" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x4e97c8d9, "input_free_device" },
	{ 0x2ab40469, "input_unregister_device" },
	{ 0xfa1b15d7, "i8042_install_filter" },
	{ 0x94a09154, "input_register_device" },
	{ 0xd549d4ef, "sparse_keymap_setup" },
	{ 0x4f55cb4, "input_allocate_device" },
	{ 0xff282521, "rfkill_register" },
	{ 0xe5b440f1, "rfkill_alloc" },
	{ 0xf14ea0e9, "platform_device_add" },
	{ 0xd73c36a2, "platform_device_alloc" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x6de7f7ff, "acpi_video_get_backlight_type" },
	{ 0xdf8165bf, "backlight_device_register" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x1a45cb6c, "acpi_disabled" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x8a490c90, "rfkill_set_sw_state" },
	{ 0x97999817, "rfkill_set_hw_state" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0xc5850110, "printk" },
	{ 0xc708f1fe, "ec_write" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xaa00fdc0, "ec_transaction" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x9ba870e8, "sparse_keymap_report_event" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfc4152fc, "ec_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "sparse-keymap,video");


MODULE_INFO(srcversion, "4D84D2043F3CDE570BC874D");
