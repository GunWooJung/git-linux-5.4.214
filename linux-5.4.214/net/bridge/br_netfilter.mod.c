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
	{ 0xa1713526, "pskb_trim_rcsum_slow" },
	{ 0x3a805ce9, "skb_ext_add" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xc57c6d80, "unregister_net_sysctl_table" },
	{ 0x9542f060, "ip_do_fragment" },
	{ 0xa8181adf, "proc_dointvec" },
	{ 0x73588f11, "dst_release" },
	{ 0x1819bd32, "__vlan_find_dev_deep_rcu" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xe717b7e6, "neigh_destroy" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x5f98bdb6, "nf_hooks_needed" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x54021726, "nf_hook_slow" },
	{ 0x90a69765, "__pskb_pull_tail" },
	{ 0xc21708cd, "unregister_pernet_subsys" },
	{ 0x8c4d382b, "br_dev_queue_push_xmit" },
	{ 0xc5850110, "printk" },
	{ 0xc09e8ca4, "nf_unregister_net_hooks" },
	{ 0xd523d85d, "skb_push" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x721c9d1f, "init_net" },
	{ 0xd61de27d, "br_forward_finish" },
	{ 0x437eb1df, "ipv6_mod_enabled" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xbafac945, "ip_route_input_noref" },
	{ 0x8ea43f90, "nf_ipv6_ops" },
	{ 0xdeb0eda5, "nf_register_net_hooks" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1709a80e, "register_pernet_subsys" },
	{ 0xcfb5d782, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x7f5f891f, "skb_pull_rcsum" },
	{ 0x31ec3ae6, "ip_route_output_flow" },
	{ 0x37a0cba, "kfree" },
	{ 0x2008be80, "nf_br_ops" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x5c3a332e, "__skb_ext_del" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x7aa6ad0b, "br_handle_frame_finish" },
	{ 0xecee4256, "register_net_sysctl" },
};

MODULE_INFO(depends, "bridge");


MODULE_INFO(srcversion, "BA81D43CA7383F9E41ACC75");
