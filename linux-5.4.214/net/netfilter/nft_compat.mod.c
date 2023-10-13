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
	{ 0xd94ec583, "nft_unregister_expr" },
	{ 0xe74a2c27, "nfnetlink_subsys_register" },
	{ 0xeb3a2dd6, "nft_register_expr" },
	{ 0x4bc663c2, "xt_request_find_match" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xd0bd942, "xt_request_find_target" },
	{ 0xc5850110, "printk" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x8f4f774, "netlink_unicast" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x754d539c, "strlen" },
	{ 0xa6884eab, "__nlmsg_put" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0xddf68fc6, "xt_find_revision" },
	{ 0x6d71399f, "try_module_get" },
	{ 0x8e281574, "nla_reserve" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x88e97daf, "xt_check_match" },
	{ 0xa34fbf6a, "xt_check_target" },
	{ 0x3251d762, "nf_tables_trans_destroy_flush_work" },
	{ 0xfb578fc5, "memset" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x37a0cba, "kfree" },
	{ 0xdf46d4f1, "module_put" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nfnetlink,nf_tables,x_tables");


MODULE_INFO(srcversion, "32835B57FACF9B062F8A59E");
