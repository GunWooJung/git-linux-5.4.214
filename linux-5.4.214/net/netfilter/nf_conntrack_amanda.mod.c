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
	{ 0x568789b1, "__nf_ct_refresh_acct" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xedae0d60, "nf_ct_expect_init" },
	{ 0x2eb26c6, "textsearch_prepare" },
	{ 0x5c35bee6, "nf_conntrack_helpers_register" },
	{ 0xce0d7d32, "skb_find_text" },
	{ 0x131e5561, "param_ops_charp" },
	{ 0xc5850110, "printk" },
	{ 0x22b1cb21, "nf_ct_expect_put" },
	{ 0x575e0d21, "nf_ct_expect_alloc" },
	{ 0xfe48351d, "nf_ct_expect_related_report" },
	{ 0xec60895d, "nf_conntrack_helpers_unregister" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd088945b, "nf_ct_helper_log" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8ed6d396, "textsearch_destroy" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x5cb6526b, "skb_copy_bits" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "A89D4B0A487F3A07F03BA33");
