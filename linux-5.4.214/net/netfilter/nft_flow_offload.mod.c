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
	{ 0xd94ec583, "nft_unregister_expr" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xeb3a2dd6, "nft_register_expr" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x9d7c9ac2, "flow_offload_free" },
	{ 0x5cb6526b, "skb_copy_bits" },
	{ 0x73588f11, "dst_release" },
	{ 0x63e26a4e, "flow_offload_add" },
	{ 0xf1b4ac0e, "flow_offload_alloc" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x754d539c, "strlen" },
	{ 0xa754a295, "nf_flow_table_cleanup" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x87e99063, "nf_route" },
	{ 0xedca43ba, "nf_ct_netns_get" },
	{ 0x69543a6b, "nft_flowtable_lookup" },
	{ 0xb931bc02, "nf_tables_deactivate_flowtable" },
	{ 0x11f3e50e, "nf_ct_netns_put" },
	{ 0x4c26b4c, "nft_chain_validate_hooks" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_tables,nf_flow_table,nf_conntrack");


MODULE_INFO(srcversion, "88C06D6C0BB9E9280D21213");
