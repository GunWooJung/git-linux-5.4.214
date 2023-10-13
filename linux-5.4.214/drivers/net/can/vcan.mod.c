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
	{ 0x68a41536, "param_ops_bool" },
	{ 0x1e8aee9f, "rtnl_link_unregister" },
	{ 0xa4f157b5, "rtnl_link_register" },
	{ 0xc5850110, "printk" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x50087170, "netif_rx_ni" },
	{ 0xba2c8b02, "sock_efree" },
	{ 0x30313dd3, "skb_clone" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0xad263612, "consume_skb" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x56470118, "__warn_printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "ED5CA7CD3D534AA7353FEDC");
