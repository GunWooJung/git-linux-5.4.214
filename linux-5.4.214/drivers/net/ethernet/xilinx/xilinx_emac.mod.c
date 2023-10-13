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
	{ 0xeb1919a4, "netdev_info" },
	{ 0xf9a482f9, "msleep" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xdb242c97, "phylink_of_phy_connect" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xdccfdecd, "phylink_ethtool_ksettings_get" },
	{ 0x47fb0804, "__mdiobus_register" },
	{ 0xf3083a1d, "phylink_destroy" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x1e57910a, "devm_ioremap_resource" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0xb18f9eec, "phylink_ethtool_ksettings_set" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x888b323, "mdiobus_unregister" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xd019c02a, "devm_clk_get_optional" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x21d3b421, "__dynamic_netdev_dbg" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x63616516, "netif_rx" },
	{ 0xdcb0a2c0, "phylink_stop" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x15c4e3e2, "phylink_ethtool_set_pauseparam" },
	{ 0xc7a6ead9, "ethtool_op_get_link" },
	{ 0xe0dc9da2, "mdiobus_free" },
	{ 0x911fcd6c, "phylink_start" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x2816d12d, "free_netdev" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0xf8fe5642, "phylink_ethtool_get_pauseparam" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5561600b, "dev_close" },
	{ 0x983276da, "phylink_disconnect_phy" },
	{ 0x8e0ddd54, "__dev_kfree_skb_irq" },
	{ 0xd072dc20, "platform_get_resource" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x7ad55ce3, "netif_device_detach" },
	{ 0x12a38747, "usleep_range" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x216cc777, "netdev_err" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xe8b1a3d2, "netdev_warn" },
	{ 0x473e7988, "eth_validate_addr" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xad263612, "consume_skb" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0xe484e35f, "ioread32" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
	{ 0xed7a55b6, "mdiobus_alloc_size" },
};

MODULE_INFO(depends, "phylink");

MODULE_ALIAS("of:N*T*Cxlnx,axi-ethernet-1.00.a");
MODULE_ALIAS("of:N*T*Cxlnx,axi-ethernet-1.00.aC*");
MODULE_ALIAS("of:N*T*Cxlnx,axi-ethernet-1.01.a");
MODULE_ALIAS("of:N*T*Cxlnx,axi-ethernet-1.01.aC*");
MODULE_ALIAS("of:N*T*Cxlnx,axi-ethernet-2.01.a");
MODULE_ALIAS("of:N*T*Cxlnx,axi-ethernet-2.01.aC*");

MODULE_INFO(srcversion, "AAF2AC3D331444B605BB48E");
