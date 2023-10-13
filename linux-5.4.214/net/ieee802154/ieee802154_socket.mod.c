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
	{ 0x876f02a6, "dev_load" },
	{ 0xffd8af80, "sock_init_data" },
	{ 0x37358233, "dev_getbyhwaddr_rcu" },
	{ 0xb704c8e1, "sock_gettstamp" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0x73588f11, "dst_release" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x5098caed, "dev_get_by_name" },
	{ 0x30313dd3, "skb_clone" },
	{ 0x9525f20, "sock_no_getname" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x5fe87dfe, "sock_queue_rcv_skb" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x3f37e34f, "skb_recv_datagram" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x3b6ae85b, "sk_common_release" },
	{ 0xe7a438eb, "compat_sock_common_setsockopt" },
	{ 0xe2ed5a88, "sock_common_recvmsg" },
	{ 0x86b18dbf, "sock_no_sendpage" },
	{ 0xc3fec769, "sock_no_mmap" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x47fd8ea4, "compat_sock_common_getsockopt" },
	{ 0x3807337, "ieee802154_hdr_pull" },
	{ 0xf89e6197, "skb_queue_purge" },
	{ 0x91857821, "sock_no_socketpair" },
	{ 0xefb8cb40, "sk_alloc" },
	{ 0x6dc0618f, "skb_copy_datagram_iter" },
	{ 0xc5850110, "printk" },
	{ 0xc0e103cb, "sock_no_bind" },
	{ 0x5c05256a, "lock_sock_nested" },
	{ 0xe0e3cea6, "ns_capable" },
	{ 0x5443ab95, "sock_prot_inuse_add" },
	{ 0xe0558df8, "sock_no_listen" },
	{ 0xd523d85d, "skb_push" },
	{ 0x66764b9d, "sock_no_accept" },
	{ 0xdf0ff0cf, "dev_get_by_index" },
	{ 0xd8f73fc4, "dev_remove_pack" },
	{ 0x721c9d1f, "init_net" },
	{ 0xcc0f2a0e, "sock_no_shutdown" },
	{ 0xebb3f0e4, "__sock_recv_ts_and_drops" },
	{ 0xc6cbbc89, "capable" },
	{ 0x79be1f9a, "proto_register" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7407e9a5, "datagram_poll" },
	{ 0xefde0a5a, "sock_register" },
	{ 0x5c213088, "dev_getfirstbyhwtype" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x7b03533c, "proto_unregister" },
	{ 0xc4a9f597, "_copy_from_iter_full" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x8f8ce9bb, "sock_alloc_send_skb" },
	{ 0x3c6c0490, "put_cmsg" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x12b6c202, "sock_common_setsockopt" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x12fb0a44, "sock_common_getsockopt" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x81f944be, "dev_add_pack" },
	{ 0xad263612, "consume_skb" },
	{ 0xba505b9b, "dev_queue_xmit" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x3d81c1b, "skb_free_datagram" },
};

MODULE_INFO(depends, "ieee802154");


MODULE_INFO(srcversion, "A28C13A39769A6B544B33E4");
