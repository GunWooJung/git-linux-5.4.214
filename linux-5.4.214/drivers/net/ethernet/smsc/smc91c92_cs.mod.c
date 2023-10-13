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
	{ 0x765395c3, "param_ops_int" },
	{ 0x473e7988, "eth_validate_addr" },
	{ 0x820db7ec, "eth_mac_addr" },
	{ 0xb9262523, "pcmcia_unregister_driver" },
	{ 0xfd864eaf, "pcmcia_register_driver" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0x1ccbde5e, "pcmcia_get_tuple" },
	{ 0x8a1d6948, "_dev_notice" },
	{ 0xd6a09058, "pcmcia_loop_tuple" },
	{ 0xc21596aa, "register_netdev" },
	{ 0xe018a493, "pcmcia_get_mac_from_cis" },
	{ 0xcbd5b45e, "pcmcia_map_mem_page" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xc446ef36, "pcmcia_request_window" },
	{ 0xb55067d3, "pcmcia_enable_device" },
	{ 0xc9c33c90, "pcmcia_request_irq" },
	{ 0x6af95259, "pcmcia_loop_config" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xd3b018f3, "pcmcia_dev_present" },
	{ 0xb3d35ea3, "pcmcia_fixup_iowidth" },
	{ 0xc5f6f445, "netif_device_attach" },
	{ 0xc5850110, "printk" },
	{ 0x5c9109de, "release_firmware" },
	{ 0x80500894, "request_firmware" },
	{ 0x742f5665, "pcmcia_parse_tuple" },
	{ 0x754d539c, "strlen" },
	{ 0x32dce1b0, "pcmcia_request_io" },
	{ 0x24d273d1, "add_timer" },
	{ 0x63616516, "netif_rx" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xad263612, "consume_skb" },
	{ 0xe8b1a3d2, "netdev_warn" },
	{ 0x216cc777, "netdev_err" },
	{ 0x8e0ddd54, "__dev_kfree_skb_irq" },
	{ 0x49951708, "sev_enable_key" },
	{ 0xbf35024e, "generic_mii_ioctl" },
	{ 0xeb1919a4, "netdev_info" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x1b2ad908, "netdev_notice" },
	{ 0x3879f32d, "mii_nway_restart" },
	{ 0x942296a4, "mii_link_ok" },
	{ 0xcdb386fa, "mii_ethtool_get_link_ksettings" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x75a7763, "mii_ethtool_set_link_ksettings" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0xedc03953, "iounmap" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x19c85322, "pcmcia_disable_device" },
	{ 0x7ad55ce3, "netif_device_detach" },
	{ 0x21d3b421, "__dynamic_netdev_dbg" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pcmcia,mii");

MODULE_ALIAS("pcmcia:m0109c0501f*fn*pfn00pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0140c000Af*fn*pfn00pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00paF510DB04pb04CD2988pc46A52D63pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00paF510DB04pb0143B773pc46A52D63pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00paF510DB04pb856D66C8pcBD6C43EFpd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00paF510DB04pb52D21E1EpcBD6C43EFpd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00paDD9989BEpb662C394Cpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00paF510DB04pb52D21E1Epc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00pa0C2F80CDpb656947B9pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00pa0C2F80CDpbDC9BA5EDpc*pd*");
MODULE_ALIAS("pcmcia:m016Cc0020f*fn00pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m016Cc0023f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa23C78A9Dpb00B2E941pcCEF397FBpd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa78F308DCpbDCEA68BCpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paE59365C8pb6A2161D1pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa6A26D1CFpbC16CE9C5pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa58D93FC4pb244734E9pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa33234748pb3C95B953pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paA2CD8E6Dpb42DA662Apc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa0C2F80CDpbB3466314pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa0C2F80CDpb194B650Apc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa281F1C5DpbDCEA68BCpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa4EF00B21pb844BE9E9pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paC4F8B18Bpb4A0EEB2Dpc*pd*");

MODULE_INFO(srcversion, "13B9DA273946DEA84C5A48F");
