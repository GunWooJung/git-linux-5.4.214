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
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x7e67a0ab, "llc_sap_open" },
	{ 0xf9c3de14, "llc_sap_close" },
};

MODULE_INFO(depends, "llc");


MODULE_INFO(srcversion, "6AEBB72A8A6FF2BF9226E29");
