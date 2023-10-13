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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xe9244302, "ethtool_op_get_ts_info" },
	{ 0xd2ce78ea, "phy_disconnect" },
	{ 0xd6c2b127, "skb_clone_tx_timestamp" },
	{ 0x189a3237, "devm_ioremap_nocache" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x47fb0804, "__mdiobus_register" },
	{ 0x5d5be603, "phy_ethtool_nway_reset" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x888b323, "mdiobus_unregister" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x93ad19fc, "devm_mdiobus_alloc_size" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x63616516, "netif_rx" },
	{ 0xe25caefb, "phy_print_status" },
	{ 0xfdb9b629, "ioread32be" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x5fd2de91, "phy_start" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc7a6ead9, "ethtool_op_get_link" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xc21596aa, "register_netdev" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x8e0ddd54, "__dev_kfree_skb_irq" },
	{ 0xd072dc20, "platform_get_resource" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xa6c83ba7, "devm_alloc_etherdev_mqs" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xcb1cddee, "phy_ethtool_get_link_ksettings" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xe419bc99, "iowrite32be" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0xc1ed54a2, "skb_defer_rx_timestamp" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x473e7988, "eth_validate_addr" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x87772bc9, "phy_ethtool_set_link_ksettings" },
	{ 0x387b36de, "phy_connect" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0x9eb94f12, "phy_mii_ioctl" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7e73a43b, "platform_get_irq" },
	{ 0xad263612, "consume_skb" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x296e38aa, "skb_tstamp_tx" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xc423de90, "devm_platform_ioremap_resource" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0xe484e35f, "ioread32" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cxlnx,xps-ll-temac-1.01.b");
MODULE_ALIAS("of:N*T*Cxlnx,xps-ll-temac-1.01.bC*");
MODULE_ALIAS("of:N*T*Cxlnx,xps-ll-temac-2.00.a");
MODULE_ALIAS("of:N*T*Cxlnx,xps-ll-temac-2.00.aC*");
MODULE_ALIAS("of:N*T*Cxlnx,xps-ll-temac-2.02.a");
MODULE_ALIAS("of:N*T*Cxlnx,xps-ll-temac-2.02.aC*");
MODULE_ALIAS("of:N*T*Cxlnx,xps-ll-temac-2.03.a");
MODULE_ALIAS("of:N*T*Cxlnx,xps-ll-temac-2.03.aC*");

MODULE_INFO(srcversion, "0AD220FA0592DF885EFF6FA");
