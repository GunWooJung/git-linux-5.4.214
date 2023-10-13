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
	{ 0xffd8af80, "sock_init_data" },
	{ 0x3ce25513, "proc_create_seq_private" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xee2730b2, "from_kuid_munged" },
	{ 0x37358233, "dev_getbyhwaddr_rcu" },
	{ 0xc57c6d80, "unregister_net_sysctl_table" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xe35ed617, "seq_puts" },
	{ 0xb308c97d, "wait_woken" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x30313dd3, "skb_clone" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0xcbaa4b74, "remove_proc_entry" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x5fe87dfe, "sock_queue_rcv_skb" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x59efc5b3, "skb_set_owner_w" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x69828cc9, "sock_rfree" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe677827a, "skb_unlink" },
	{ 0x86b18dbf, "sock_no_sendpage" },
	{ 0xc3fec769, "sock_no_mmap" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x454b3823, "sk_wait_data" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xf89e6197, "skb_queue_purge" },
	{ 0xba2c8b02, "sock_efree" },
	{ 0x91857821, "sock_no_socketpair" },
	{ 0x2672326a, "llc_set_station_handler" },
	{ 0x7369dd1b, "proc_mkdir" },
	{ 0xefb8cb40, "sk_alloc" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x6dc0618f, "skb_copy_datagram_iter" },
	{ 0xc5850110, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x5c05256a, "lock_sock_nested" },
	{ 0xe0e3cea6, "ns_capable" },
	{ 0x52d7b2fd, "llc_sap_list" },
	{ 0xe7ee893f, "llc_mac_hdr_init" },
	{ 0xd523d85d, "skb_push" },
	{ 0x5449a062, "dev_get_by_index_rcu" },
	{ 0x285c8d25, "sk_free" },
	{ 0xdf0ff0cf, "dev_get_by_index" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x38b92846, "llc_remove_pack" },
	{ 0x534e69de, "llc_sap_find" },
	{ 0x721c9d1f, "init_net" },
	{ 0x9810b204, "llc_add_pack" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc502ef3, "skb_queue_tail" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0x79be1f9a, "proto_register" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x92f8784b, "__alloc_skb" },
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
	{ 0x7e67a0ab, "llc_sap_open" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x69acdf38, "memcpy" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x3b89b540, "skb_dequeue" },
	{ 0xf9c3de14, "llc_sap_close" },
	{ 0xba505b9b, "dev_queue_xmit" },
	{ 0xecee4256, "register_net_sysctl" },
	{ 0xf89bc02c, "skb_put" },
	{ 0xedfdf334, "llc_build_and_send_ui_pkt" },
	{ 0xdf6b082f, "proc_dointvec_jiffies" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x473afe6b, "sock_i_uid" },
	{ 0xda10ec3, "security_sock_graft" },
};

MODULE_INFO(depends, "llc");


MODULE_INFO(srcversion, "27E0B2536D4DE09CBF57923");
