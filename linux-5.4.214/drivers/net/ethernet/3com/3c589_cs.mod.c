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
	{ 0xd111bb59, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xc21596aa, "register_netdev" },
	{ 0x37a0cba, "kfree" },
	{ 0x1ccbde5e, "pcmcia_get_tuple" },
	{ 0xb55067d3, "pcmcia_enable_device" },
	{ 0xc9c33c90, "pcmcia_request_irq" },
	{ 0x32dce1b0, "pcmcia_request_io" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
	{ 0x24d273d1, "add_timer" },
	{ 0x216cc777, "netdev_err" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x63616516, "netif_rx" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xad263612, "consume_skb" },
	{ 0x49951708, "sev_enable_key" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xeb1919a4, "netdev_info" },
	{ 0xe8b1a3d2, "netdev_warn" },
	{ 0xd3b018f3, "pcmcia_dev_present" },
	{ 0x21d3b421, "__dynamic_netdev_dbg" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x19c85322, "pcmcia_disable_device" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0x7ad55ce3, "netif_device_detach" },
	{ 0xc5f6f445, "netif_device_attach" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pcmcia");

MODULE_ALIAS("pcmcia:m0101c0562f*fn00pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn00pfn*paF03E4E77pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0101c0589f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa58D93FC4pb992C2202pc*pd*");
MODULE_ALIAS("pcmcia:m0101c0035f*fn00pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0101c003Df*fn00pfn*pa*pb*pc*pd*");

MODULE_INFO(srcversion, "FDE48BBB6021088A774EAE5");
