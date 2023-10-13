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
	{ 0x1e8aee9f, "rtnl_link_unregister" },
	{ 0xa4f157b5, "rtnl_link_register" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2816d12d, "free_netdev" },
	{ 0xe1ddc39c, "__put_net" },
	{ 0x288691f9, "rtnl_configure_link" },
	{ 0x958767a4, "register_netdevice" },
	{ 0xfdd15055, "rtnl_create_link" },
	{ 0xecc9baf1, "rtnl_link_get_net" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x6b640864, "nla_strlcpy" },
	{ 0xe1e7e40c, "rtnl_nla_parse_ifla" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x50087170, "netif_rx_ni" },
	{ 0xad263612, "consume_skb" },
	{ 0xba2c8b02, "sock_efree" },
	{ 0x30313dd3, "skb_clone" },
	{ 0x56470118, "__warn_printk" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0x4aebfc6b, "unregister_netdevice_queue" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F430D077555D248DDFF9DCB");
