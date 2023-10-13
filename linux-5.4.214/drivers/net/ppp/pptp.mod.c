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
	{ 0xc63abf34, "sock_no_recvmsg" },
	{ 0xba7d45f2, "sock_no_sendmsg" },
	{ 0x71bd10b7, "sock_no_getsockopt" },
	{ 0x1b4d36bf, "sock_no_setsockopt" },
	{ 0xcc0f2a0e, "sock_no_shutdown" },
	{ 0xe0558df8, "sock_no_listen" },
	{ 0xc27db8b4, "pppox_compat_ioctl" },
	{ 0x631ea8b3, "pppox_ioctl" },
	{ 0x66764b9d, "sock_no_accept" },
	{ 0x91857821, "sock_no_socketpair" },
	{ 0xe0ff7a18, "unregister_pppox_proto" },
	{ 0x999e8297, "vfree" },
	{ 0x244920e, "gre_del_protocol" },
	{ 0x7b03533c, "proto_unregister" },
	{ 0xa3add089, "register_pppox_proto" },
	{ 0x79be1f9a, "proto_register" },
	{ 0xcfe4c500, "gre_add_protocol" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0x6f4fadf7, "ip_local_out" },
	{ 0x2124474, "ip_send_check" },
	{ 0x58ab6050, "__ip_select_ident" },
	{ 0xd523d85d, "skb_push" },
	{ 0xad263612, "consume_skb" },
	{ 0x59efc5b3, "skb_set_owner_w" },
	{ 0x564c202f, "skb_realloc_headroom" },
	{ 0xbb9ab629, "ppp_input" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x5fe87dfe, "sock_queue_rcv_skb" },
	{ 0x285c8d25, "sk_free" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x534ad155, "pppox_unbind_sock" },
	{ 0xf89e6197, "skb_queue_purge" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x73588f11, "dst_release" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x90a69765, "__pskb_pull_tail" },
	{ 0x112574c9, "__sk_receive_skb" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0xc5850110, "printk" },
	{ 0x8de894fe, "make_kuid" },
	{ 0xaf87d51c, "ppp_register_channel" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x6e7ca7b4, "sk_setup_caps" },
	{ 0x31ec3ae6, "ip_route_output_flow" },
	{ 0xf0875158, "security_sk_classify_flow" },
	{ 0xa0554d18, "release_sock" },
	{ 0x5c05256a, "lock_sock_nested" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xffd8af80, "sock_init_data" },
	{ 0xefb8cb40, "sk_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pppox,gre");


MODULE_INFO(srcversion, "BC4E562362A8D71FAA085DF");
