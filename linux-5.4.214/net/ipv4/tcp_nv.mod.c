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
	{ 0xf1ae4145, "tcp_reno_undo_cwnd" },
	{ 0x1ed18efa, "tcp_unregister_congestion_control" },
	{ 0xd74229f, "tcp_register_congestion_control" },
	{ 0xc4534935, "__cgroup_bpf_run_filter_sock_ops" },
	{ 0xf4b2b86e, "cgroup_bpf_enabled_key" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xed202d9f, "tcp_slow_start" },
	{ 0x48695aa3, "tcp_cong_avoid_ai" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C248A54DF9BF8CD23E45734");
