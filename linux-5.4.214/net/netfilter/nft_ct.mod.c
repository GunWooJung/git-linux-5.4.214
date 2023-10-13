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
	{ 0xd94ec583, "nft_unregister_expr" },
	{ 0xbbeb606d, "nft_unregister_obj" },
	{ 0x8b325c55, "nft_register_obj" },
	{ 0xeb3a2dd6, "nft_register_expr" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1c368756, "nf_ct_l4proto_find" },
	{ 0xe616de5b, "nf_connlabels_replace" },
	{ 0x754d539c, "strlen" },
	{ 0x721c9d1f, "init_net" },
	{ 0x3a23d32d, "nf_connlabels_put" },
	{ 0x87098f51, "nf_connlabels_get" },
	{ 0x85430a76, "nft_validate_register_load" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x9166fada, "strncpy" },
	{ 0x98d3f4ca, "nf_ct_get_id" },
	{ 0xe7dc3153, "nft_validate_register_store" },
	{ 0x1e6b75a3, "nft_parse_register" },
	{ 0x9193d81d, "nf_ct_tmpl_alloc" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xc16f4eb8, "nft_dump_register" },
	{ 0x3411866d, "nf_conntrack_helper_try_module_get" },
	{ 0x6b640864, "nla_strlcpy" },
	{ 0xe64adcb0, "nf_conntrack_helper_put" },
	{ 0xfe48351d, "nf_ct_expect_related_report" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xedae0d60, "nf_ct_expect_init" },
	{ 0x575e0d21, "nf_ct_expect_alloc" },
	{ 0x1e26d86f, "nf_ct_helper_ext_add" },
	{ 0x568789b1, "__nf_ct_refresh_acct" },
	{ 0x5a513ff0, "nf_ct_ext_add" },
	{ 0xedca43ba, "nf_ct_netns_get" },
	{ 0x37a0cba, "kfree" },
	{ 0x3c25c80, "nf_ct_untimeout" },
	{ 0x11f3e50e, "nf_ct_netns_put" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_tables,nf_conntrack");


MODULE_INFO(srcversion, "130C572EF9E2438C4A53AAC");
