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
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x14321947, "nfnetlink_subsys_unregister" },
	{ 0xbad275c6, "nf_ct_timeout_put_hook" },
	{ 0x56bf59ba, "nf_ct_timeout_find_get_hook" },
	{ 0xc21708cd, "unregister_pernet_subsys" },
	{ 0xc5850110, "printk" },
	{ 0xe74a2c27, "nfnetlink_subsys_register" },
	{ 0x1709a80e, "register_pernet_subsys" },
	{ 0xe914e41e, "strcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xfe87cdd0, "__netlink_dump_start" },
	{ 0x754d539c, "strlen" },
	{ 0x153d61b6, "nf_ct_unconfirmed_destroy" },
	{ 0x6d71399f, "try_module_get" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdf46d4f1, "module_put" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0x8f4f774, "netlink_unicast" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xa6884eab, "__nlmsg_put" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0x1c368756, "nf_ct_l4proto_find" },
	{ 0x5a921311, "strncmp" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x3c25c80, "nf_ct_untimeout" },
	{ 0xc6f3b3fc, "refcount_dec_if_one" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nfnetlink,nf_conntrack");


MODULE_INFO(srcversion, "8B19AED98C2F1601876E665");
