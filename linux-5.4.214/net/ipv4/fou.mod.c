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
	{ 0x9bc2f868, "register_pernet_device" },
	{ 0xcea37297, "genl_register_family" },
	{ 0x818cbb36, "genl_unregister_family" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x70ba9008, "inet6_offloads" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0x68920b, "udp_sock_create6" },
	{ 0x7435bb7d, "setup_udp_tunnel_sock" },
	{ 0x90a69765, "__pskb_pull_tail" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0x9bfe7887, "udp_tunnel_sock_release" },
	{ 0x7fcbbf45, "ip_tunnel_encap_del_ops" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x4edc58ab, "unregister_pernet_device" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xd523d85d, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8f4f774, "netlink_unicast" },
	{ 0x3e817db3, "__skb_get_hash" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xcfb5d782, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xac3201b0, "udp_flow_hashrnd" },
	{ 0xc3f8061f, "iptunnel_handle_offloads" },
	{ 0xa373135f, "inet_protos" },
	{ 0x29a04d, "inet_offloads" },
	{ 0x37a0cba, "kfree" },
	{ 0xfff0cba0, "udp_set_csum" },
	{ 0x8f57e5bf, "genlmsg_put" },
	{ 0x83d8f38c, "udp_sock_create4" },
	{ 0xe113bbbc, "csum_partial" },
	{ 0xacfbe819, "inet_get_local_port_range" },
	{ 0xb7ba62fc, "ip_tunnel_encap_add_ops" },
	{ 0xc13b8ce4, "__skb_checksum_complete" },
};

MODULE_INFO(depends, "ip6_udp_tunnel,udp_tunnel,ip_tunnel");


MODULE_INFO(srcversion, "4229586F03DCAD1C6693D72");
