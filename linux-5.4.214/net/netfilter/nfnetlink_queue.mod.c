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
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xc21708cd, "unregister_pernet_subsys" },
	{ 0xdf54a8f7, "netlink_unregister_notifier" },
	{ 0x14321947, "nfnetlink_subsys_unregister" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xe74a2c27, "nfnetlink_subsys_register" },
	{ 0xfa599bb2, "netlink_register_notifier" },
	{ 0x1709a80e, "register_pernet_subsys" },
	{ 0x6d71399f, "try_module_get" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x5ce3b588, "nfnl_lock" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xdb065657, "nfnl_unlock" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xaa0d801f, "nf_queue_entry_release_refs" },
	{ 0xfa09e358, "nf_queue_entry_get_refs" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x245ee8f5, "__skb_gso_segment" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xf44d53da, "security_secid_to_secctx" },
	{ 0xc5850110, "printk" },
	{ 0x8b6287ed, "nfnetlink_unicast" },
	{ 0x1e1e140e, "ns_to_timespec64" },
	{ 0x652900ee, "skb_checksum_help" },
	{ 0x89f5f5ef, "skb_zerocopy" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x7e3c9fe2, "from_kgid_munged" },
	{ 0xee2730b2, "from_kuid_munged" },
	{ 0xd4ce891e, "init_user_ns" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0x9e425a7a, "skb_zerocopy_headlen" },
	{ 0xed61f6b3, "security_release_secctx" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x81fb30f, "skb_tx_error" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x924a79fd, "__nla_reserve" },
	{ 0xa6884eab, "__nlmsg_put" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0xd9117c75, "nf_register_queue_handler" },
	{ 0xf4d0b8fb, "proc_create_net_data" },
	{ 0xcbaa4b74, "remove_proc_entry" },
	{ 0x90a4ee9c, "nf_unregister_queue_handler" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xeb376667, "___pskb_trim" },
	{ 0xf89bc02c, "skb_put" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0xf8e4e17a, "skb_copy_expand" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x69acdf38, "memcpy" },
	{ 0x38129556, "skb_ensure_writable" },
	{ 0xc6afd85d, "nfnl_ct_hook" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xdf46d4f1, "module_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x482b8bf5, "nf_reinject" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x12a18ae1, "nf_ct_hook" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nfnetlink");


MODULE_INFO(srcversion, "4450517BE5FE8D53DF37686");
