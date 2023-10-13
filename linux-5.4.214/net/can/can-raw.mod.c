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
	{ 0xa0554d18, "release_sock" },
	{ 0xbb951859, "can_rx_register" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0xb704c8e1, "sock_gettstamp" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xbc7ec408, "can_proto_unregister" },
	{ 0x30313dd3, "skb_clone" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x5fe87dfe, "sock_queue_rcv_skb" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x3f37e34f, "skb_recv_datagram" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x86b18dbf, "sock_no_sendpage" },
	{ 0xc3fec769, "sock_no_mmap" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x91857821, "sock_no_socketpair" },
	{ 0xc5850110, "printk" },
	{ 0x5c05256a, "lock_sock_nested" },
	{ 0xe0558df8, "sock_no_listen" },
	{ 0x66764b9d, "sock_no_accept" },
	{ 0x285c8d25, "sk_free" },
	{ 0x437a0d6d, "__sock_tx_timestamp" },
	{ 0xdf0ff0cf, "dev_get_by_index" },
	{ 0xcc0f2a0e, "sock_no_shutdown" },
	{ 0x59f18d51, "can_send" },
	{ 0xebb3f0e4, "__sock_recv_ts_and_drops" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7407e9a5, "datagram_poll" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0xc4a9f597, "_copy_from_iter_full" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe039923f, "can_proto_register" },
	{ 0x8f8ce9bb, "sock_alloc_send_skb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x31e63a04, "sock_no_connect" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x4b51a837, "can_rx_unregister" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x7beb3062, "_copy_to_iter" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x3d81c1b, "skb_free_datagram" },
};

MODULE_INFO(depends, "can");


MODULE_INFO(srcversion, "990A7F25C0014610847AC62");
