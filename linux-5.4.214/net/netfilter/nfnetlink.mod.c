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
	{ 0xe428c6a2, "netlink_has_listeners" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x30313dd3, "skb_clone" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x9d7a0f9a, "nlmsg_notify" },
	{ 0xc21708cd, "unregister_pernet_subsys" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xe698f19a, "netlink_kernel_release" },
	{ 0x11a90242, "netlink_rcv_skb" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8f4f774, "netlink_unicast" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdf46d4f1, "module_put" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1709a80e, "register_pernet_subsys" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xab3ce9ef, "netlink_ack" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x1c3529cf, "netlink_set_err" },
	{ 0xec6bedce, "__netlink_kernel_create" },
	{ 0x37a0cba, "kfree" },
	{ 0x6d71399f, "try_module_get" },
	{ 0x2e58bb1c, "netlink_net_capable" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "39F861964563C9FDFFC98DE");
