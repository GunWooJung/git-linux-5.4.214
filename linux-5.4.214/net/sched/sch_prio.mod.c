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
	{ 0x66e83557, "tcf_block_get" },
	{ 0x7020e465, "noop_qdisc" },
	{ 0x204093fa, "qdisc_hash_add" },
	{ 0xc32c6d09, "qdisc_create_dflt" },
	{ 0x2f463baa, "pfifo_qdisc_ops" },
	{ 0x5046f60a, "qdisc_offload_graft_helper" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x7bac38af, "qdisc_tree_reduce_backlog" },
	{ 0x10c3f57e, "__gnet_stats_copy_queue" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x56470118, "__warn_printk" },
	{ 0x71332fd1, "gnet_stats_copy_queue" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xad2687bf, "gnet_stats_copy_basic" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x5dab054b, "tcf_classify" },
	{ 0xa7ecb10b, "__qdisc_calculate_pkt_len" },
	{ 0x9ce27aaf, "qdisc_reset" },
	{ 0xa743d636, "qdisc_put" },
	{ 0x4c008345, "tcf_block_put" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xade0a471, "qdisc_offload_dump_helper" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D43D32B3F11B73E0A761B89");
