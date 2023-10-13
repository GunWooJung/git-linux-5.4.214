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
	{ 0x6d5bf833, "nft_fib_policy" },
	{ 0xe90a3d49, "nft_fib_validate" },
	{ 0x76cba047, "nft_fib_dump" },
	{ 0x861b0928, "nft_fib_init" },
	{ 0xd94ec583, "nft_unregister_expr" },
	{ 0xeb3a2dd6, "nft_register_expr" },
	{ 0x8d7699f2, "nft_fib4_eval" },
	{ 0x566642db, "nft_fib4_eval_type" },
	{ 0x59bd931d, "nft_fib6_eval" },
	{ 0x691cea50, "nft_fib6_eval_type" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nft_fib,nf_tables,nft_fib_ipv4,nft_fib_ipv6");


MODULE_INFO(srcversion, "350E00808C8FEFD3BC47CC1");
