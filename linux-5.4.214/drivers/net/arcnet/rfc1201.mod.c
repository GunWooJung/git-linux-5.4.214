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
	{ 0x6bd24b88, "arcnet_unregister_proto" },
	{ 0xb88314a4, "arc_proto_map" },
	{ 0x615c0c43, "arc_bcast_proto" },
	{ 0x81ac939c, "arc_proto_default" },
	{ 0xc5850110, "printk" },
	{ 0xeb1919a4, "netdev_info" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x63616516, "netif_rx" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0x8e0ddd54, "__dev_kfree_skb_irq" },
	{ 0xbed6138e, "skb_pull" },
	{ 0xe8b1a3d2, "netdev_warn" },
	{ 0x6534792a, "arcnet_debug" },
	{ 0xd523d85d, "skb_push" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "arcnet");


MODULE_INFO(srcversion, "1877350E7B07EE4DA17279E");
