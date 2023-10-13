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
	{ 0x3d47a9f7, "inet_frag_kill" },
	{ 0xa1713526, "pskb_trim_rcsum_slow" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xc57c6d80, "unregister_net_sysctl_table" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xa8f6c843, "ip_frag_ecn_table" },
	{ 0x73588f11, "dst_release" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x1fe90d13, "fqdir_exit" },
	{ 0x721469b0, "inet_frag_find" },
	{ 0x2ce0a2a0, "inet_frag_reasm_prepare" },
	{ 0x90a69765, "__pskb_pull_tail" },
	{ 0xc21708cd, "unregister_pernet_subsys" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xc09e8ca4, "nf_unregister_net_hooks" },
	{ 0x452ba683, "ipv6_ext_hdr" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xec2e1c8f, "proc_doulongvec_minmax" },
	{ 0xcc94a2c1, "inet_frags_fini" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5449a062, "dev_get_by_index_rcu" },
	{ 0x721c9d1f, "init_net" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x4561a008, "fqdir_init" },
	{ 0xdeb0eda5, "nf_register_net_hooks" },
	{ 0xc9abc0b0, "inet_frag_reasm_finish" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0xf0a51f94, "inet_frag_destroy" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1709a80e, "register_pernet_subsys" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x37a0cba, "kfree" },
	{ 0xce341160, "inet_frag_pull_head" },
	{ 0xf3476635, "inet_frags_init" },
	{ 0xee02e2fe, "inet_frag_queue_insert" },
	{ 0xb0e602eb, "memmove" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xecee4256, "register_net_sysctl" },
	{ 0xdf6b082f, "proc_dointvec_jiffies" },
	{ 0x5cb6526b, "skb_copy_bits" },
	{ 0x47c7b75d, "icmp6_send" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "529E0694C49601ED89FB521");
