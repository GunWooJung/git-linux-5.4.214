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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xe9244302, "ethtool_op_get_ts_info" },
	{ 0xd2ce78ea, "phy_disconnect" },
	{ 0xd6c2b127, "skb_clone_tx_timestamp" },
	{ 0x815588a6, "clk_enable" },
	{ 0x2fab06b2, "phy_stop" },
	{ 0x23a77175, "napi_disable" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xa085cc86, "napi_schedule_prep" },
	{ 0x500ceaac, "__napi_schedule_irqoff" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xd15763f7, "phy_resume" },
	{ 0x9717696d, "netdev_boot_setup_check" },
	{ 0x36c31145, "phy_ethtool_ksettings_set" },
	{ 0x6960add7, "phy_init_hw" },
	{ 0x384b475f, "phy_ethtool_ksettings_get" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x8ac3334b, "net_dim_get_def_rx_moderation" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x4ea25709, "dql_reset" },
	{ 0x5d5be603, "phy_ethtool_nway_reset" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xcb0642ea, "mdiobus_write" },
	{ 0xeadab72e, "__genphy_config_aneg" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x99d472b1, "net_dim_get_rx_moderation" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x564c202f, "skb_realloc_headroom" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x7e3e8acb, "netif_napi_del" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x21d3b421, "__dynamic_netdev_dbg" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x85fb8f1c, "phy_ethtool_get_eee" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xe25caefb, "phy_print_status" },
	{ 0x50cbd88e, "netif_schedule_queue" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x38f4a2e8, "phy_mac_interrupt" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x5fd2de91, "phy_start" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xc7a6ead9, "ethtool_op_get_link" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xd73c36a2, "platform_device_alloc" },
	{ 0x2816d12d, "free_netdev" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xe1cf8262, "mdiobus_read" },
	{ 0xc21596aa, "register_netdev" },
	{ 0xf14ea0e9, "platform_device_add" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0xd523d85d, "skb_push" },
	{ 0xb60081cc, "netif_set_real_num_rx_queues" },
	{ 0xd072dc20, "platform_get_resource" },
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0xfbb056ac, "netif_set_real_num_tx_queues" },
	{ 0xc61bacc3, "netif_napi_add" },
	{ 0x8af433f1, "fixed_phy_register" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x3edac6fe, "fixed_phy_set_link_update" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x909f6f2d, "phy_suspend" },
	{ 0x272147fe, "softnet_data" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x2f8b92de, "platform_device_add_resources" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x858c3883, "phy_init_eee" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0xc5f6f445, "netif_device_attach" },
	{ 0x9d612796, "napi_gro_receive" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x7ad55ce3, "netif_device_detach" },
	{ 0x12a38747, "usleep_range" },
	{ 0x7f52071a, "net_dim" },
	{ 0x8c9881c5, "phy_connect_direct" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x30c1302a, "pm_wakeup_dev_event" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xf281bc91, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0x7dd35ee6, "platform_device_add_data" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x216cc777, "netdev_err" },
	{ 0x6164d63, "devm_clk_get" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xe8b1a3d2, "netdev_warn" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0xf736fe7, "phy_ethtool_set_eee" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0xb1e1b89, "phy_attach" },
	{ 0x9eb94f12, "phy_mii_ioctl" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7e73a43b, "platform_get_irq" },
	{ 0xad263612, "consume_skb" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x296e38aa, "skb_tstamp_tx" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x8d40871c, "device_set_wakeup_capable" },
	{ 0xc423de90, "devm_platform_ioremap_resource" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x915906d7, "device_set_wakeup_enable" },
	{ 0x113de0, "phy_set_max_speed" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xaf465642, "platform_device_put" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
	{ 0x2124d478, "netdev_crit" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cbrcm,genet-v1");
MODULE_ALIAS("of:N*T*Cbrcm,genet-v1C*");
MODULE_ALIAS("of:N*T*Cbrcm,genet-v2");
MODULE_ALIAS("of:N*T*Cbrcm,genet-v2C*");
MODULE_ALIAS("of:N*T*Cbrcm,genet-v3");
MODULE_ALIAS("of:N*T*Cbrcm,genet-v3C*");
MODULE_ALIAS("of:N*T*Cbrcm,genet-v4");
MODULE_ALIAS("of:N*T*Cbrcm,genet-v4C*");
MODULE_ALIAS("of:N*T*Cbrcm,genet-v5");
MODULE_ALIAS("of:N*T*Cbrcm,genet-v5C*");

MODULE_INFO(srcversion, "49C9582F4403CFA582BDB2A");
