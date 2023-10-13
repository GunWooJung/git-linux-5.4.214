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
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xad263612, "consume_skb" },
	{ 0x564c202f, "skb_realloc_headroom" },
	{ 0xd523d85d, "skb_push" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x541c669c, "sockfd_lookup" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x56470118, "__warn_printk" },
	{ 0x71332fd1, "gnet_stats_copy_queue" },
	{ 0xad2687bf, "gnet_stats_copy_basic" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xa7ecb10b, "__qdisc_calculate_pkt_len" },
	{ 0x5dab054b, "tcf_classify" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x66e83557, "tcf_block_get" },
	{ 0xc32c6d09, "qdisc_create_dflt" },
	{ 0x2f463baa, "pfifo_qdisc_ops" },
	{ 0x7020e465, "noop_qdisc" },
	{ 0x9ce27aaf, "qdisc_reset" },
	{ 0xc5850110, "printk" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x37a0cba, "kfree" },
	{ 0xca669996, "fput" },
	{ 0x4c008345, "tcf_block_put" },
	{ 0xa743d636, "qdisc_put" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "2BD3335AB38A47572A1DEDE");
