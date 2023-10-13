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
	{ 0xa24f23d8, "__request_module" },
	{ 0x174e203e, "device_remove_file" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x97adb487, "utf8s_to_utf16s" },
	{ 0x349cba85, "strchr" },
	{ 0x7a4de5fb, "usb_gadget_deactivate" },
	{ 0x754d539c, "strlen" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xffaa944, "usb_ep_queue" },
	{ 0xabf32f29, "utf16s_to_utf8s" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x56470118, "__warn_printk" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xb3051965, "config_item_put" },
	{ 0x3ae394fc, "config_item_init_type_name" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xfe72cc37, "usb_gadget_unregister_driver" },
	{ 0xa0e62d4b, "usb_ep_alloc_request" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xf4b1bd78, "usb_gadget_set_state" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x77ae495d, "usb_speed_string" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc6e1863c, "usb_gadget_clear_selfpowered" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9f1cc473, "usb_gadget_activate" },
	{ 0x3b346986, "config_group_init_type_name" },
	{ 0x18c66278, "init_uts_ns" },
	{ 0x89a604c7, "configfs_register_subsystem" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x5748356e, "device_create_file" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc8ea074a, "usb_ep_dequeue" },
	{ 0xdf46d4f1, "module_put" },
	{ 0x332c116b, "config_item_set_name" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x86a44749, "usb_gadget_vbus_draw" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3a1a2625, "usb_gadget_set_selfpowered" },
	{ 0x28aee8ad, "configfs_unregister_subsystem" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa36ea15e, "usb_ep_free_request" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x9424a91, "usb_gadget_ep_match_desc" },
	{ 0xde01c3fe, "usb_gadget_probe_driver" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x664f4f51, "config_group_init" },
	{ 0x6d71399f, "try_module_get" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "udc-core");


MODULE_INFO(srcversion, "504E1C4243CCA327D1E9AF6");
