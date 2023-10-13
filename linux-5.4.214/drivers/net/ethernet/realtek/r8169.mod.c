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
	{ 0x2d3385d3, "system_wq" },
	{ 0xeb1919a4, "netdev_info" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xe9244302, "ethtool_op_get_ts_info" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe5b6e9e8, "__pm_runtime_idle" },
	{ 0xd2ce78ea, "phy_disconnect" },
	{ 0xd6c2b127, "skb_clone_tx_timestamp" },
	{ 0x815588a6, "clk_enable" },
	{ 0xd712aabe, "pci_write_config_word" },
	{ 0x27dd129b, "pcim_enable_device" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x2fab06b2, "phy_stop" },
	{ 0x1b2ad908, "netdev_notice" },
	{ 0x23a77175, "napi_disable" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x1c428fe2, "napi_consume_skb" },
	{ 0xa085cc86, "napi_schedule_prep" },
	{ 0x4117e0fc, "pcim_iomap_table" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xd15763f7, "phy_resume" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x5094ac27, "pcie_set_readrq" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xfbe42f54, "phy_read_mmd" },
	{ 0x47fb0804, "__mdiobus_register" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x4ea25709, "dql_reset" },
	{ 0x5d5be603, "phy_ethtool_nway_reset" },
	{ 0x17ce1d56, "mdiobus_get_phy" },
	{ 0xae4a2ba4, "phy_write_paged" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x3bd23fd8, "dma_direct_sync_single_for_cpu" },
	{ 0xcb0642ea, "mdiobus_write" },
	{ 0x928d7386, "pci_write_config_byte" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x168babb5, "pcie_capability_clear_and_set_word" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x8bdf333d, "__pm_runtime_resume" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xdd64e639, "strscpy" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x888b323, "mdiobus_unregister" },
	{ 0xebff55c1, "__alloc_pages_nodemask" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0x7e3e8acb, "netif_napi_del" },
	{ 0x21d3b421, "__dynamic_netdev_dbg" },
	{ 0x93ad19fc, "devm_mdiobus_alloc_size" },
	{ 0x85fb8f1c, "phy_ethtool_get_eee" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0xe20861ce, "phy_start_aneg" },
	{ 0x90a69765, "__pskb_pull_tail" },
	{ 0xe25caefb, "phy_print_status" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x50cbd88e, "netif_schedule_queue" },
	{ 0xbf27fdc4, "pci_alloc_irq_vectors_affinity" },
	{ 0x38f4a2e8, "phy_mac_interrupt" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x992f9981, "phy_modify" },
	{ 0x5fd2de91, "phy_start" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x697c8009, "eth_platform_get_mac_address" },
	{ 0xc7a6ead9, "ethtool_op_get_link" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xc21596aa, "register_netdev" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0x5792f848, "strlcpy" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x1c217355, "phy_speed_down" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x53863eaf, "phy_modify_paged" },
	{ 0x3fbf1535, "netdev_printk" },
	{ 0xc61bacc3, "netif_napi_add" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x909f6f2d, "phy_suspend" },
	{ 0x272147fe, "softnet_data" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x9d766f4b, "pci_clear_master" },
	{ 0x5f130ba8, "pcim_iomap_regions" },
	{ 0xa6c83ba7, "devm_alloc_etherdev_mqs" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x33560c9e, "devm_add_action" },
	{ 0xcb1cddee, "phy_ethtool_get_link_ksettings" },
	{ 0xd5968a27, "pci_select_bars" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0xc5f6f445, "netif_device_attach" },
	{ 0x9d612796, "napi_gro_receive" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x7ea3fb3a, "__free_pages" },
	{ 0x87bd903f, "pci_disable_link_state" },
	{ 0x618911fc, "numa_node" },
	{ 0x7ad55ce3, "netif_device_detach" },
	{ 0xf9e91146, "__napi_schedule" },
	{ 0x8c9881c5, "phy_connect_direct" },
	{ 0x26ee61e4, "phy_speed_up" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x678dcc1c, "pm_schedule_suspend" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xf281bc91, "napi_complete_done" },
	{ 0xeb6f24a8, "genphy_soft_reset" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0x161d5d2f, "phy_read_paged" },
	{ 0xcfb5d782, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x216cc777, "netdev_err" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x6164d63, "devm_clk_get" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xf55aa50c, "phy_write_mmd" },
	{ 0x226f7074, "pci_irq_vector" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x74c790d2, "pci_set_power_state" },
	{ 0xe8b1a3d2, "netdev_warn" },
	{ 0x473e7988, "eth_validate_addr" },
	{ 0x87772bc9, "phy_ethtool_set_link_ksettings" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x5196e62, "phy_attached_info" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x20208a23, "pci_dev_run_wake" },
	{ 0xf736fe7, "phy_ethtool_set_eee" },
	{ 0xc1d7d8bf, "dma_direct_sync_single_for_device" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0x15af7f4, "system_state" },
	{ 0x80500894, "request_firmware" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0x9eb94f12, "phy_mii_ioctl" },
	{ 0x9ed02ae3, "dmam_alloc_attrs" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x64885c40, "netdev_update_features" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x2b72b5ec, "__napi_alloc_skb" },
	{ 0x296e38aa, "skb_tstamp_tx" },
	{ 0xf7c519d5, "pci_wake_from_d3" },
	{ 0xe4ae2e91, "pcim_set_mwi" },
	{ 0x820db7ec, "eth_mac_addr" },
	{ 0x5cb6526b, "skb_copy_bits" },
	{ 0x5c9109de, "release_firmware" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0xc977aafa, "__skb_pad" },
	{ 0x915906d7, "device_set_wakeup_enable" },
	{ 0x113de0, "phy_set_max_speed" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000010ECd00002502sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00002600sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008129sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008136sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008161sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008162sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008167sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008168sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010FFd00008168sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008169sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00004300sv00001186sd00004B10bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00004300sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00004302sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001259d0000C107sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000016ECd00000116sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001737d00001032sv*sd00000024bc*sc*i*");
MODULE_ALIAS("pci:v00000001d00008168sv*sd00002410bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008125sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00003000sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "AA73984A330089A8BF866DF");
