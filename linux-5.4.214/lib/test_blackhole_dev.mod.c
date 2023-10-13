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
	{ 0xc5850110, "printk" },
	{ 0xba505b9b, "dev_queue_xmit" },
	{ 0xb0a75812, "blackhole_netdev" },
	{ 0x38a9f7c5, "in6addr_loopback" },
	{ 0xd523d85d, "skb_push" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x92f8784b, "__alloc_skb" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B36C41C8F871ED7A9377642");
