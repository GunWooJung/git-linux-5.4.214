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
	{ 0xeb233a45, "__kmalloc" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xb13d1388, "ieee80211_queue_work" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x1474ebc5, "ieee80211_rts_get" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xe8c8c43b, "ieee80211_beacon_get_tim" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x50827106, "ieee80211_unregister_hw" },
	{ 0x9791d2e6, "ieee80211_channel_to_frequency" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0x4bfc612f, "led_classdev_resume" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x28c7e597, "ieee80211_iterate_active_interfaces_atomic" },
	{ 0x3d641f42, "wiphy_rfkill_start_polling" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0xadccbcdc, "ieee80211_stop_queues" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0xe1f1bcd1, "ieee80211_stop_queue" },
	{ 0x19f945ca, "ieee80211_tx_status" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xb372d8f7, "led_classdev_register_ext" },
	{ 0xace333ca, "ieee80211_free_txskb" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0xd523d85d, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xbed6138e, "skb_pull" },
	{ 0xca1944d9, "ieee80211_ctstoself_get" },
	{ 0x49183715, "wiphy_rfkill_stop_polling" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x8d78a784, "ieee80211_queue_delayed_work" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6191f840, "wiphy_rfkill_set_hw_state" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xb8e51d75, "ieee80211_get_buffered_bc" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x2e056e00, "ieee80211_wake_queue" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0xbd900a19, "ieee80211_get_hdrlen_from_skb" },
	{ 0x926d56bd, "ieee80211_register_hw" },
	{ 0x6b2998d4, "led_classdev_unregister" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe1c7b5f0, "ieee80211_tx_status_ext" },
	{ 0x1ee7d3cd, "hrtimer_init" },
	{ 0xae2af137, "led_classdev_suspend" },
	{ 0x80500894, "request_firmware" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb0e602eb, "memmove" },
	{ 0xad263612, "consume_skb" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x33e22f3a, "ieee80211_iterate_interfaces" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x5c9109de, "release_firmware" },
	{ 0x9fe59f14, "dma_ops" },
};

MODULE_INFO(depends, "mac80211,cfg80211");


MODULE_INFO(srcversion, "08B2F501C8DCDEAADAAA626");
