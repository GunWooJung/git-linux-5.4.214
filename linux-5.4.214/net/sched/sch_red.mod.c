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
	{ 0x5cb6526b, "skb_copy_bits" },
	{ 0xa7ecb10b, "__qdisc_calculate_pkt_len" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x204093fa, "qdisc_hash_add" },
	{ 0x6ca4c938, "fifo_create_dflt" },
	{ 0x4ec12057, "bfifo_qdisc_ops" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xa965ca81, "reciprocal_value" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x56470118, "__warn_printk" },
	{ 0x5046f60a, "qdisc_offload_graft_helper" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x7bac38af, "qdisc_tree_reduce_backlog" },
	{ 0x10c3f57e, "__gnet_stats_copy_queue" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x7020e465, "noop_qdisc" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x9ce27aaf, "qdisc_reset" },
	{ 0xa743d636, "qdisc_put" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xade0a471, "qdisc_offload_dump_helper" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe9d69c26, "gnet_stats_copy_app" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "3694B3AC82C1FAC42B2E4F3");
