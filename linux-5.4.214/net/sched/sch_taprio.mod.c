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
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x421f3622, "dev_activate" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x9ce27aaf, "qdisc_reset" },
	{ 0xb4ff6bb6, "hrtimer_active" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xa7ecb10b, "__qdisc_calculate_pkt_len" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0x2b346870, "netdev_set_num_tc" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x7b5f6776, "register_qdisc" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x6d6fec1f, "ktime_mono_to_any" },
	{ 0x549eb2bf, "netdev_reset_tc" },
	{ 0xad2687bf, "gnet_stats_copy_basic" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x21d3b421, "__dynamic_netdev_dbg" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x2f463baa, "pfifo_qdisc_ops" },
	{ 0xb55fb344, "netdev_set_tc_queue" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x204093fa, "qdisc_hash_add" },
	{ 0xfbdfc558, "hrtimer_start_range_ns" },
	{ 0xa743d636, "qdisc_put" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xfd3d2b80, "__ethtool_get_link_ksettings" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xc32c6d09, "qdisc_create_dflt" },
	{ 0x9b0943a2, "unregister_qdisc" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x9686a901, "dev_deactivate" },
	{ 0x37a0cba, "kfree" },
	{ 0x1ee7d3cd, "hrtimer_init" },
	{ 0x6f18b0e3, "nla_put_64bit" },
	{ 0x88aa7cc9, "__netif_schedule" },
	{ 0x71332fd1, "gnet_stats_copy_queue" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x5cb6526b, "skb_copy_bits" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "530720453B9777D498751DF");
