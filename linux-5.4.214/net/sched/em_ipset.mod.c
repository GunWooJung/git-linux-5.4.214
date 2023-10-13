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
	{ 0x5a82b555, "tcf_em_unregister" },
	{ 0x12594994, "tcf_em_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x90a69765, "__pskb_pull_tail" },
	{ 0x5449a062, "dev_get_by_index_rcu" },
	{ 0xd523d85d, "skb_push" },
	{ 0x278000ee, "ip_set_test" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x5cb6526b, "skb_copy_bits" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x8c93c093, "ip_set_nfnl_get_byindex" },
	{ 0x37a0cba, "kfree" },
	{ 0xc0816b1f, "ip_set_nfnl_put" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ip_set");


MODULE_INFO(srcversion, "2FFEEF47248D946AED3F588");
