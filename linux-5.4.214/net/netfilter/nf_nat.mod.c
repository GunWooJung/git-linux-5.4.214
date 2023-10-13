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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x7d5e1008, "__crc32c_le_shift" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xab64f768, "nf_nat_hook" },
	{ 0x289c3714, "nf_ct_alloc_hashtable" },
	{ 0xb9161fab, "nf_ct_kill_acct" },
	{ 0x73588f11, "dst_release" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x2124474, "ip_send_check" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x60352082, "register_inet6addr_notifier" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x7c90376, "inet_proto_csum_replace4" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x8b541133, "__skb_checksum" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xb15b4109, "crc32c" },
	{ 0xe1ddc39c, "__put_net" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xf9be3991, "inet_proto_csum_replace16" },
	{ 0xd743da1e, "nf_ct_iterate_destroy" },
	{ 0xa65722e8, "nf_ip_checksum" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x2fe252cc, "unregister_inet6addr_notifier" },
	{ 0xa5ed9517, "skb_checksum" },
	{ 0xc21708cd, "unregister_pernet_subsys" },
	{ 0xfe731af8, "nf_ct_invert_tuple" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa6393efb, "inet_select_addr" },
	{ 0xc09e8ca4, "nf_unregister_net_hooks" },
	{ 0x38129556, "skb_ensure_writable" },
	{ 0xec84e68f, "nf_hook_entries_delete_raw" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9896c162, "ip_route_me_harder" },
	{ 0x74895104, "nf_conntrack_alter_reply" },
	{ 0x8ffe7e89, "nf_conntrack_htable_size" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x76314ed4, "ipv6_dev_get_saddr" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdf46d4f1, "module_put" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0xdeb0eda5, "nf_register_net_hooks" },
	{ 0xb71cf1a4, "ipv6_skip_exthdr" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x27a7011c, "nf_ct_iterate_cleanup_net" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdf190b24, "nf_conntrack_tuple_taken" },
	{ 0x1709a80e, "register_pernet_subsys" },
	{ 0xcfb5d782, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xbef9bf27, "ip6_route_me_harder" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa9142780, "nf_ct_extend_unregister" },
	{ 0x59d9d1e, "nf_ct_helper_expectfn_register" },
	{ 0x31ff672, "nf_ct_extend_register" },
	{ 0x7c340f43, "__xfrm_decode_session" },
	{ 0xf62c8980, "nf_ct_helper_expectfn_unregister" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb0e602eb, "memmove" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x9ceb98ec, "nf_ct_seqadj_set" },
	{ 0xf888b4dd, "xfrm_lookup" },
	{ 0x47476ffa, "nf_hook_entries_insert_raw" },
	{ 0xabd5f5c3, "nf_ip6_checksum" },
	{ 0x6d71399f, "try_module_get" },
	{ 0xf105fed9, "__do_once_done" },
	{ 0x5a513ff0, "nf_ct_ext_add" },
};

MODULE_INFO(depends, "nf_conntrack,libcrc32c");


MODULE_INFO(srcversion, "F7E4EB634DA3FA79A472C7A");
