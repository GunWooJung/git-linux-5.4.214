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
	{ 0x1e8aee9f, "rtnl_link_unregister" },
	{ 0xce807a25, "up_write" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xd0a68084, "__rtnl_link_unregister" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x958767a4, "register_netdevice" },
	{ 0xc6fb8710, "alloc_netdev_mqs" },
	{ 0x168eb124, "__rtnl_link_register" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x57bc19d2, "down_write" },
	{ 0x565f18, "pernet_ops_rwsem" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x2899f099, "netif_receive_skb" },
	{ 0x7f5f891f, "skb_pull_rcsum" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x8c3253ec, "_raw_spin_trylock" },
	{ 0xba505b9b, "dev_queue_xmit" },
	{ 0x5449a062, "dev_get_by_index_rcu" },
	{ 0x37a0cba, "kfree" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xf0fa7dc3, "ether_setup" },
	{ 0xad263612, "consume_skb" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x7f787f6d, "netif_tx_stop_all_queues" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A734F78712E8C29F996B503");
