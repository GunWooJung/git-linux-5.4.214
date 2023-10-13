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
	{ 0xbbeb606d, "nft_unregister_obj" },
	{ 0xeb3a2dd6, "nft_register_expr" },
	{ 0x8b325c55, "nft_register_obj" },
	{ 0x5a6cdb52, "nf_ct_zone_dflt" },
	{ 0x3444304f, "nf_ct_get_tuplepr" },
	{ 0xd968efdb, "nf_conncount_add" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xedca43ba, "nf_ct_netns_get" },
	{ 0x8c4cb9c3, "nf_conncount_list_init" },
	{ 0x11f3e50e, "nf_ct_netns_put" },
	{ 0x3ff55ad3, "nf_conncount_cache_free" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xe7473814, "nf_conncount_gc_list" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_tables,nf_conntrack,nf_conncount");


MODULE_INFO(srcversion, "835DB0DCCD719BC43715840");
