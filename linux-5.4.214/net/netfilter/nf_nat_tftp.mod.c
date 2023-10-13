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
	{ 0xfbb42f00, "nf_nat_helper_register" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xcfc2d1dd, "nf_nat_tftp_hook" },
	{ 0x428c961d, "nf_nat_helper_unregister" },
	{ 0xd088945b, "nf_ct_helper_log" },
	{ 0xfe48351d, "nf_ct_expect_related_report" },
	{ 0x1564c32f, "nf_nat_follow_master" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_conntrack,nf_conntrack_tftp,nf_nat");


MODULE_INFO(srcversion, "91802A9EAAF9EA64CDC6C90");
