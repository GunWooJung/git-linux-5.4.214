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
	{ 0xcce57a7f, "param_ops_ushort" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0x2b708d10, "hid_unregister_driver" },
	{ 0xb27fe432, "__hid_register_driver" },
	{ 0xc5850110, "printk" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0xb372d8f7, "led_classdev_register_ext" },
	{ 0x754d539c, "strlen" },
	{ 0xc6c38eb0, "hid_hw_start" },
	{ 0x49bdb973, "hid_open_report" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x3232dfdb, "usb_hid_driver" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xffa8e380, "hid_hw_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x6b2998d4, "led_classdev_unregister" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hid,usbhid");

MODULE_ALIAS("hid:b0003g*v00001B1Cp00001B02");
MODULE_ALIAS("hid:b0003g*v00001B1Cp00001B34");
MODULE_ALIAS("hid:b0003g*v00001B1Cp00001B3E");
MODULE_ALIAS("hid:b0003g*v00001B1Cp00001B09");

MODULE_INFO(srcversion, "2DB0045884912E510A4D130");
