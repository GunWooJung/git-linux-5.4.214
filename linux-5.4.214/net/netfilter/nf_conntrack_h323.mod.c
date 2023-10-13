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
	{ 0x1cd41e8a, "nf_ct_remove_expectations" },
	{ 0x6afb7c3, "nf_ct_unexpect_related" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x6bcb4616, "nf_conntrack_helper_register" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x568789b1, "__nf_ct_refresh_acct" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x3230444a, "nf_conntrack_helper_unregister" },
	{ 0x73588f11, "dst_release" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xedae0d60, "nf_ct_expect_init" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa3f91a2b, "nf_ip_route" },
	{ 0x5c35bee6, "nf_conntrack_helpers_register" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x22b1cb21, "nf_ct_expect_put" },
	{ 0x575e0d21, "nf_ct_expect_alloc" },
	{ 0xfe48351d, "nf_ct_expect_related_report" },
	{ 0xec60895d, "nf_conntrack_helpers_unregister" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xf52500d1, "__nf_ct_expect_find" },
	{ 0x9adb7399, "nf_conntrack_expect_lock" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd088945b, "nf_ct_helper_log" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x39e703dd, "__nf_ip6_route" },
	{ 0x37a0cba, "kfree" },
	{ 0x1e0a0c24, "mod_timer_pending" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x5cb6526b, "skb_copy_bits" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "C292425222D18F78A61B343");
