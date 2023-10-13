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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0xa3ea868f, "ieee80211_rx_napi" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x5087e442, "rtl_deinit_deferred_work" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x4871c2d6, "rtl_deinit_core" },
	{ 0xe0c8b001, "usb_get_from_anchor" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x50827106, "ieee80211_unregister_hw" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0x4f3aab78, "usb_unanchor_urb" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xf89e6197, "skb_queue_purge" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x12422e18, "ieee80211_alloc_hw_nm" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xba60c4e3, "rtl_init_core" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xe838917a, "rtl_action_proc" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x2d32cdfc, "rtl_lps_change_work_callback" },
	{ 0xe9babfad, "rtl_init_rx_config" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x94c8bc6d, "usb_free_coherent" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc502ef3, "skb_queue_tail" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0xe3ef08a7, "usb_get_dev" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x815f16c8, "usb_put_dev" },
	{ 0x2d0b7a3, "ieee80211_tx_status_irqsafe" },
	{ 0x909c5dee, "rtl_ops" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x926d56bd, "ieee80211_register_hw" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x510d772f, "ieee80211_free_hw" },
	{ 0x3b89b540, "skb_dequeue" },
	{ 0x29361773, "complete" },
	{ 0xe2c54831, "usb_alloc_coherent" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0x30860ba9, "rtl_beacon_statistic" },
	{ 0xa322e89a, "usb_anchor_urb" },
	{ 0xedb483d8, "usb_alloc_urb" },
};

MODULE_INFO(depends, "mac80211,rtlwifi");


MODULE_INFO(srcversion, "D1A3F1843C2A3F959720682");
