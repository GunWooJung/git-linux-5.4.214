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
	{ 0x6a9466ef, "skb_queue_head" },
	{ 0x282e8498, "ieee80211_rx_irqsafe" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xc7ba3d4e, "dev_printk" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xe8c8c43b, "ieee80211_beacon_get_tim" },
	{ 0x56470118, "__warn_printk" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x50827106, "ieee80211_unregister_hw" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0x63a7c28c, "bitmap_find_free_region" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x17324e49, "__ieee80211_get_assoc_led_name" },
	{ 0xe677827a, "skb_unlink" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0xe1f1bcd1, "ieee80211_stop_queue" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf89e6197, "skb_queue_purge" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x12422e18, "ieee80211_alloc_hw_nm" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xb372d8f7, "led_classdev_register_ext" },
	{ 0xace333ca, "ieee80211_free_txskb" },
	{ 0xd523d85d, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbed6138e, "skb_pull" },
	{ 0xe3a53f4c, "sort" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x8d78a784, "ieee80211_queue_delayed_work" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xc502ef3, "skb_queue_tail" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x60ac3ed8, "__ieee80211_get_rx_led_name" },
	{ 0xa916b694, "strnlen" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6191f840, "wiphy_rfkill_set_hw_state" },
	{ 0x2d0b7a3, "ieee80211_tx_status_irqsafe" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x574c2e74, "bitmap_release_region" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0xaf8c5b24, "__ieee80211_get_tx_led_name" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x2e056e00, "ieee80211_wake_queue" },
	{ 0x52ecbc75, "crc_ccitt" },
	{ 0x45e8d1c2, "__ieee80211_get_radio_led_name" },
	{ 0xbd900a19, "ieee80211_get_hdrlen_from_skb" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x926d56bd, "ieee80211_register_hw" },
	{ 0x6b2998d4, "led_classdev_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0xcafbeb94, "regulatory_hint" },
	{ 0x8c925d81, "ieee80211_beacon_loss" },
	{ 0x69acdf38, "memcpy" },
	{ 0x510d772f, "ieee80211_free_hw" },
	{ 0x3b89b540, "skb_dequeue" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb0e602eb, "memmove" },
	{ 0xad263612, "consume_skb" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xf89bc02c, "skb_put" },
};

MODULE_INFO(depends, "mac80211,cfg80211");


MODULE_INFO(srcversion, "2DA683832B8DF4FCADF75BF");
