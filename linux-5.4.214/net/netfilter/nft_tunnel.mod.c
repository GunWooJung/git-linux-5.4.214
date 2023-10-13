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
	{ 0xbbeb606d, "nft_unregister_obj" },
	{ 0xd94ec583, "nft_unregister_expr" },
	{ 0x8b325c55, "nft_register_obj" },
	{ 0xeb3a2dd6, "nft_register_expr" },
	{ 0x69acdf38, "memcpy" },
	{ 0xae39f80e, "dst_cache_init" },
	{ 0xe8b21f69, "metadata_dst_alloc" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xe7dc3153, "nft_validate_register_store" },
	{ 0x1e6b75a3, "nft_parse_register" },
	{ 0xc16f4eb8, "nft_dump_register" },
	{ 0x73588f11, "dst_release" },
	{ 0xaff462b2, "metadata_dst_free" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_tables");


MODULE_INFO(srcversion, "1ED08429E1C6F5C2D648724");
