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
	{ 0xfd014252, "v4l2_ctrl_cluster" },
	{ 0xe8e42444, "gspca_suspend" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xd027d25e, "gspca_dev_probe" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xa9b23abf, "gspca_expo_autogain" },
	{ 0x905fff2d, "gspca_resume" },
	{ 0x74539d3e, "v4l2_ctrl_new_std" },
	{ 0xad09fc46, "gspca_disconnect" },
	{ 0x66c54ff1, "input_event" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0xc5850110, "printk" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x2c89d0ad, "v4l2_ctrl_auto_cluster" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9670af2c, "gspca_debug" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd2cf89a8, "gspca_frame_add" },
	{ 0x43ced180, "v4l2_ctrl_handler_init_class" },
	{ 0xaf37d977, "usb_register_driver" },
};

MODULE_INFO(depends, "videodev,gspca_main");

MODULE_ALIAS("usb:v06F8p3009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8p301Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093Ap2620d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093Ap2621d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093Ap2622d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093Ap2623d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093Ap2624d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093Ap2625d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093Ap2626d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093Ap2627d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093Ap2628d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093Ap2629d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093Ap262Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093Ap262Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v145Fp013Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1AE7p2001d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "895492E6D90969B4EF3E3A3");
