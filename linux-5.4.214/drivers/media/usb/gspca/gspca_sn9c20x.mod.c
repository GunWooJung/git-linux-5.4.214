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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf9a482f9, "msleep" },
	{ 0xfd014252, "v4l2_ctrl_cluster" },
	{ 0xe8e42444, "gspca_suspend" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xd027d25e, "gspca_dev_probe" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x905fff2d, "gspca_resume" },
	{ 0x5f2471db, "v4l2_ctrl_g_ctrl" },
	{ 0x74539d3e, "v4l2_ctrl_new_std" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xad09fc46, "gspca_disconnect" },
	{ 0x66c54ff1, "input_event" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0xc5850110, "printk" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x391e47a2, "__v4l2_ctrl_s_ctrl" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2c89d0ad, "v4l2_ctrl_auto_cluster" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9670af2c, "gspca_debug" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd2cf89a8, "gspca_frame_add" },
	{ 0x43ced180, "v4l2_ctrl_handler_init_class" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0x1079fc0, "usb_ifnum_to_if" },
	{ 0xc5b6f236, "queue_work_on" },
};

MODULE_INFO(depends, "videodev,gspca_main");

MODULE_ALIAS("usb:v0C45p6240d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p6242d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p6248d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p624Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p624Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p624Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p6251d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p6253d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p6260d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p6270d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p627Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p627Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p627Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p6280d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p6282d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p6288d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p628Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p628Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p628Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p62A0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p62B0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p62B3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p62BBd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p62BCd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045Ep00F4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v145Fp013Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0458p7029d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0458p7045d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0458p704Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0458p704Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vA168p0610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vA168p0611d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vA168p0613d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vA168p0618d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vA168p0614d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vA168p0615d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vA168p0617d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "EDF8F6E93A175632384801A");
