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
	{ 0x75518543, "ieee80211_rts_duration" },
	{ 0xa3ea868f, "ieee80211_rx_napi" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe37407fe, "pci_release_region" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x37a24b11, "pci_read_config_byte" },
	{ 0xb13d1388, "ieee80211_queue_work" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x51a3dae5, "pci_match_id" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0x61e1d2c4, "ath_key_delete" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xe8c8c43b, "ieee80211_beacon_get_tim" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x52c097ec, "ath_regd_init" },
	{ 0x56470118, "__warn_printk" },
	{ 0x50827106, "ieee80211_unregister_hw" },
	{ 0x9791d2e6, "ieee80211_channel_to_frequency" },
	{ 0x928d7386, "pci_write_config_byte" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x28c7e597, "ieee80211_iterate_active_interfaces_atomic" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xadccbcdc, "ieee80211_stop_queues" },
	{ 0xe1f1bcd1, "ieee80211_stop_queue" },
	{ 0x19f945ca, "ieee80211_tx_status" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x3bffcc92, "pci_iounmap" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x12422e18, "ieee80211_alloc_hw_nm" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xb372d8f7, "led_classdev_register_ext" },
	{ 0xace333ca, "ieee80211_free_txskb" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x3724b91d, "ieee80211_wake_queues" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x9166fada, "strncpy" },
	{ 0xa152d406, "ath_is_mybeacon" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x4571aea8, "ath_is_world_regd" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0xd523d85d, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x8d78a784, "ieee80211_queue_delayed_work" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xcc9e7cf7, "ath_reg_notifier_apply" },
	{ 0x6c6311b0, "wiphy_to_ieee80211_hw" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x87bd903f, "pci_disable_link_state" },
	{ 0xa2bca77e, "ath_hw_get_listen_time" },
	{ 0xf08b651e, "ath_regd_get_band_ctl" },
	{ 0x60ac3ed8, "__ieee80211_get_rx_led_name" },
	{ 0x12a38747, "usleep_range" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6191f840, "wiphy_rfkill_set_hw_state" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x2e194ff1, "ath_hw_cycle_counters_update" },
	{ 0x69f102ce, "ieee80211_get_tx_rates" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb8e51d75, "ieee80211_get_buffered_bc" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0xaf8c5b24, "__ieee80211_get_tx_led_name" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x108b188f, "ath_is_49ghz_allowed" },
	{ 0x1db6f908, "ath_hw_setbssidmask" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x2e056e00, "ieee80211_wake_queue" },
	{ 0x270d6cc6, "ieee80211_generic_frame_duration" },
	{ 0xbd900a19, "ieee80211_get_hdrlen_from_skb" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xbb424130, "ieee80211_ctstoself_duration" },
	{ 0x926d56bd, "ieee80211_register_hw" },
	{ 0x6b2998d4, "led_classdev_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0xcafbeb94, "regulatory_hint" },
	{ 0x7119adc3, "ath_rxbuf_alloc" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x510d772f, "ieee80211_free_hw" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb0e602eb, "memmove" },
	{ 0x5c4e734e, "pci_iomap" },
	{ 0xad263612, "consume_skb" },
	{ 0xaa13d057, "ath_key_config" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xf89bc02c, "skb_put" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0xcf04cd17, "ath_hw_keyreset" },
	{ 0xb23de490, "pci_request_region" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0xe484e35f, "ioread32" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "mac80211,cfg80211,ath");

MODULE_ALIAS("pci:v0000168Cd00000207sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000007sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000011sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000012sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000013sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000A727d00000013sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00000013sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00001014sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000014sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000015sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000016sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000017sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000018sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000019sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000001Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000001Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000001Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000001Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000FF1Bsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "1A2F70E2E046001454C208C");
