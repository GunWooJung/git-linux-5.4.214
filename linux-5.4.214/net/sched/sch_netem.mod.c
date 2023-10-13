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
	{ 0x6f18b0e3, "nla_put_64bit" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x10c3f57e, "__gnet_stats_copy_queue" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xff6548d5, "qdisc_watchdog_schedule_ns" },
	{ 0x19faf0c0, "kfree_skb_list" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x652900ee, "skb_checksum_help" },
	{ 0x5a955fde, "skb_copy" },
	{ 0x5cb6526b, "skb_copy_bits" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0xad263612, "consume_skb" },
	{ 0x245ee8f5, "__skb_gso_segment" },
	{ 0x3337dc15, "netif_skb_features" },
	{ 0x30313dd3, "skb_clone" },
	{ 0x7bac38af, "qdisc_tree_reduce_backlog" },
	{ 0xa7ecb10b, "__qdisc_calculate_pkt_len" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xdf2c2742, "rb_last" },
	{ 0x3d7dedb5, "skb_orphan_partial" },
	{ 0xd5c5eac1, "qdisc_watchdog_init" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa965ca81, "reciprocal_value" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x9ce27aaf, "qdisc_reset" },
	{ 0x2c20c9dd, "rtnl_kfree_skbs" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xca9360b5, "rb_next" },
	{ 0xece784c2, "rb_first" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x56470118, "__warn_printk" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xa743d636, "qdisc_put" },
	{ 0x83b3c2bd, "qdisc_watchdog_cancel" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "353E6FBC58424C42E3CF28B");
