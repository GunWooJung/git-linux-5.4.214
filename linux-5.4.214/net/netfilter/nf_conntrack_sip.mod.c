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
	{ 0x6afb7c3, "nf_ct_unexpect_related" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0x568789b1, "__nf_ct_refresh_acct" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x73588f11, "dst_release" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x125de343, "nf_ct_helper_init" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xedae0d60, "nf_ct_expect_init" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa3f91a2b, "nf_ip_route" },
	{ 0x5c35bee6, "nf_conntrack_helpers_register" },
	{ 0x90a69765, "__pskb_pull_tail" },
	{ 0x11089ac7, "_ctype" },
	{ 0xc5850110, "printk" },
	{ 0x22b1cb21, "nf_ct_expect_put" },
	{ 0x575e0d21, "nf_ct_expect_alloc" },
	{ 0x5a921311, "strncmp" },
	{ 0xfe48351d, "nf_ct_expect_related_report" },
	{ 0xec60895d, "nf_conntrack_helpers_unregister" },
	{ 0x4fe90267, "nf_ct_remove_expect" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xf52500d1, "__nf_ct_expect_find" },
	{ 0x9adb7399, "nf_conntrack_expect_lock" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x96b29254, "strncasecmp" },
	{ 0xac5fcec0, "in4_pton" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd088945b, "nf_ct_helper_log" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x39e703dd, "__nf_ip6_route" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0x609bcd98, "in6_pton" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0x1e0a0c24, "mod_timer_pending" },
	{ 0xcce57a7f, "param_ops_ushort" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x5cb6526b, "skb_copy_bits" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "E2EE37215F6D0DCACE1947B");
