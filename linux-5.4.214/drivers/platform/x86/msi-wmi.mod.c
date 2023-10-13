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
	{ 0x2ab40469, "input_unregister_device" },
	{ 0x76ae31fd, "wmi_remove_notify_handler" },
	{ 0x472afdf9, "backlight_device_unregister" },
	{ 0xdf8165bf, "backlight_device_register" },
	{ 0x6de7f7ff, "acpi_video_get_backlight_type" },
	{ 0x4e97c8d9, "input_free_device" },
	{ 0xf18bdd75, "wmi_install_notify_handler" },
	{ 0x94a09154, "input_register_device" },
	{ 0xd549d4ef, "sparse_keymap_setup" },
	{ 0x4f55cb4, "input_allocate_device" },
	{ 0xc9d4d6d1, "wmi_has_guid" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x6c957d74, "sparse_keymap_report_entry" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xb754a627, "sparse_keymap_entry_from_scancode" },
	{ 0x17b0f8ca, "wmi_get_event_data" },
	{ 0xc5850110, "printk" },
	{ 0x37a0cba, "kfree" },
	{ 0xaba842fe, "wmi_query_block" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xd7752b86, "wmi_set_block" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "wmi,video,sparse-keymap");


MODULE_INFO(srcversion, "C35222E4E3586ED8BD5D61E");
