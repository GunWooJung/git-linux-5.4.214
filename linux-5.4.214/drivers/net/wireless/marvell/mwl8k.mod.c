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
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x44f92e95, "ieee80211_start_tx_ba_session" },
	{ 0xe2569725, "device_release_driver" },
	{ 0x926d56bd, "ieee80211_register_hw" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x59d5d956, "ieee80211_restart_hw" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x2e30b2c0, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x63f0726e, "ieee80211_start_tx_ba_cb_irqsafe" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe8c8c43b, "ieee80211_beacon_get_tim" },
	{ 0x67876151, "ieee80211_find_sta" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xad263612, "consume_skb" },
	{ 0x9d6cba30, "cfg80211_find_elem_match" },
	{ 0x53df1a33, "ieee80211_stop_tx_ba_session" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x5c4e734e, "pci_iomap" },
	{ 0x12422e18, "ieee80211_alloc_hw_nm" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x5a955fde, "skb_copy" },
	{ 0x282e8498, "ieee80211_rx_irqsafe" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8a1d6948, "_dev_notice" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xaf7d0f48, "current_task" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0x510d772f, "ieee80211_free_hw" },
	{ 0x3bffcc92, "pci_iounmap" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x50827106, "ieee80211_unregister_hw" },
	{ 0xadccbcdc, "ieee80211_stop_queues" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x44439af6, "ieee80211_find_sta_by_ifaddr" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x2d0b7a3, "ieee80211_tx_status_irqsafe" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xb13d1388, "ieee80211_queue_work" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0x29361773, "complete" },
	{ 0xe484e35f, "ioread32" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x37a0cba, "kfree" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc5850110, "printk" },
	{ 0x80500894, "request_firmware" },
	{ 0xaf7ad1b4, "request_firmware_nowait" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xcfb5d782, "pskb_expand_head" },
	{ 0xfb578fc5, "memset" },
	{ 0xb0e602eb, "memmove" },
	{ 0xd523d85d, "skb_push" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0x3724b91d, "ieee80211_wake_queues" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x5c9109de, "release_firmware" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xc7ba3d4e, "dev_printk" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x9791d2e6, "ieee80211_channel_to_frequency" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc22cd4dd, "pv_ops" },
};

MODULE_INFO(depends, "mac80211,cfg80211");

MODULE_ALIAS("pci:v000011ABd00002A0Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00002A0Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00002A24sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00002A2Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00002A30sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00002A40sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00002A41sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00002A42sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00002A43sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00002B36sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "21943FF73BCE7019DDFF08E");
