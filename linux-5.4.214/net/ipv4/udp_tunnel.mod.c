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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0x8629086e, "sock_release" },
	{ 0xe8b21f69, "metadata_dst_alloc" },
	{ 0xdbcda658, "sock_create_kern" },
	{ 0x9c5412bb, "kernel_setsockopt" },
	{ 0x84cd0ffc, "kernel_connect" },
	{ 0x64660e8f, "iptunnel_xmit" },
	{ 0x5c8750d1, "kernel_sock_shutdown" },
	{ 0x99517682, "udp_encap_enable" },
	{ 0xc2f29a5a, "ipv6_stub" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xfff0cba0, "udp_set_csum" },
	{ 0x9fe57d9, "kernel_bind" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "0A315BA6124B0664F4D23FB");
