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
	{ 0x6bcb4616, "nf_conntrack_helper_register" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x65a8d828, "nf_ct_gre_keymap_add" },
	{ 0x3230444a, "nf_conntrack_helper_unregister" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xedae0d60, "nf_ct_expect_init" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x5d9aa56a, "nf_ct_delete" },
	{ 0xfe731af8, "nf_ct_invert_tuple" },
	{ 0xc8cee509, "nf_ct_expect_find_get" },
	{ 0x22b1cb21, "nf_ct_expect_put" },
	{ 0x575e0d21, "nf_ct_expect_alloc" },
	{ 0xfe48351d, "nf_ct_expect_related_report" },
	{ 0x6d9512d3, "nf_ct_gre_keymap_destroy" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x5cb6526b, "skb_copy_bits" },
	{ 0x90b6955d, "nf_conntrack_find_get" },
	{ 0x5a513ff0, "nf_ct_ext_add" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "7C55659ED6D05BA2012939A");
