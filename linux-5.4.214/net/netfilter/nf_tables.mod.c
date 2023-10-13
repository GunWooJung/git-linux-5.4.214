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
	{ 0x2f2c95c4, "flush_work" },
	{ 0xe4a1ef77, "nfnetlink_has_listeners" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1d9e62a3, "flow_indr_block_call" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0xb7f990e9, "rht_bucket_nested" },
	{ 0x3283e6b0, "prandom_seed_full_state" },
	{ 0x27a7a3df, "flow_indr_add_block_cb" },
	{ 0x349cba85, "strchr" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x754d539c, "strlen" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xf9c1f9ab, "security_secctx_to_secid" },
	{ 0xee2730b2, "from_kuid_munged" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x73588f11, "dst_release" },
	{ 0xfff5afc, "time64_to_tm" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x37bc3020, "rhltable_init" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xd4ce891e, "init_user_ns" },
	{ 0x7c90376, "inet_proto_csum_replace4" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5ce3b588, "nfnl_lock" },
	{ 0x2f03fc4b, "security_secmark_refcount_inc" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xcc9f9937, "ipv6_find_hdr" },
	{ 0x1172d487, "rhashtable_insert_slow" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0xe1ddc39c, "__put_net" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x7e3c9fe2, "from_kgid_munged" },
	{ 0x14321947, "nfnetlink_subsys_unregister" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xfe01d957, "__get_task_comm" },
	{ 0x9d9820ed, "nfnetlink_send" },
	{ 0xcfc15f4b, "rht_bucket_nested_insert" },
	{ 0x92ec510d, "jiffies64_to_msecs" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xfb578fc5, "memset" },
	{ 0xa5ed9517, "skb_checksum" },
	{ 0x5674b3cb, "rhashtable_free_and_destroy" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xc21708cd, "unregister_pernet_subsys" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xdb065657, "nfnl_unlock" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x1a9a433c, "prandom_u32_state" },
	{ 0xc0ff12fb, "nla_strdup" },
	{ 0x38129556, "skb_ensure_writable" },
	{ 0x9166fada, "strncpy" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x5a921311, "strncmp" },
	{ 0x8b6287ed, "nfnetlink_unicast" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x4a1b176b, "skb_store_bits" },
	{ 0x9896c162, "ip_route_me_harder" },
	{ 0x19bd383b, "security_secmark_refcount_dec" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x3e817db3, "__skb_get_hash" },
	{ 0xf6ab8207, "nf_register_net_hook" },
	{ 0xfe5d4bb2, "sys_tz" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0xb36c759, "nf_unregister_net_hook" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdf46d4f1, "module_put" },
	{ 0xbd461f67, "flow_indr_del_block_cb" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0xa916b694, "strnlen" },
	{ 0x87e99063, "nf_route" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0xc63e21bc, "__ip_options_compile" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2f4880df, "static_key_slow_dec" },
	{ 0x1709a80e, "register_pernet_subsys" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x67a8d5f, "__dev_get_by_name" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x9ea53d7f, "vsnprintf" },
	{ 0x6f395e65, "__module_get" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xbef9bf27, "ip6_route_me_harder" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xe74a2c27, "nfnetlink_subsys_register" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xb49fa9bc, "flow_block_cb_free" },
	{ 0x75d0deb9, "nsecs_to_jiffies64" },
	{ 0x6b640864, "nla_strlcpy" },
	{ 0x9bd86775, "nfnetlink_set_err" },
	{ 0x2c82c36a, "security_secmark_relabel_packet" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x6f18b0e3, "nla_put_64bit" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x8e281574, "nla_reserve" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xedbaee5e, "nla_strcmp" },
	{ 0x8e92f7c4, "static_key_slow_inc" },
	{ 0xa6884eab, "__nlmsg_put" },
	{ 0x5cb6526b, "skb_copy_bits" },
	{ 0xd0d156e9, "__rht_bucket_nested" },
	{ 0x6d71399f, "try_module_get" },
	{ 0x5d5c2075, "flow_rule_alloc" },
	{ 0xfe87cdd0, "__netlink_dump_start" },
	{ 0xf105fed9, "__do_once_done" },
};

MODULE_INFO(depends, "nfnetlink");


MODULE_INFO(srcversion, "16C63173656DA86B60E6FB4");