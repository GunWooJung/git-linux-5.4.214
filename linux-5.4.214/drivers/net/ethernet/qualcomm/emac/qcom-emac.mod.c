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
	{ 0xf9a482f9, "msleep" },
	{ 0xd2ce78ea, "phy_disconnect" },
	{ 0x815588a6, "clk_enable" },
	{ 0x2fab06b2, "phy_stop" },
	{ 0x23a77175, "napi_disable" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xa085cc86, "napi_schedule_prep" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x47fb0804, "__mdiobus_register" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x4ea25709, "dql_reset" },
	{ 0x17ce1d56, "mdiobus_get_phy" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x888b323, "mdiobus_unregister" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x7e3e8acb, "netif_napi_del" },
	{ 0x21d3b421, "__dynamic_netdev_dbg" },
	{ 0x93ad19fc, "devm_mdiobus_alloc_size" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0xe25caefb, "phy_print_status" },
	{ 0xeee38cc9, "acpi_match_device" },
	{ 0x50cbd88e, "netif_schedule_queue" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x5fd2de91, "phy_start" },
	{ 0x66cef73a, "phy_find_first" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xbf1a9899, "device_find_child" },
	{ 0xc5850110, "printk" },
	{ 0xc7a6ead9, "ethtool_op_get_link" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x2816d12d, "free_netdev" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xc21596aa, "register_netdev" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x5792f848, "strlcpy" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x90e561b6, "phy_attached_print" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x8e0ddd54, "__dev_kfree_skb_irq" },
	{ 0xd072dc20, "platform_get_resource" },
	{ 0xc61bacc3, "netif_napi_add" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xcb1cddee, "phy_ethtool_get_link_ksettings" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0x9d612796, "napi_gro_receive" },
	{ 0xacdeb71f, "device_property_read_u32_array" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x12a38747, "usleep_range" },
	{ 0xf9e91146, "__napi_schedule" },
	{ 0x8c9881c5, "phy_connect_direct" },
	{ 0x8e17faf3, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xf281bc91, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0xcfb5d782, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x216cc777, "netdev_err" },
	{ 0x6164d63, "devm_clk_get" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xe7a7a03f, "get_device" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xe8b1a3d2, "netdev_warn" },
	{ 0x473e7988, "eth_validate_addr" },
	{ 0x87772bc9, "phy_ethtool_set_link_ksettings" },
	{ 0x37a0cba, "kfree" },
	{ 0xeb376667, "___pskb_trim" },
	{ 0xedc03953, "iounmap" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0x1ba59527, "__kmalloc_node" },
	{ 0x9eb94f12, "phy_mii_ioctl" },
	{ 0x4cff0b1a, "device_get_mac_address" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7e73a43b, "platform_get_irq" },
	{ 0xad263612, "consume_skb" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x820db7ec, "eth_mac_addr" },
	{ 0x15cb5620, "is_acpi_device_node" },
	{ 0xc423de90, "devm_platform_ioremap_resource" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
	{ 0x37ecb163, "genphy_restart_aneg" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cqcom,fsm9900-emac");
MODULE_ALIAS("of:N*T*Cqcom,fsm9900-emacC*");
MODULE_ALIAS("acpi*:QCOM8070:*");

MODULE_INFO(srcversion, "7A0A955CAE832CA6C26E792");
