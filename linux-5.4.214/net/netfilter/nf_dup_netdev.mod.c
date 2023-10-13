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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0x30313dd3, "skb_clone" },
	{ 0xd523d85d, "skb_push" },
	{ 0x5449a062, "dev_get_by_index_rcu" },
	{ 0xdf0ff0cf, "dev_get_by_index" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xba505b9b, "dev_queue_xmit" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "9D21C82C13EFD1DB21EC266");
