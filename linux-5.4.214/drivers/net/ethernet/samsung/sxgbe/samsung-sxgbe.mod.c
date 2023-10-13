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
	{ 0xeb1919a4, "netdev_info" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xd2ce78ea, "phy_disconnect" },
	{ 0xd6c2b127, "skb_clone_tx_timestamp" },
	{ 0x815588a6, "clk_enable" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x2fab06b2, "phy_stop" },
	{ 0x23a77175, "napi_disable" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xa085cc86, "napi_schedule_prep" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x47fb0804, "__mdiobus_register" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x17ce1d56, "mdiobus_get_phy" },
	{ 0x56470118, "__warn_printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x2e1ca751, "clk_put" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x888b323, "mdiobus_unregister" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x7e3e8acb, "netif_napi_del" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x21d3b421, "__dynamic_netdev_dbg" },
	{ 0x85fb8f1c, "phy_ethtool_get_eee" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x5fd2de91, "phy_start" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x7f787f6d, "netif_tx_stop_all_queues" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xc5850110, "printk" },
	{ 0xc7a6ead9, "ethtool_op_get_link" },
	{ 0xe0dc9da2, "mdiobus_free" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x2816d12d, "free_netdev" },
	{ 0xc21596aa, "register_netdev" },
	{ 0x2899f099, "netif_receive_skb" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xc61bacc3, "netif_napi_add" },
	{ 0x24d273d1, "add_timer" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x858c3883, "phy_init_eee" },
	{ 0xcb1cddee, "phy_ethtool_get_link_ksettings" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0x9d612796, "napi_gro_receive" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xf9e91146, "__napi_schedule" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xf281bc91, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0x92102194, "phy_get_eee_err" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x216cc777, "netdev_err" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x41187327, "clk_get" },
	{ 0xe8b1a3d2, "netdev_warn" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x87772bc9, "phy_ethtool_set_link_ksettings" },
	{ 0x37a0cba, "kfree" },
	{ 0x387b36de, "phy_connect" },
	{ 0xf736fe7, "phy_ethtool_set_eee" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0x9eb94f12, "phy_mii_ioctl" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xad263612, "consume_skb" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x296e38aa, "skb_tstamp_tx" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x820db7ec, "eth_mac_addr" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0xc423de90, "devm_platform_ioremap_resource" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x113de0, "phy_set_max_speed" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
	{ 0xed7a55b6, "mdiobus_alloc_size" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Csamsung,sxgbe-v2.0a");
MODULE_ALIAS("of:N*T*Csamsung,sxgbe-v2.0aC*");

MODULE_INFO(srcversion, "D756F8AF2333EB5D4431D4D");
