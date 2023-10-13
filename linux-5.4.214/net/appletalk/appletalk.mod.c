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
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xffd8af80, "sock_init_data" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3ce25513, "proc_create_seq_private" },
	{ 0xee2730b2, "from_kuid_munged" },
	{ 0x1b4d36bf, "sock_no_setsockopt" },
	{ 0xc57c6d80, "unregister_net_sysctl_table" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x71bd10b7, "sock_no_getsockopt" },
	{ 0xb704c8e1, "sock_gettstamp" },
	{ 0xe35ed617, "seq_puts" },
	{ 0xa8181adf, "proc_dointvec" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x30313dd3, "skb_clone" },
	{ 0x5a955fde, "skb_copy" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x5fe87dfe, "sock_queue_rcv_skb" },
	{ 0x3f37e34f, "skb_recv_datagram" },
	{ 0x75bda77a, "seq_hlist_next" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x564c202f, "skb_realloc_headroom" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0x86b18dbf, "sock_no_sendpage" },
	{ 0x90a69765, "__pskb_pull_tail" },
	{ 0xc3fec769, "sock_no_mmap" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xf89e6197, "skb_queue_purge" },
	{ 0x91857821, "sock_no_socketpair" },
	{ 0x7369dd1b, "proc_mkdir" },
	{ 0xefb8cb40, "sk_alloc" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x6dc0618f, "skb_copy_datagram_iter" },
	{ 0xc5850110, "printk" },
	{ 0x5c05256a, "lock_sock_nested" },
	{ 0x3dfc897c, "seq_hlist_start_head" },
	{ 0xe0558df8, "sock_no_listen" },
	{ 0xd523d85d, "skb_push" },
	{ 0x66764b9d, "sock_no_accept" },
	{ 0x285c8d25, "sk_free" },
	{ 0xd8f73fc4, "dev_remove_pack" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x24d273d1, "add_timer" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x721c9d1f, "init_net" },
	{ 0x56f2030c, "register_snap_client" },
	{ 0xcc0f2a0e, "sock_no_shutdown" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc502ef3, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0x79be1f9a, "proto_register" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7407e9a5, "datagram_poll" },
	{ 0xefde0a5a, "sock_register" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x7b03533c, "proto_unregister" },
	{ 0xc4a9f597, "_copy_from_iter_full" },
	{ 0xc6fb8710, "alloc_netdev_mqs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x8f8ce9bb, "sock_alloc_send_skb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x67a8d5f, "__dev_get_by_name" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x2290a925, "remove_proc_subtree" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x4b02a24c, "unregister_snap_client" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x3b89b540, "skb_dequeue" },
	{ 0x81f944be, "dev_add_pack" },
	{ 0xad263612, "consume_skb" },
	{ 0xba505b9b, "dev_queue_xmit" },
	{ 0xecee4256, "register_net_sysctl" },
	{ 0xf89bc02c, "skb_put" },
	{ 0xdf6b082f, "proc_dointvec_jiffies" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x473afe6b, "sock_i_uid" },
	{ 0x9bc1db72, "dev_mc_add_global" },
	{ 0x3d81c1b, "skb_free_datagram" },
};

MODULE_INFO(depends, "psnap");


MODULE_INFO(srcversion, "45346DE212AE8D55BBF40C5");
