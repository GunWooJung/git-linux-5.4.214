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
	{ 0x22b1cb21, "nf_ct_expect_put" },
	{ 0x575e0d21, "nf_ct_expect_alloc" },
	{ 0xfe48351d, "nf_ct_expect_related_report" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "5DD9CACE7B3BCCB76607006");
