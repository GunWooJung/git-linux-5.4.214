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
	{ 0x5170e7f3, "nft_meta_policy" },
	{ 0x243e3d87, "nft_meta_get_dump" },
	{ 0x31b90808, "nft_meta_set_validate" },
	{ 0xcbabf685, "nft_meta_set_dump" },
	{ 0x766f5090, "nft_meta_set_destroy" },
	{ 0xae29b2bf, "nft_meta_set_init" },
	{ 0x74e5bc9, "nft_meta_set_eval" },
	{ 0xd94ec583, "nft_unregister_expr" },
	{ 0xeb3a2dd6, "nft_register_expr" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1ae7caac, "br_vlan_get_pvid_rcu" },
	{ 0xb9601b8f, "nft_meta_get_eval" },
	{ 0x661722ba, "br_vlan_get_proto" },
	{ 0xb45a04c8, "br_vlan_enabled" },
	{ 0x9166fada, "strncpy" },
	{ 0x9ec657f8, "netdev_master_upper_dev_get_rcu" },
	{ 0x7fa982c6, "nft_meta_get_init" },
	{ 0xe7dc3153, "nft_validate_register_store" },
	{ 0x1e6b75a3, "nft_parse_register" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_tables,bridge");


MODULE_INFO(srcversion, "F61D317F57AF807E1DA077A");
