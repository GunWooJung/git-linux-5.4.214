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
	{ 0x9661e3d, "nf_log_unregister" },
	{ 0xc21708cd, "unregister_pernet_subsys" },
	{ 0xdf54a8f7, "netlink_unregister_notifier" },
	{ 0x14321947, "nfnetlink_subsys_unregister" },
	{ 0x13ca9087, "nf_log_register" },
	{ 0xe74a2c27, "nfnetlink_subsys_register" },
	{ 0xfa599bb2, "netlink_register_notifier" },
	{ 0x1709a80e, "register_pernet_subsys" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xc5850110, "printk" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x7e3c9fe2, "from_kgid_munged" },
	{ 0xee2730b2, "from_kuid_munged" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x24d273d1, "add_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5cb6526b, "skb_copy_bits" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x754d539c, "strlen" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x6d71399f, "try_module_get" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x5ce3b588, "nfnl_lock" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xdb065657, "nfnl_unlock" },
	{ 0xe40db6a6, "nf_log_bind_pf" },
	{ 0xc6afd85d, "nfnl_ct_hook" },
	{ 0x4a12f87a, "nf_log_unbind_pf" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe1ddc39c, "__put_net" },
	{ 0xdf46d4f1, "module_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x56470118, "__warn_printk" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x8b6287ed, "nfnetlink_unicast" },
	{ 0xa6884eab, "__nlmsg_put" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0xa7264a47, "proc_set_user" },
	{ 0x132d1553, "make_kgid" },
	{ 0x8de894fe, "make_kuid" },
	{ 0xf4d0b8fb, "proc_create_net_data" },
	{ 0x518051d9, "nf_log_unset" },
	{ 0xcbaa4b74, "remove_proc_entry" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nfnetlink");


MODULE_INFO(srcversion, "16E629577A87B875343E9D4");
