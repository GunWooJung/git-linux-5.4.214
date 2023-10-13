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
	{ 0x9b0943a2, "unregister_qdisc" },
	{ 0x7b5f6776, "register_qdisc" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x66e83557, "tcf_block_get" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x5cb6526b, "skb_copy_bits" },
	{ 0x71332fd1, "gnet_stats_copy_queue" },
	{ 0x56470118, "__warn_printk" },
	{ 0xe9d69c26, "gnet_stats_copy_app" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3e817db3, "__skb_get_hash" },
	{ 0x7bac38af, "qdisc_tree_reduce_backlog" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x5dab054b, "tcf_classify" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0xfb578fc5, "memset" },
	{ 0x2c20c9dd, "rtnl_kfree_skbs" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x4c008345, "tcf_block_put" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "37ADF19E36580FD09E444FF");
