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
	{ 0x765395c3, "param_ops_int" },
	{ 0x9b0943a2, "unregister_qdisc" },
	{ 0x7b5f6776, "register_qdisc" },
	{ 0xa7ecb10b, "__qdisc_calculate_pkt_len" },
	{ 0x5dab054b, "tcf_classify" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x204093fa, "qdisc_hash_add" },
	{ 0xc4212ab9, "qdisc_class_hash_insert" },
	{ 0xbac58131, "gen_new_estimator" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xbdd682f7, "qdisc_class_hash_grow" },
	{ 0xa61ced89, "qdisc_put_rtab" },
	{ 0xd042475c, "qdisc_get_rtab" },
	{ 0xb6e36ce2, "psched_ratecfg_precompute" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x37a1909f, "gen_replace_estimator" },
	{ 0x7020e465, "noop_qdisc" },
	{ 0x91a7b1da, "qdisc_class_hash_remove" },
	{ 0xc32c6d09, "qdisc_create_dflt" },
	{ 0x2f463baa, "pfifo_qdisc_ops" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x7bac38af, "qdisc_tree_reduce_backlog" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xc5850110, "printk" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xcc01a2ae, "qdisc_warn_nonwc" },
	{ 0xff6548d5, "qdisc_watchdog_schedule_ns" },
	{ 0xece784c2, "rb_first" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xe9d69c26, "gnet_stats_copy_app" },
	{ 0x71332fd1, "gnet_stats_copy_queue" },
	{ 0xf4124900, "gnet_stats_copy_rate_est" },
	{ 0xad2687bf, "gnet_stats_copy_basic" },
	{ 0x10c3f57e, "__gnet_stats_copy_queue" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0xf53d4c26, "qdisc_class_hash_destroy" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0x6f18b0e3, "nla_put_64bit" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x37a0cba, "kfree" },
	{ 0x4c008345, "tcf_block_put" },
	{ 0xded39a6b, "gen_kill_estimator" },
	{ 0xa743d636, "qdisc_put" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x56470118, "__warn_printk" },
	{ 0x2c20c9dd, "rtnl_kfree_skbs" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x83b3c2bd, "qdisc_watchdog_cancel" },
	{ 0x9ce27aaf, "qdisc_reset" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xca9360b5, "rb_next" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x117093be, "qdisc_class_hash_init" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x66e83557, "tcf_block_get" },
	{ 0xd5c5eac1, "qdisc_watchdog_init" },
	{ 0x88aa7cc9, "__netif_schedule" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1B93A428CA6D03CDE9F4471");
