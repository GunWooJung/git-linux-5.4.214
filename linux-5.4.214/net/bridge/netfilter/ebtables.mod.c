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
	{ 0xc8dbe1c6, "xt_unregister_target" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xa7c94f1d, "xt_compat_lock" },
	{ 0x754d539c, "strlen" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xa34fbf6a, "xt_check_target" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x56e636bc, "xt_compat_match_offset" },
	{ 0xa1f9a134, "__x86_indirect_thunk_rsi" },
	{ 0x56470118, "__warn_printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xb75eee4, "xt_compat_target_offset" },
	{ 0x7bce4603, "xt_data_to_user" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xdd64e639, "strscpy" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xfb578fc5, "memset" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xd38cd261, "__default_kernel_pte_mask" },
	{ 0xb44e18ea, "audit_enabled" },
	{ 0xaf7d0f48, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0xc09e8ca4, "nf_unregister_net_hooks" },
	{ 0xe0e3cea6, "ns_capable" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x4e27719, "xt_compat_flush_offsets" },
	{ 0xc7fae024, "xt_compat_calc_jump" },
	{ 0xa8ae0069, "xt_register_target" },
	{ 0x50873741, "xt_compat_init_offsets" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdf46d4f1, "module_put" },
	{ 0x823edea5, "xt_compat_add_offset" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xdeb0eda5, "nf_register_net_hooks" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xcf781161, "nf_unregister_sockopt" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4bc663c2, "xt_request_find_match" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd0bd942, "xt_request_find_target" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x7812c047, "__vmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x88e97daf, "xt_check_match" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x3e70fa2a, "audit_log" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xc79fbd0a, "nf_register_sockopt" },
	{ 0x8c70f14a, "xt_find_match" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xd1e246a2, "xt_compat_unlock" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6d71399f, "try_module_get" },
	{ 0x8a35b432, "sme_me_mask" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "726429E2C5D44AA23360CC6");
