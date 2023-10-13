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
	{ 0xbfe6032, "ipv6_chk_addr" },
	{ 0x73588f11, "dst_release" },
	{ 0xeb3a2dd6, "nft_register_expr" },
	{ 0xe90a3d49, "nft_fib_validate" },
	{ 0x7848f8c3, "nft_fib_store_result" },
	{ 0xd94ec583, "nft_unregister_expr" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x992f300, "ip6_route_lookup" },
	{ 0x861b0928, "nft_fib_init" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x39e703dd, "__nf_ip6_route" },
	{ 0x6d5bf833, "nft_fib_policy" },
	{ 0x76cba047, "nft_fib_dump" },
	{ 0x5cb6526b, "skb_copy_bits" },
	{ 0xd542439, "__ipv6_addr_type" },
};

MODULE_INFO(depends, "nf_tables,nft_fib");


MODULE_INFO(srcversion, "4913CECBDD4FE4DCF997055");
