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
	{ 0x820db7ec, "eth_mac_addr" },
	{ 0xc7a6ead9, "ethtool_op_get_link" },
	{ 0xf9eb813f, "ntb_transport_unregister_client_dev" },
	{ 0xc2dbf503, "ntb_transport_unregister_client" },
	{ 0xc0bdaa66, "ntb_transport_register_client" },
	{ 0xf55d6313, "ntb_transport_register_client_dev" },
	{ 0x3d54dbfc, "ntb_transport_tx_enqueue" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xc21596aa, "register_netdev" },
	{ 0x559a557b, "ntb_transport_create_queue" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x216cc777, "netdev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9c992c8f, "ntb_transport_link_up" },
	{ 0xc37d9036, "ntb_transport_rx_remove" },
	{ 0x436098aa, "ntb_transport_link_down" },
	{ 0x30934216, "ntb_transport_max_size" },
	{ 0x5792f848, "strlcpy" },
	{ 0xd40e7a02, "ntb_transport_rx_enqueue" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x63616516, "netif_rx" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x862001f, "ntb_transport_tx_free_entry" },
	{ 0xad263612, "consume_skb" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0x21d3b421, "__dynamic_netdev_dbg" },
	{ 0x32537aca, "ntb_transport_link_query" },
	{ 0x2816d12d, "free_netdev" },
	{ 0xc270dc24, "ntb_transport_free_queue" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ntb_transport");


MODULE_INFO(srcversion, "E1DAA000CD010218C1477DA");
