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
	{ 0xdfbba290, "rc_map_dibusb_table" },
	{ 0x449962d6, "dvb_usb_device_exit" },
	{ 0x2bb2479a, "dvb_usb_device_init" },
	{ 0xeb17060e, "dibusb_rc_query" },
	{ 0xe0b3d492, "dibusb_pid_filter" },
	{ 0x947be5cd, "param_ops_short" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0xecadcc6b, "dibusb2_0_power_ctrl" },
	{ 0x4bcf565a, "dibusb_dib3000mc_frontend_attach" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0x11bb9da, "dibusb_dib3000mc_tuner_attach" },
	{ 0x64c8b793, "dibusb2_0_streaming_ctrl" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0xe999cb82, "dibusb_i2c_algo" },
	{ 0x55bb70ed, "dibusb_pid_filter_ctrl" },
};

MODULE_INFO(depends, "dvb-usb-dibusb-common,dvb-usb,dvb-usb-dibusb-mc-common");

MODULE_ALIAS("usb:v10B8p0BC6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10B8p0BC7d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05D8p8109d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05D8p810Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CApF000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CApF001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1ApE360d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1ApE361d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5032p0BC6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5032p0BC7d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05D8p810Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05D8p810Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0413p6025d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0413p6026d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10B9p5000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10B9p5001d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "9B2F499F3C3D0F364E547E1");
