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
	{ 0xa4eca5e, "nf_flow_table_free" },
	{ 0xf0fb6134, "nf_flow_table_init" },
	{ 0xcdac5b09, "nft_unregister_flowtable_type" },
	{ 0xd7fac950, "nft_register_flowtable_type" },
	{ 0xd9cb392f, "nf_flow_offload_ip_hook" },
	{ 0xcab3b87b, "nf_flow_offload_ipv6_hook" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_flow_table,nf_tables");


MODULE_INFO(srcversion, "4F3F399EBCBD1B0562184CC");
