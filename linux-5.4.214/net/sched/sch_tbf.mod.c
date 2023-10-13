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
	{ 0xd5c5eac1, "qdisc_watchdog_init" },
	{ 0xc5850110, "printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x204093fa, "qdisc_hash_add" },
	{ 0x6ca4c938, "fifo_create_dflt" },
	{ 0x4ec12057, "bfifo_qdisc_ops" },
	{ 0xa61ced89, "qdisc_put_rtab" },
	{ 0xd042475c, "qdisc_get_rtab" },
	{ 0xe17d4427, "fifo_set_limit" },
	{ 0xb6e36ce2, "psched_ratecfg_precompute" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xff6548d5, "qdisc_watchdog_schedule_ns" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x56470118, "__warn_printk" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x10c3f57e, "__gnet_stats_copy_queue" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x7020e465, "noop_qdisc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0x6f18b0e3, "nla_put_64bit" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x7bac38af, "qdisc_tree_reduce_backlog" },
	{ 0xad263612, "consume_skb" },
	{ 0xa7ecb10b, "__qdisc_calculate_pkt_len" },
	{ 0x245ee8f5, "__skb_gso_segment" },
	{ 0x3337dc15, "netif_skb_features" },
	{ 0x8fe9c901, "skb_gso_validate_mac_len" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x9ce27aaf, "qdisc_reset" },
	{ 0xa743d636, "qdisc_put" },
	{ 0x83b3c2bd, "qdisc_watchdog_cancel" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "ED74B08E1995D08E04FC909");
