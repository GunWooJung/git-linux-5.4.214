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
	{ 0xf9a482f9, "msleep" },
	{ 0xe8e42444, "gspca_suspend" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xd027d25e, "gspca_dev_probe" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x905fff2d, "gspca_resume" },
	{ 0x74539d3e, "v4l2_ctrl_new_std" },
	{ 0xad09fc46, "gspca_disconnect" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0xc5850110, "printk" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9670af2c, "gspca_debug" },
	{ 0xd2cf89a8, "gspca_frame_add" },
	{ 0x43ced180, "v4l2_ctrl_handler_init_class" },
	{ 0xaf37d977, "usb_register_driver" },
};

MODULE_INFO(depends, "gspca_main,videodev");

MODULE_ALIAS("usb:v041Ep400Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep4012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep4013d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0458p7006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0461p0821d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp0905d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp0960d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0322d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04A5p3003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04A5p3008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04A5p300Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F1p1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04FCp500Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04FCp504Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04FCp504Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04FCp5330d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04FCp5360d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04FCpFFFFd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v052Bp1507d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v052Bp1513d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v052Bp1803d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0546p3155d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0546p3191d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0546p3273d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055FpC211d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055FpC230d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055FpC232d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055FpC360d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055FpC420d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055FpC430d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055FpC440d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055FpC520d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055FpC530d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055FpC540d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055FpC630d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055FpC650d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05DAp1018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06D6p0031d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06D6p0041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0733p1311d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0733p1314d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0733p2211d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0733p2221d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0733p3261d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0733p3281d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp0104d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp0106d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp2008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp2010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp2016d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp2018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp2020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp2022d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp2024d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp2028d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp2040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp2042d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp2050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp2060d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D64p0303d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "D922E2693A529FD2207F020");
