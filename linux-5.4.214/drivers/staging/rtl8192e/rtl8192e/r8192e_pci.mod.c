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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0x37d37e3e, "HT_update_self_and_peer_setting" },
	{ 0x3e40f771, "rtllib_wx_set_rawtx" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x85bd1608, "__request_region" },
	{ 0xeb1919a4, "netdev_info" },
	{ 0xd0bb4ec1, "pci_write_config_dword" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4b988a6f, "rtllib_start_scan_syncro" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x77358855, "iomem_resource" },
	{ 0x754d539c, "strlen" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x37a24b11, "pci_read_config_byte" },
	{ 0x3fcf1bee, "rtllib_stop_scan_syncro" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x2b97de44, "rtllib_wx_set_auth" },
	{ 0x3444a814, "rtllib_wx_set_mlme" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x1f0ac22d, "rtllib_wx_get_essid" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x3b8d8cc3, "rtllib_ps_tx_ack" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0xea56474e, "rtllib_wx_set_power" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x1997031a, "dot11d_init" },
	{ 0x65b2352c, "rtllib_wx_set_rate" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x928d7386, "pci_write_config_byte" },
	{ 0xa304eff3, "rtllib_wx_get_encode" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3c0222d0, "pci_enable_wake" },
	{ 0x8736e2d1, "rtllib_sta_ps_send_null_frame" },
	{ 0x22166084, "rt_global_debug_component" },
	{ 0x999e8297, "vfree" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0x2ca65127, "rtllib_wx_set_wap" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x21d3b421, "__dynamic_netdev_dbg" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0xfe696e44, "rtllib_DisableIntelPromiscuousMode" },
	{ 0x95768d61, "rtllib_wx_set_scan" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x5ae2abb, "rtllib_wx_get_freq" },
	{ 0x76caf7f0, "rtllib_xmit" },
	{ 0x82600a4d, "rtllib_wx_get_wap" },
	{ 0x131e5561, "param_ops_charp" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xf89e6197, "skb_queue_purge" },
	{ 0x89fde2d9, "rtllib_wx_get_power" },
	{ 0xb3799ba8, "rtllib_wx_get_name" },
	{ 0xa86764a6, "rtllib_wx_set_freq" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x921f329, "pci_restore_state" },
	{ 0xc87b7b31, "rtllib_wx_get_rate" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x7ca167ba, "rtllib_wx_set_essid" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xc21596aa, "register_netdev" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x5792f848, "strlcpy" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0xd523d85d, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xb84a549f, "rtllib_wx_set_mode" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xa7eedcc4, "call_usermodehelper" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x24d273d1, "add_timer" },
	{ 0xcd0c42b1, "rtllib_wx_set_encode" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x5cadeae9, "rtllib_act_scanning" },
	{ 0xabc89eb8, "rtllib_stop_send_beacons" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xf05fbbdb, "rtllib_wx_set_rts" },
	{ 0x5e99e0b1, "rtllib_wx_get_rts" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7320a69c, "rtllib_legal_channel" },
	{ 0xc502ef3, "skb_queue_tail" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0xc5f6f445, "netif_device_attach" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x7ad55ce3, "netif_device_detach" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xe4a1ffc7, "RemovePeerTS" },
	{ 0x15831a82, "rtllib_wx_get_mode" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xd0c1e622, "pci_read_config_dword" },
	{ 0xaf45ad4b, "rtllib_rx" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0xcbde1db7, "alloc_rtllib" },
	{ 0xdf78f620, "rtllib_wlan_frequencies" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x216cc777, "netdev_err" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x50fe6458, "rtllib_reset_queue" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x74c790d2, "pci_set_power_state" },
	{ 0xe8b1a3d2, "netdev_warn" },
	{ 0x473e7988, "eth_validate_addr" },
	{ 0x464d51e6, "rtllib_MgntDisconnect" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x955e6f68, "dev_alloc_name" },
	{ 0xa25dad90, "rtllib_softmac_start_protocol" },
	{ 0x344af258, "rtllib_wx_set_encode_ext" },
	{ 0x705bb4db, "rtllib_stop_scan" },
	{ 0xedc03953, "iounmap" },
	{ 0x5c37fec0, "rtllib_get_beacon" },
	{ 0xebfcc899, "rtllib_softmac_stop_protocol" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x80500894, "request_firmware" },
	{ 0x3b89b540, "skb_dequeue" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0xaee387cc, "dot11d_channel_map" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9dc6d8c9, "pci_choose_state" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xf89bc02c, "skb_put" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xbc3efb50, "rtllib_wx_set_gen_ie" },
	{ 0x5c9109de, "release_firmware" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0xec734f3a, "pcie_capability_read_word" },
	{ 0xb048ea30, "notify_wx_assoc_event" },
	{ 0x38bfc37c, "rtllib_wx_get_scan" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x200dc428, "pci_save_state" },
	{ 0x54c1103, "rtllib_start_send_beacons" },
	{ 0x9ca74d90, "rtllib_EnableIntelPromiscuousMode" },
	{ 0x4b14a182, "free_rtllib" },
};

MODULE_INFO(depends, "rtllib");

MODULE_ALIAS("pci:v000010ECd00008192sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000007AAd00000044sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000007AAd00000047sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "DD6CCE7AC2F0FF4A5328C0D");
