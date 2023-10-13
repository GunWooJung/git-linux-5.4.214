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
	{ 0xe1b80f1a, "neigh_lookup" },
	{ 0x3d47a9f7, "inet_frag_kill" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xc57c6d80, "unregister_net_sysctl_table" },
	{ 0x73588f11, "dst_release" },
	{ 0x30313dd3, "skb_clone" },
	{ 0x5a955fde, "skb_copy" },
	{ 0xe04f838c, "lowpan_header_compress" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xd4ce891e, "init_user_ns" },
	{ 0xe717b7e6, "neigh_destroy" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x1fe90d13, "fqdir_exit" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x721469b0, "inet_frag_find" },
	{ 0x2ce0a2a0, "inet_frag_reasm_prepare" },
	{ 0x63616516, "netif_rx" },
	{ 0x90a69765, "__pskb_pull_tail" },
	{ 0xc21708cd, "unregister_pernet_subsys" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xec2e1c8f, "proc_doulongvec_minmax" },
	{ 0xcc94a2c1, "inet_frags_fini" },
	{ 0xea2ee738, "ieee802154_hdr_peek" },
	{ 0xdf0ff0cf, "dev_get_by_index" },
	{ 0xd8f73fc4, "dev_remove_pack" },
	{ 0x3c2ef1a4, "nd_tbl" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x721c9d1f, "init_net" },
	{ 0x1e8aee9f, "rtnl_link_unregister" },
	{ 0xa06cefdf, "lowpan_header_decompress" },
	{ 0x4561a008, "fqdir_init" },
	{ 0xf8e4e17a, "skb_copy_expand" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0xc9abc0b0, "inet_frag_reasm_finish" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0xf0a51f94, "inet_frag_destroy" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x8abfd627, "lowpan_unregister_netdevice" },
	{ 0x1709a80e, "register_pernet_subsys" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xeacd037, "ieee802154_hdr_peek_addrs" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa4f157b5, "rtnl_link_register" },
	{ 0xfc1b095b, "lowpan_register_netdevice" },
	{ 0xf3476635, "inet_frags_init" },
	{ 0xee02e2fe, "inet_frag_queue_insert" },
	{ 0x81f944be, "dev_add_pack" },
	{ 0xad263612, "consume_skb" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0xba505b9b, "dev_queue_xmit" },
	{ 0xecee4256, "register_net_sysctl" },
	{ 0xf89bc02c, "skb_put" },
	{ 0xdf6b082f, "proc_dointvec_jiffies" },
	{ 0x87e2553b, "ieee802154_max_payload" },
};

MODULE_INFO(depends, "6lowpan,ieee802154");


MODULE_INFO(srcversion, "CA07D658CDB046FA03041C1");
