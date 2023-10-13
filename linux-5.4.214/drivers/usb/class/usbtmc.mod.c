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
	{ 0xc2448345, "default_llseek" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x167e7f9d, "__get_user_1" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xe0c8b001, "usb_get_from_anchor" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4f3aab78, "usb_unanchor_urb" },
	{ 0x92e683f5, "down_timeout" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe9ffc063, "down_trylock" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc5850110, "printk" },
	{ 0xee13453, "usb_find_interface" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xe819ea0e, "usb_register_dev" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x93c7edeb, "usb_find_common_endpoints" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xe3ef08a7, "usb_get_dev" },
	{ 0x58ae3970, "usb_deregister_dev" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xde793eab, "kill_fasync" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0xedb483d8, "usb_alloc_urb" },
	{ 0x7e8d8619, "usb_anchor_empty" },
	{ 0xcf2a6966, "up" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xa322e89a, "usb_anchor_urb" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xe5a397f6, "usb_clear_halt" },
	{ 0xf9a482f9, "msleep" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x494ba38f, "usb_bulk_msg" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x419892d3, "fasync_helper" },
	{ 0x37a0cba, "kfree" },
	{ 0x815f16c8, "usb_put_dev" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x807766ea, "usb_scuttle_anchored_urbs" },
	{ 0x407af304, "usb_wait_anchor_empty_timeout" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icFEisc03ip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icFEisc03ip01in*");

MODULE_INFO(srcversion, "CBCAFA46043366973E26599");
