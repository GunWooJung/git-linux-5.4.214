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
	{ 0x21d3b421, "__dynamic_netdev_dbg" },
	{ 0x63616516, "netif_rx" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0xd3b018f3, "pcmcia_dev_present" },
	{ 0xc5f6f445, "netif_device_attach" },
	{ 0xc21596aa, "register_netdev" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0x1ccbde5e, "pcmcia_get_tuple" },
	{ 0xb55067d3, "pcmcia_enable_device" },
	{ 0xc9c33c90, "pcmcia_request_irq" },
	{ 0x32dce1b0, "pcmcia_request_io" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xad263612, "consume_skb" },
	{ 0x49951708, "sev_enable_key" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xeb1919a4, "netdev_info" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x8e332092, "pcmcia_reset_card" },
	{ 0xc5850110, "printk" },
	{ 0x1b2ad908, "netdev_notice" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0x7ad55ce3, "netif_device_detach" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x19c85322, "pcmcia_disable_device" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pcmcia,pcmcia_core");

MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa085A850Bpb00B2E941pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa0EBF1D60pbAD673AAFpc*pd*");

MODULE_INFO(srcversion, "41617A17F6FB73A50D62A42");
