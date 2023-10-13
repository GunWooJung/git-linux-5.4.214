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
	{ 0xc3fec769, "sock_no_mmap" },
	{ 0xcc0f2a0e, "sock_no_shutdown" },
	{ 0xe0558df8, "sock_no_listen" },
	{ 0xc27db8b4, "pppox_compat_ioctl" },
	{ 0x631ea8b3, "pppox_ioctl" },
	{ 0x7407e9a5, "datagram_poll" },
	{ 0x66764b9d, "sock_no_accept" },
	{ 0x91857821, "sock_no_socketpair" },
	{ 0xc0e103cb, "sock_no_bind" },
	{ 0x337f2432, "l2tp_nl_unregister_ops" },
	{ 0x4edc58ab, "unregister_pernet_device" },
	{ 0x7b03533c, "proto_unregister" },
	{ 0xe0ff7a18, "unregister_pppox_proto" },
	{ 0x75d272e0, "l2tp_nl_register_ops" },
	{ 0xa3add089, "register_pppox_proto" },
	{ 0x79be1f9a, "proto_register" },
	{ 0x9bc2f868, "register_pernet_device" },
	{ 0x8f0704a3, "ppp_register_net_channel" },
	{ 0x73588f11, "dst_release" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7b07862f, "l2tp_tunnel_register" },
	{ 0x952fb42e, "l2tp_tunnel_create" },
	{ 0x6282005, "l2tp_tunnel_delete" },
	{ 0x2efff130, "l2tp_tunnel_get" },
	{ 0xcfb5d782, "pskb_expand_head" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xd4292f0b, "l2tp_xmit_skb" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xc4a9f597, "_copy_from_iter_full" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x22f164ce, "sock_wmalloc" },
	{ 0xa0554d18, "release_sock" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3fc0cd11, "l2tp_session_delete" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x534ad155, "pppox_unbind_sock" },
	{ 0x5c05256a, "lock_sock_nested" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xb02b6cc8, "l2tp_session_set_header_len" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xb60adaef, "l2tp_tunnel_get_session" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xe35ed617, "seq_puts" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0x99f71223, "ppp_dev_name" },
	{ 0xae37d3ad, "l2tp_session_get_nth" },
	{ 0x285c8d25, "sk_free" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x286f9614, "l2tp_session_free" },
	{ 0xf89e6197, "skb_queue_purge" },
	{ 0xeee76be1, "l2tp_tunnel_free" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xfd8db240, "l2tp_tunnel_get_nth" },
	{ 0xc5850110, "printk" },
	{ 0x90a69765, "__pskb_pull_tail" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x5fe87dfe, "sock_queue_rcv_skb" },
	{ 0xbb9ab629, "ppp_input" },
	{ 0xf4d0b8fb, "proc_create_net_data" },
	{ 0xcbaa4b74, "remove_proc_entry" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6dc0618f, "skb_copy_datagram_iter" },
	{ 0x3f37e34f, "skb_recv_datagram" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x89a4f9d8, "l2tp_udp_encap_recv" },
	{ 0xffd8af80, "sock_init_data" },
	{ 0xefb8cb40, "sk_alloc" },
	{ 0x37a0cba, "kfree" },
	{ 0xff3829ba, "l2tp_session_register" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x3d4363d0, "l2tp_session_create" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pppox,l2tp_netlink,l2tp_core");


MODULE_INFO(srcversion, "50DD0EB8FFA2D8CD831B777");
