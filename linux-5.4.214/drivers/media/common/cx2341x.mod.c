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
	{ 0xfd014252, "v4l2_ctrl_cluster" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x75a26f52, "v4l2_ctrl_handler_free" },
	{ 0x5f2471db, "v4l2_ctrl_g_ctrl" },
	{ 0x74539d3e, "v4l2_ctrl_new_std" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xd6f99ee8, "v4l2_ctrl_activate" },
	{ 0xdd64e639, "strscpy" },
	{ 0x315de2cf, "v4l2_ctrl_get_menu" },
	{ 0x54e64078, "v4l2_ctrl_new_std_menu" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xc5850110, "printk" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x5f25279b, "v4l2_ctrl_new_custom" },
	{ 0x13b45de2, "__v4l2_ctrl_grab" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfad44aac, "v4l2_ctrl_handler_setup" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x89e3897d, "v4l2_ctrl_query_fill" },
	{ 0x43ced180, "v4l2_ctrl_handler_init_class" },
};

MODULE_INFO(depends, "videodev");


MODULE_INFO(srcversion, "B1966984D50908152D3F5B5");
