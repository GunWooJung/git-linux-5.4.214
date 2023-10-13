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
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x754d539c, "strlen" },
	{ 0x5449a062, "dev_get_by_index_rcu" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x3e817db3, "__skb_get_hash" },
	{ 0x37a0cba, "kfree" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf1e98c74, "avenrun" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "79035C675A20F1D5778BB73");
