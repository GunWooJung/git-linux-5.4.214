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
	{ 0x765395c3, "param_ops_int" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xc5850110, "printk" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xe8b1a3d2, "netdev_warn" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc21596aa, "register_netdev" },
	{ 0xeb1919a4, "netdev_info" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x216cc777, "netdev_err" },
	{ 0x7e73a43b, "platform_get_irq" },
	{ 0xc423de90, "devm_platform_ioremap_resource" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x21d3b421, "__dynamic_netdev_dbg" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0xf10de535, "ioread8" },
	{ 0x63616516, "netif_rx" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xad263612, "consume_skb" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc5534d64, "ioread16" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0xbf35024e, "generic_mii_ioctl" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0x3879f32d, "mii_nway_restart" },
	{ 0x942296a4, "mii_link_ok" },
	{ 0xcdb386fa, "mii_ethtool_get_link_ksettings" },
	{ 0x75a7763, "mii_ethtool_set_link_ksettings" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mii");


MODULE_INFO(srcversion, "525A4CBE1D7E1B0D8EC2F4A");
