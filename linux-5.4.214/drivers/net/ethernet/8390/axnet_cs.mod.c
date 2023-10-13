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
	{ 0x473e7988, "eth_validate_addr" },
	{ 0x820db7ec, "eth_mac_addr" },
	{ 0xb9262523, "pcmcia_unregister_driver" },
	{ 0xfd864eaf, "pcmcia_register_driver" },
	{ 0x24d273d1, "add_timer" },
	{ 0x1b2ad908, "netdev_notice" },
	{ 0xc5850110, "printk" },
	{ 0xc21596aa, "register_netdev" },
	{ 0xb55067d3, "pcmcia_enable_device" },
	{ 0x6af95259, "pcmcia_loop_config" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
	{ 0x32dce1b0, "pcmcia_request_io" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x49951708, "sev_enable_key" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xd3b018f3, "pcmcia_dev_present" },
	{ 0xeb1919a4, "netdev_info" },
	{ 0x63616516, "netif_rx" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x69acdf38, "memcpy" },
	{ 0xad263612, "consume_skb" },
	{ 0xe8b1a3d2, "netdev_warn" },
	{ 0x21d3b421, "__dynamic_netdev_dbg" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0xb27ba2a8, "dev_trans_start" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x19c85322, "pcmcia_disable_device" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0x7ad55ce3, "netif_device_detach" },
	{ 0xd5b625f, "pcmcia_write_config_byte" },
	{ 0xc5f6f445, "netif_device_attach" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x216cc777, "netdev_err" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pcmcia");

MODULE_ALIAS("pcmcia:m016Cc0081f*fn*pfn00pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m018Ac0301f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m01BFc2328f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m026Fc0301f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m026Fc0303f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m026Fc0309f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0274c1106f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m8A01cC1ABf*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m021Bc0202f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:mFFFFc1090f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa49B020A7pb119CC9FCpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paB4BE14E3pb9A12EB6Apc*pdAB9BE5EF*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa0959823BpbAB9BE5EFpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa552AB682pbBC3B87E1pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa00FA7BC8pb00E990CCpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paBC477DDEpb78C5F40Bpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa5261440Fpb436768C5pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa5261440Fpb730DF72Epc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa5261440Fpb3ABBD061pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa55632FD5pb66BC2A90pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa547E66DCpb233ADAC2pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa0733CC81pb232019A8pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa481E0094pbF91AF609pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa9AA79DC3pb40FAD875pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa281F1C5Dpb7C2ADD04pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa281F1C5Dpb7EF26116pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa281F1C5Dpb2E272058pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa820A67B6pb*pc*pdAB9BE5EF*");

MODULE_INFO(srcversion, "84A0E847BE606439ECFB557");
