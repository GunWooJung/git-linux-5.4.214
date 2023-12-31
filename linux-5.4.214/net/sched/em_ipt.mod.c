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
	{ 0x90a69765, "__pskb_pull_tail" },
	{ 0x5cb6526b, "skb_copy_bits" },
	{ 0x5449a062, "dev_get_by_index_rcu" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4bc663c2, "xt_request_find_match" },
	{ 0xedbaee5e, "nla_strcmp" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x754d539c, "strlen" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x88e97daf, "xt_check_match" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x37a0cba, "kfree" },
	{ 0xdf46d4f1, "module_put" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "6ECF0021D6F88661A5317F7");
