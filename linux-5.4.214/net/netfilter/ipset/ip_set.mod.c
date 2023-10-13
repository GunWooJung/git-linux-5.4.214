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
	{ 0x609f1c7e, "synchronize_net" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x754d539c, "strlen" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5ce3b588, "nfnl_lock" },
	{ 0x999e8297, "vfree" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xdd64e639, "strscpy" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0x14321947, "nfnetlink_subsys_unregister" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xc21708cd, "unregister_pernet_subsys" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xc5850110, "printk" },
	{ 0xdb065657, "nfnl_unlock" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xe0e3cea6, "ns_capable" },
	{ 0x9166fada, "strncpy" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x5a921311, "strncmp" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8f4f774, "netlink_unicast" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdf46d4f1, "module_put" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0xb71cf1a4, "ipv6_skip_exthdr" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xcf781161, "nf_unregister_sockopt" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1709a80e, "register_pernet_subsys" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xab3ce9ef, "netlink_ack" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xe74a2c27, "nfnetlink_subsys_register" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x6f18b0e3, "nla_put_64bit" },
	{ 0xc79fbd0a, "nf_register_sockopt" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xa6884eab, "__nlmsg_put" },
	{ 0x5cb6526b, "skb_copy_bits" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6d71399f, "try_module_get" },
	{ 0xfe87cdd0, "__netlink_dump_start" },
};

MODULE_INFO(depends, "nfnetlink");


MODULE_INFO(srcversion, "A6817DBFB22AA1F2D0D4F2A");
