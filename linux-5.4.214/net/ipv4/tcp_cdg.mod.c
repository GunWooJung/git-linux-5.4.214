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
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0xf1ae4145, "tcp_reno_undo_cwnd" },
	{ 0x1ed18efa, "tcp_unregister_congestion_control" },
	{ 0xd74229f, "tcp_register_congestion_control" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x41586800, "tcp_enter_cwr" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x23c048a, "tcp_reno_cong_avoid" },
	{ 0x37a0cba, "kfree" },
	{ 0xfb578fc5, "memset" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "3014C48B4010368132F2891");
