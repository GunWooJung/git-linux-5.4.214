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
	{ 0xc5850110, "printk" },
	{ 0x13ca9087, "nf_log_register" },
	{ 0x1709a80e, "register_pernet_subsys" },
	{ 0x71094aa3, "nf_log_dump_vlan" },
	{ 0x80c68137, "nf_log_buf_close" },
	{ 0xc3999ea, "nf_log_dump_packet_common" },
	{ 0xd4961de, "nf_log_buf_open" },
	{ 0x9aaeefce, "sysctl_nf_log_all_netns" },
	{ 0x721c9d1f, "init_net" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3ca0a05b, "nf_log_dump_tcp_header" },
	{ 0x89b063bc, "nf_log_dump_sk_uid_gid" },
	{ 0x19312148, "nf_log_dump_udp_header" },
	{ 0xcd6f2dc9, "nf_log_buf_add" },
	{ 0x5cb6526b, "skb_copy_bits" },
	{ 0x4434aaef, "nf_log_set" },
	{ 0x518051d9, "nf_log_unset" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "nf_log_common");


MODULE_INFO(srcversion, "D6B7C38BF533052E0E5D435");
