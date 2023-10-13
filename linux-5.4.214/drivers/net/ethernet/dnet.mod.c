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
	{ 0x87772bc9, "phy_ethtool_set_link_ksettings" },
	{ 0xcb1cddee, "phy_ethtool_get_link_ksettings" },
	{ 0xe9244302, "ethtool_op_get_ts_info" },
	{ 0xc7a6ead9, "ethtool_op_get_link" },
	{ 0x473e7988, "eth_validate_addr" },
	{ 0x820db7ec, "eth_mac_addr" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5196e62, "phy_attached_info" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x5c812f20, "phy_support_asym_pause" },
	{ 0x113de0, "phy_set_max_speed" },
	{ 0x387b36de, "phy_connect" },
	{ 0x66cef73a, "phy_find_first" },
	{ 0x47fb0804, "__mdiobus_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xed7a55b6, "mdiobus_alloc_size" },
	{ 0x793bd25e, "phy_register_fixup_for_uid" },
	{ 0xc21596aa, "register_netdev" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xc61bacc3, "netif_napi_add" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x1e57910a, "devm_ioremap_resource" },
	{ 0xd072dc20, "platform_get_resource" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
	{ 0x7e73a43b, "platform_get_irq" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x5fd2de91, "phy_start" },
	{ 0xe20861ce, "phy_start_aneg" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0xf9e91146, "__napi_schedule" },
	{ 0xa085cc86, "napi_schedule_prep" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0x2fab06b2, "phy_stop" },
	{ 0x23a77175, "napi_disable" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x296e38aa, "skb_tstamp_tx" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xad263612, "consume_skb" },
	{ 0xd6c2b127, "skb_clone_tx_timestamp" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x9eb94f12, "phy_mii_ioctl" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xc5850110, "printk" },
	{ 0xf281bc91, "napi_complete_done" },
	{ 0x2899f099, "netif_receive_skb" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0xcb0642ea, "mdiobus_write" },
	{ 0x2816d12d, "free_netdev" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0xe0dc9da2, "mdiobus_free" },
	{ 0x888b323, "mdiobus_unregister" },
	{ 0xd2ce78ea, "phy_disconnect" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "9125DB506D30BF89D51DE45");
