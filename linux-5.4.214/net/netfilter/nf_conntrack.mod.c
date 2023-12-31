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
	{ 0x2cdf87a1, "proc_dointvec_minmax" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa0554d18, "release_sock" },
	{ 0x92a881bb, "kmem_cache_destroy" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x7d5e1008, "__crc32c_le_shift" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xe1a8d7c9, "net_rwsem" },
	{ 0x53b954a2, "up_read" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xf3fc6c98, "nf_queue_nf_hook_drop" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x754d539c, "strlen" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xc57c6d80, "unregister_net_sysctl_table" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x5a6cdb52, "nf_ct_zone_dflt" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xf44a904a, "net_ns_barrier" },
	{ 0xab64f768, "nf_nat_hook" },
	{ 0xf50bf868, "ip_ct_attach" },
	{ 0xa8181adf, "proc_dointvec" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x8cab0ded, "nf_defrag_ipv6_enable" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x56470118, "__warn_printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0xd4ce891e, "init_user_ns" },
	{ 0x7c90376, "inet_proto_csum_replace4" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x8b541133, "__skb_checksum" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xe17678a, "siphash_4u64" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xb15b4109, "crc32c" },
	{ 0x2a2fa260, "nla_policy_len" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x668b19a1, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xe4262c6, "__siphash_unaligned" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0xa65722e8, "nf_ip_checksum" },
	{ 0x516e4446, "nf_log_packet" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x6d2fc5a6, "net_namespace_list" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xc21708cd, "unregister_pernet_subsys" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xaf7d0f48, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0x944375db, "_totalram_pages" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x5c05256a, "lock_sock_nested" },
	{ 0xc09e8ca4, "nf_unregister_net_hooks" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x38129556, "skb_ensure_writable" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x61a344e5, "nf_checksum_partial" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0xb566a6c3, "kmem_cache_free" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x734a4bce, "__krealloc" },
	{ 0x24d273d1, "add_timer" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x721c9d1f, "init_net" },
	{ 0x8289b854, "nf_checksum" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdf46d4f1, "module_put" },
	{ 0x7ccefd28, "kmem_cache_alloc" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xdeb0eda5, "nf_register_net_hooks" },
	{ 0xb71cf1a4, "ipv6_skip_exthdr" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc8827b75, "sysctl_vals" },
	{ 0x5b49b982, "param_get_uint" },
	{ 0xcf781161, "nf_unregister_sockopt" },
	{ 0x1000e51, "schedule" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x1709a80e, "register_pernet_subsys" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x12a18ae1, "nf_ct_hook" },
	{ 0x51624e26, "kmem_cache_create" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x8e1243e1, "nf_defrag_ipv4_enable" },
	{ 0xdd4fc9f6, "param_set_uint" },
	{ 0x6f18b0e3, "nla_put_64bit" },
	{ 0xc79fbd0a, "nf_register_sockopt" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xecee4256, "register_net_sysctl" },
	{ 0xdf6b082f, "proc_dointvec_jiffies" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x5cb6526b, "skb_copy_bits" },
	{ 0xabd5f5c3, "nf_ip6_checksum" },
	{ 0xd542439, "__ipv6_addr_type" },
	{ 0x6d71399f, "try_module_get" },
	{ 0xf105fed9, "__do_once_done" },
};

MODULE_INFO(depends, "nf_defrag_ipv6,libcrc32c,nf_defrag_ipv4");


MODULE_INFO(srcversion, "2CE80BE09DC6CB2EDEABEA3");
