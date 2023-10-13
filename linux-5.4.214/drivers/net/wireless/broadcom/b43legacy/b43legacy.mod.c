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
	{ 0x6a9466ef, "skb_queue_head" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x282e8498, "ieee80211_rx_irqsafe" },
	{ 0xfc745fa8, "ssb_dma_translation" },
	{ 0x174e203e, "device_remove_file" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xb13d1388, "ieee80211_queue_work" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x1474ebc5, "ieee80211_rts_get" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xe8c8c43b, "ieee80211_beacon_get_tim" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x3bd23fd8, "dma_direct_sync_single_for_cpu" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x50827106, "ieee80211_unregister_hw" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x8c17f24b, "ssb_bus_powerup" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x3d641f42, "wiphy_rfkill_start_polling" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x17324e49, "__ieee80211_get_assoc_led_name" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0x95937efe, "__ssb_driver_register" },
	{ 0xc9d8b484, "param_ops_string" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0xe1f1bcd1, "ieee80211_stop_queue" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xbb9e269f, "ssb_driver_unregister" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x12422e18, "ieee80211_alloc_hw_nm" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xb372d8f7, "led_classdev_register_ext" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x3724b91d, "ieee80211_wake_queues" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x34cef882, "ssb_device_enable" },
	{ 0x5792f848, "strlcpy" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8e0ddd54, "__dev_kfree_skb_irq" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xbed6138e, "skb_pull" },
	{ 0xca1944d9, "ieee80211_ctstoself_get" },
	{ 0xaf7ad1b4, "request_firmware_nowait" },
	{ 0x8d78a784, "ieee80211_queue_delayed_work" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x5748356e, "device_create_file" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc502ef3, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0x60ac3ed8, "__ieee80211_get_rx_led_name" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0x3a7aab6, "ssb_device_disable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6191f840, "wiphy_rfkill_set_hw_state" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x2d0b7a3, "ieee80211_tx_status_irqsafe" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0x6cfb19d0, "hwrng_register" },
	{ 0xaf8c5b24, "__ieee80211_get_tx_led_name" },
	{ 0xd0d9ad2e, "ssb_set_devtypedata" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x2e056e00, "ieee80211_wake_queue" },
	{ 0x270d6cc6, "ieee80211_generic_frame_duration" },
	{ 0x45e8d1c2, "__ieee80211_get_radio_led_name" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x926d56bd, "ieee80211_register_hw" },
	{ 0x6b2998d4, "led_classdev_unregister" },
	{ 0x1eb9516e, "round_jiffies_relative" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xc1d7d8bf, "dma_direct_sync_single_for_device" },
	{ 0x80500894, "request_firmware" },
	{ 0x510d772f, "ieee80211_free_hw" },
	{ 0xe6748ad1, "ssb_bus_may_powerdown" },
	{ 0x3b89b540, "skb_dequeue" },
	{ 0xb742fd7, "simple_strtol" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb0e602eb, "memmove" },
	{ 0x173b1bf4, "ssb_pcicore_dev_irqvecs_enable" },
	{ 0xad263612, "consume_skb" },
	{ 0xb605aeff, "hwrng_unregister" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x321233ec, "ssb_device_is_enabled" },
	{ 0x5c9109de, "release_firmware" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0xd349171, "ieee80211_get_response_rate" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "mac80211,ssb,cfg80211");

MODULE_ALIAS("ssb:v4243id0812rev02*");
MODULE_ALIAS("ssb:v4243id0812rev04*");

MODULE_INFO(srcversion, "E829149DD029E8A2A3DB3A6");
