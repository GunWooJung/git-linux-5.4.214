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
	{ 0x820db7ec, "eth_mac_addr" },
	{ 0x337f2432, "l2tp_nl_unregister_ops" },
	{ 0xc5850110, "printk" },
	{ 0x75d272e0, "l2tp_nl_register_ops" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3fc0cd11, "l2tp_session_delete" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x286f9614, "l2tp_session_free" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x37a0cba, "kfree" },
	{ 0x6f395e65, "__module_get" },
	{ 0x5792f848, "strlcpy" },
	{ 0x958767a4, "register_netdevice" },
	{ 0xff3829ba, "l2tp_session_register" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa0554d18, "release_sock" },
	{ 0x4b3dfb19, "kernel_sock_ip_overhead" },
	{ 0x5c05256a, "lock_sock_nested" },
	{ 0xc6fb8710, "alloc_netdev_mqs" },
	{ 0x3d4363d0, "l2tp_session_create" },
	{ 0x754d539c, "strlen" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x5c3a332e, "__skb_ext_del" },
	{ 0x90a69765, "__pskb_pull_tail" },
	{ 0x73588f11, "dst_release" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0xeecc3d39, "dev_forward_skb" },
	{ 0xd4292f0b, "l2tp_xmit_skb" },
	{ 0xdf46d4f1, "module_put" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x4aebfc6b, "unregister_netdevice_queue" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xf0fa7dc3, "ether_setup" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "l2tp_netlink,l2tp_core");


MODULE_INFO(srcversion, "52DA3923CA63FF798CEC380");
