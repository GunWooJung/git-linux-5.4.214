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
	{ 0xe8e42444, "gspca_suspend" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xd027d25e, "gspca_dev_probe" },
	{ 0x905fff2d, "gspca_resume" },
	{ 0xad09fc46, "gspca_disconnect" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0xc5850110, "printk" },
	{ 0xb9b32561, "usb_set_interface" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9670af2c, "gspca_debug" },
	{ 0xd2cf89a8, "gspca_frame_add" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0x1079fc0, "usb_ifnum_to_if" },
	{ 0xe2c54831, "usb_alloc_coherent" },
	{ 0xedb483d8, "usb_alloc_urb" },
};

MODULE_INFO(depends, "gspca_main");

MODULE_ALIAS("usb:v04A5p3035d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "6C1F9B39C0818D47C9200CE");
