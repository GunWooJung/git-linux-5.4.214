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
	{ 0x14321947, "nfnetlink_subsys_unregister" },
	{ 0xc5850110, "printk" },
	{ 0xe74a2c27, "nfnetlink_subsys_register" },
	{ 0xfe87cdd0, "__netlink_dump_start" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x8f4f774, "netlink_unicast" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0x693c3961, "nf_ct_helper_hash" },
	{ 0xc40f284c, "nf_ct_helper_hsize" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0x754d539c, "strlen" },
	{ 0xa6884eab, "__nlmsg_put" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x6bcb4616, "nf_conntrack_helper_register" },
	{ 0x6b640864, "nla_strlcpy" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xedbaee5e, "nla_strcmp" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x3230444a, "nf_conntrack_helper_unregister" },
	{ 0xc6f3b3fc, "refcount_dec_if_one" },
	{ 0x5a921311, "strncmp" },
	{ 0xc6cbbc89, "capable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nfnetlink,nf_conntrack");


MODULE_INFO(srcversion, "494B64826EE6B23E8E278DA");
