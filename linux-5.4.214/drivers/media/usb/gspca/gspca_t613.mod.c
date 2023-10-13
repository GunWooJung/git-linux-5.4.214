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
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe8e42444, "gspca_suspend" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xd027d25e, "gspca_dev_probe" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x905fff2d, "gspca_resume" },
	{ 0x5f2471db, "v4l2_ctrl_g_ctrl" },
	{ 0x74539d3e, "v4l2_ctrl_new_std" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xad09fc46, "gspca_disconnect" },
	{ 0x66c54ff1, "input_event" },
	{ 0x54e64078, "v4l2_ctrl_new_std_menu" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0xc5850110, "printk" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2c89d0ad, "v4l2_ctrl_auto_cluster" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9670af2c, "gspca_debug" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd2cf89a8, "gspca_frame_add" },
	{ 0x43ced180, "v4l2_ctrl_handler_init_class" },
	{ 0xaf37d977, "usb_register_driver" },
};

MODULE_INFO(depends, "gspca_main,videodev");

MODULE_ALIAS("usb:v17A1p0128d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "77450F66D061BB6842955E8");
