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
	{ 0x282e8498, "ieee80211_rx_irqsafe" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb800e48b, "rtl_swlps_beacon" },
	{ 0x5087e442, "rtl_deinit_deferred_work" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x37a24b11, "pci_read_config_byte" },
	{ 0xbbc73d00, "rtl_efuse_ops_init" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x4871c2d6, "rtl_deinit_core" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xe8c8c43b, "ieee80211_beacon_get_tim" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x50827106, "ieee80211_unregister_hw" },
	{ 0x928d7386, "pci_write_config_byte" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x81f7cac5, "read_efuse_byte" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0x4a342e33, "rtl_collect_scan_list" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0xe1f1bcd1, "ieee80211_stop_queue" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x4e94cd48, "rtl_global_var" },
	{ 0x3bffcc92, "pci_iounmap" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x12422e18, "ieee80211_alloc_hw_nm" },
	{ 0xc5850110, "printk" },
	{ 0xba60c4e3, "rtl_init_core" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xe838917a, "rtl_action_proc" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x8e0ddd54, "__dev_kfree_skb_irq" },
	{ 0x2d32cdfc, "rtl_lps_change_work_callback" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0xe9babfad, "rtl_init_rx_config" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xbed6138e, "skb_pull" },
	{ 0xa0dd6d5a, "pci_enable_msi" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc502ef3, "skb_queue_tail" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x97e05663, "rtl_tid_to_ac" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x2d0b7a3, "ieee80211_tx_status_irqsafe" },
	{ 0x909c5dee, "rtl_ops" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x9c4c8327, "rtl_deinit_rfkill" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xd0c1e622, "pci_read_config_dword" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x49f0e9f1, "rtl_p2p_info" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x2e056e00, "ieee80211_wake_queue" },
	{ 0x926d56bd, "ieee80211_register_hw" },
	{ 0x937b5313, "rtl_lps_leave" },
	{ 0x54628a85, "rtl_recognize_peer" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0xb9893142, "rtl_is_special_data" },
	{ 0x28fe4c90, "pci_disable_msi" },
	{ 0x97ef9e3b, "rtl_tx_ackqueue" },
	{ 0x1b71b02a, "rtl_init_rfkill" },
	{ 0x510d772f, "ieee80211_free_hw" },
	{ 0x3b89b540, "skb_dequeue" },
	{ 0x29361773, "complete" },
	{ 0xbf6c8961, "rtl_c2hcmd_enqueue" },
	{ 0x5c4e734e, "pci_iomap" },
	{ 0xad263612, "consume_skb" },
	{ 0xf89bc02c, "skb_put" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x50e9cdf0, "rtl_tx_mgmt_proc" },
	{ 0x30860ba9, "rtl_beacon_statistic" },
	{ 0xec734f3a, "pcie_capability_read_word" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "mac80211,rtlwifi");


MODULE_INFO(srcversion, "359AF533CEBD24E6328F94E");
