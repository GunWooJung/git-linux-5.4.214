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
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xad09fc46, "gspca_disconnect" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0xc5850110, "printk" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x494ba38f, "usb_bulk_msg" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9670af2c, "gspca_debug" },
	{ 0x37a0cba, "kfree" },
	{ 0xd2cf89a8, "gspca_frame_add" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xdf9208c0, "alloc_workqueue" },
};

MODULE_INFO(depends, "gspca_main");

MODULE_ALIAS("usb:v2770p9120d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "5D4D9A20F4CD4E750E03A8E");
