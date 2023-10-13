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
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x754d539c, "strlen" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0x14321947, "nfnetlink_subsys_unregister" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xc21708cd, "unregister_pernet_subsys" },
	{ 0xc5850110, "printk" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x5a921311, "strncmp" },
	{ 0x8f4f774, "netlink_unicast" },
	{ 0xc6f3b3fc, "refcount_dec_if_one" },
	{ 0xdf46d4f1, "module_put" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0x2940585f, "netlink_broadcast" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x1709a80e, "register_pernet_subsys" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xe74a2c27, "nfnetlink_subsys_register" },
	{ 0x37a0cba, "kfree" },
	{ 0x6b640864, "nla_strlcpy" },
	{ 0x6f18b0e3, "nla_put_64bit" },
	{ 0xa6884eab, "__nlmsg_put" },
	{ 0x6d71399f, "try_module_get" },
	{ 0xfe87cdd0, "__netlink_dump_start" },
};

MODULE_INFO(depends, "nfnetlink");


MODULE_INFO(srcversion, "C38EEB634016DCC446DE405");
