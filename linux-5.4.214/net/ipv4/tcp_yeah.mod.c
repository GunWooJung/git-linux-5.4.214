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
	{ 0x3751f7bd, "tcp_vegas_get_info" },
	{ 0xf1ae4145, "tcp_reno_undo_cwnd" },
	{ 0xb68225e6, "tcp_vegas_cwnd_event" },
	{ 0x30cc9571, "tcp_vegas_state" },
	{ 0x1ed18efa, "tcp_unregister_congestion_control" },
	{ 0xd74229f, "tcp_register_congestion_control" },
	{ 0x178ec805, "tcp_vegas_init" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x48695aa3, "tcp_cong_avoid_ai" },
	{ 0xed202d9f, "tcp_slow_start" },
	{ 0xbd7e3c7f, "tcp_vegas_pkts_acked" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "tcp_vegas");


MODULE_INFO(srcversion, "F927DC3BDBC486D372C13F8");
