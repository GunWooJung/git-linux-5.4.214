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
	{ 0xa9ee98, "udp6_set_csum" },
	{ 0x8629086e, "sock_release" },
	{ 0xdbcda658, "sock_create_kern" },
	{ 0x9c5412bb, "kernel_setsockopt" },
	{ 0x84cd0ffc, "kernel_connect" },
	{ 0x5c8750d1, "kernel_sock_shutdown" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9fe57d9, "kernel_bind" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xbec4c087, "ip6_local_out" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "56C72BFC40F54931C4FFEDB");
