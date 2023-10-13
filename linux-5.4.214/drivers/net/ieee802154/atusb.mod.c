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
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xc17d0ef8, "ieee802154_register_hw" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xedb483d8, "usb_alloc_urb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xe3ef08a7, "usb_get_dev" },
	{ 0x98dfa282, "ieee802154_alloc_hw" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x37a0cba, "kfree" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x4f3aab78, "usb_unanchor_urb" },
	{ 0xbf66e8e8, "ieee802154_xmit_complete" },
	{ 0x8e0ddd54, "__dev_kfree_skb_irq" },
	{ 0xf99a4bed, "ieee802154_wake_queue" },
	{ 0xf7fef29c, "ieee802154_rx_irqsafe" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0xbed6138e, "skb_pull" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa322e89a, "usb_anchor_urb" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0xf9a482f9, "msleep" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x5d042b8f, "ieee802154_free_hw" },
	{ 0x815f16c8, "usb_put_dev" },
	{ 0xcff8ba64, "ieee802154_unregister_hw" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xe0c8b001, "usb_get_from_anchor" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mac802154");

MODULE_ALIAS("usb:v20B7p1540d*dc*dsc*dp*icFFisc00ip00in*");

MODULE_INFO(srcversion, "8D35AF49EA5F86558B727FD");
