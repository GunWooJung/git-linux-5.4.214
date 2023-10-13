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
	{ 0x92a881bb, "kmem_cache_destroy" },
	{ 0x7b5f6776, "register_qdisc" },
	{ 0x51624e26, "kmem_cache_create" },
	{ 0xdb12bd3, "qdisc_watchdog_init_clockid" },
	{ 0xc5850110, "printk" },
	{ 0x7bac38af, "qdisc_tree_reduce_backlog" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x56470118, "__warn_printk" },
	{ 0xe9d69c26, "gnet_stats_copy_app" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xff6548d5, "qdisc_watchdog_schedule_ns" },
	{ 0x5cb6526b, "skb_copy_bits" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x3e817db3, "__skb_get_hash" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7ccefd28, "kmem_cache_alloc" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x83b3c2bd, "qdisc_watchdog_cancel" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xb566a6c3, "kmem_cache_free" },
	{ 0x2c20c9dd, "rtnl_kfree_skbs" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xca9360b5, "rb_next" },
	{ 0xece784c2, "rb_first" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "ED6ADC696180845D6B40682");
