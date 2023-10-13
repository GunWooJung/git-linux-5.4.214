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
	{ 0xc21708cd, "unregister_pernet_subsys" },
	{ 0xc6afd85d, "nfnl_ct_hook" },
	{ 0x14321947, "nfnetlink_subsys_unregister" },
	{ 0x1709a80e, "register_pernet_subsys" },
	{ 0xe74a2c27, "nfnetlink_subsys_register" },
	{ 0x27a7011c, "nf_ct_iterate_cleanup_net" },
	{ 0xfd7e384a, "nf_conntrack_eventmask_report" },
	{ 0x24d273d1, "add_timer" },
	{ 0xf52500d1, "__nf_ct_expect_find" },
	{ 0x5d9aa56a, "nf_ct_delete" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x28eff409, "nf_conntrack_hash" },
	{ 0xdba7326b, "nf_conntrack_lock" },
	{ 0xaf0847f0, "nf_conntrack_locks" },
	{ 0x8ffe7e89, "nf_conntrack_htable_size" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xec8beba6, "nf_ct_expect_hash" },
	{ 0xc18ac88d, "nf_ct_expect_hsize" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xee800650, "nf_ct_helper_expectfn_find_by_symbol" },
	{ 0xe4a1ef77, "nfnetlink_has_listeners" },
	{ 0x9bd86775, "nfnetlink_set_err" },
	{ 0x9d9820ed, "nfnetlink_send" },
	{ 0xed61f6b3, "security_release_secctx" },
	{ 0x754d539c, "strlen" },
	{ 0x37a0cba, "kfree" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x8f4f774, "netlink_unicast" },
	{ 0xf38bcdf3, "nf_conntrack_max" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0xa6884eab, "__nlmsg_put" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf44d53da, "security_secid_to_secctx" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x8b126341, "nf_conntrack_free" },
	{ 0x3d8f7133, "__nf_ct_try_assign_helper" },
	{ 0x224f02d4, "nf_conntrack_hash_check_insert" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x90b6955d, "nf_conntrack_find_get" },
	{ 0x5a513ff0, "nf_ct_ext_add" },
	{ 0x1e26d86f, "nf_ct_helper_ext_add" },
	{ 0x6ee08dd5, "nf_conntrack_alloc" },
	{ 0x1cd41e8a, "nf_ct_remove_expectations" },
	{ 0x5ce3b588, "nfnl_lock" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xdb065657, "nfnl_unlock" },
	{ 0xab64f768, "nf_nat_hook" },
	{ 0xfe48351d, "nf_ct_expect_related_report" },
	{ 0x5b87c371, "__nf_conntrack_helper_find" },
	{ 0xd852d82b, "nf_ct_helper_expectfn_find_by_name" },
	{ 0x575e0d21, "nf_ct_expect_alloc" },
	{ 0x45c63201, "nf_ct_unlink_expect_report" },
	{ 0xa3a5f95d, "nf_ct_expect_iterate_net" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x9adb7399, "nf_conntrack_expect_lock" },
	{ 0xc8cee509, "nf_ct_expect_find_get" },
	{ 0xfe87cdd0, "__netlink_dump_start" },
	{ 0xc5850110, "printk" },
	{ 0xec2bd294, "nf_ct_expect_register_notifier" },
	{ 0xddbac3e6, "nf_conntrack_register_notifier" },
	{ 0xf105fed9, "__do_once_done" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x18e60984, "__do_once_start" },
	{ 0xe17678a, "siphash_4u64" },
	{ 0xe4262c6, "__siphash_unaligned" },
	{ 0x6f18b0e3, "nla_put_64bit" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xa18c50a6, "nf_conntrack_unregister_notifier" },
	{ 0x2f065538, "nf_ct_expect_unregister_notifier" },
	{ 0x2a2fa260, "nla_policy_len" },
	{ 0x98d3f4ca, "nf_ct_get_id" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xe616de5b, "nf_connlabels_replace" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x1fc7a59b, "__nla_validate" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1c368756, "nf_ct_l4proto_find" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x22b1cb21, "nf_ct_expect_put" },
	{ 0xf57888a, "nf_ct_tcp_seqadj_set" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nfnetlink,nf_conntrack");


MODULE_INFO(srcversion, "956BE754A40B1AD293A578C");
