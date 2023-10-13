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
	{ 0x63616516, "netif_rx" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0xc5f6f445, "netif_device_attach" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd3b018f3, "pcmcia_dev_present" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xc21596aa, "register_netdev" },
	{ 0xd6a09058, "pcmcia_loop_tuple" },
	{ 0x37a0cba, "kfree" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xc5850110, "printk" },
	{ 0xcbd5b45e, "pcmcia_map_mem_page" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xc446ef36, "pcmcia_request_window" },
	{ 0xd5b625f, "pcmcia_write_config_byte" },
	{ 0xb55067d3, "pcmcia_enable_device" },
	{ 0xc9c33c90, "pcmcia_request_irq" },
	{ 0x6af95259, "pcmcia_loop_config" },
	{ 0xe018a493, "pcmcia_get_mac_from_cis" },
	{ 0x1ccbde5e, "pcmcia_get_tuple" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xeb1919a4, "netdev_info" },
	{ 0xf9a482f9, "msleep" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x32dce1b0, "pcmcia_request_io" },
	{ 0xc977aafa, "__skb_pad" },
	{ 0xad263612, "consume_skb" },
	{ 0x49951708, "sev_enable_key" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x1b2ad908, "netdev_notice" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0xedc03953, "iounmap" },
	{ 0x19c85322, "pcmcia_disable_device" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x7ad55ce3, "netif_device_detach" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pcmcia");

MODULE_ALIAS("pcmcia:m0089c110Af*fn*pfn00pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0138c110Af*fn*pfn00pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00pa2E3EE845pb*pc0EA978EApd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00pa2E3EE845pb*pc80609023pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00pa2E3EE845pb*pcA650C32Apd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00pa2E3EE845pb*pc76DF1D29pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00pa2E3EE845pb*pcF1403719pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn00pa2E3EE845pbECA401BFpc*pd*");
MODULE_ALIAS("pcmcia:m01BFc010Af*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa1B3B94FEpb*pcF381C1A2pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa2E3EE845pb*pc0EC0AC37pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa2E3EE845pb*pc947D9073pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa2E3EE845pb*pc2464A6E3pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa2E3EE845pb*pc3E08D609pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa2E3EE845pb*pcF7188E46pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa54F7C49Cpb9FD2F0A2pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa54F7C49CpbEFE96769pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa816CC815pb174397DBpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa44A09D9CpbB44DEECFpc*pd*");

MODULE_INFO(srcversion, "13634A5F5574905A40562D1");
