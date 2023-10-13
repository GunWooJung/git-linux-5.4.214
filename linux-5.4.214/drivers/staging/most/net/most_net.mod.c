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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0xeb1919a4, "netdev_info" },
	{ 0xb93f6cd8, "most_stop_channel" },
	{ 0x360781c, "most_deregister_configfs_subsys" },
	{ 0xfd5e86d2, "most_register_component" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0xa931ad90, "linkwatch_fire_event" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3cb62fff, "most_put_mbo" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x63616516, "netif_rx" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe125010, "most_deregister_component" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x2816d12d, "free_netdev" },
	{ 0xc21596aa, "register_netdev" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x7c36a9e6, "most_submit_mbo" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x2282fbaf, "most_get_mbo" },
	{ 0xc6fb8710, "alloc_netdev_mqs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x216cc777, "netdev_err" },
	{ 0xf0fa7dc3, "ether_setup" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xe8b1a3d2, "netdev_warn" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4978ff76, "most_start_channel" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x820db7ec, "eth_mac_addr" },
	{ 0x8392fb44, "most_register_configfs_subsys" },
};

MODULE_INFO(depends, "most_core");


MODULE_INFO(srcversion, "AEA9D19A850076AEBCD665C");
