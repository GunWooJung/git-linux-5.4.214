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
	{ 0xf1ae4145, "tcp_reno_undo_cwnd" },
	{ 0x7ae1e6e6, "tcp_reno_ssthresh" },
	{ 0x1ed18efa, "tcp_unregister_congestion_control" },
	{ 0xd74229f, "tcp_register_congestion_control" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x23c048a, "tcp_reno_cong_avoid" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "3E095A84FC55825D9EDB66B");
