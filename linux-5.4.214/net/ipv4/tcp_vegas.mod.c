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
	{ 0x765395c3, "param_ops_int" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xd74229f, "tcp_register_congestion_control" },
	{ 0x1ed18efa, "tcp_unregister_congestion_control" },
	{ 0x7ae1e6e6, "tcp_reno_ssthresh" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xed202d9f, "tcp_slow_start" },
	{ 0xf1ae4145, "tcp_reno_undo_cwnd" },
	{ 0x23c048a, "tcp_reno_cong_avoid" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "719A0C719DFDBBFA14F0E00");
