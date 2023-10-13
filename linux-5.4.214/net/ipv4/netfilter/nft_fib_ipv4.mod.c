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
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x675bf392, "__fib_lookup" },
	{ 0xeb3a2dd6, "nft_register_expr" },
	{ 0xe9f578dc, "inet_dev_addr_type" },
	{ 0xe90a3d49, "nft_fib_validate" },
	{ 0x7848f8c3, "nft_fib_store_result" },
	{ 0xd94ec583, "nft_unregister_expr" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x76bb2efb, "fib_info_nh_uses_dev" },
	{ 0x861b0928, "nft_fib_init" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x70be2030, "fib_table_lookup" },
	{ 0x6d5bf833, "nft_fib_policy" },
	{ 0x76cba047, "nft_fib_dump" },
	{ 0x5cb6526b, "skb_copy_bits" },
};

MODULE_INFO(depends, "nf_tables,nft_fib");


MODULE_INFO(srcversion, "210EF046EC2824F4622D288");
