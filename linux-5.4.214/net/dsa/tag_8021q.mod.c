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
	{ 0x53f6f97d, "dsa_tag_drivers_register" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0x4a75ed2d, "dsa_tag_drivers_unregister" },
	{ 0x57e07993, "dsa_port_vid_add" },
	{ 0x81dde400, "dsa_port_vid_del" },
	{ 0xc0a7923c, "br_vlan_get_pvid" },
	{ 0xefac6951, "br_vlan_get_info" },
	{ 0xd523d85d, "skb_push" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xcfb5d782, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb0e602eb, "memmove" },
};

MODULE_INFO(depends, "dsa_core,bridge");


MODULE_INFO(srcversion, "68C878645295E445E2E6BB8");
