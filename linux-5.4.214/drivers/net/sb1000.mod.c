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
	{ 0xa317608d, "pnp_unregister_driver" },
	{ 0x5b641e8c, "pnp_register_driver" },
	{ 0x63616516, "netif_rx" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0x49951708, "sev_enable_key" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xf9a482f9, "msleep" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x760a0f4f, "yield" },
	{ 0xc21596aa, "register_netdev" },
	{ 0xb0682686, "pnp_device_detach" },
	{ 0xa1e6fe4a, "pnp_disable_dev" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
	{ 0x85bd1608, "__request_region" },
	{ 0x20c79ab5, "pnp_get_resource" },
	{ 0xbf4f578b, "pnp_activate_dev" },
	{ 0xacc35882, "pnp_device_attach" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xad263612, "consume_skb" },
	{ 0xc5850110, "printk" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pnp:dGIC1000*");
MODULE_ALIAS("acpi*:GIC1000:*");

MODULE_INFO(srcversion, "8DCBD3E6FA18B9277BE2E85");
