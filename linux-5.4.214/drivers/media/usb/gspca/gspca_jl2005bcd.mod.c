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
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe8e42444, "gspca_suspend" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xd027d25e, "gspca_dev_probe" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x905fff2d, "gspca_resume" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xad09fc46, "gspca_disconnect" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0xc5850110, "printk" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x494ba38f, "usb_bulk_msg" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x9670af2c, "gspca_debug" },
	{ 0x37a0cba, "kfree" },
	{ 0xd2cf89a8, "gspca_frame_add" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0xc5b6f236, "queue_work_on" },
};

MODULE_INFO(depends, "gspca_main");

MODULE_ALIAS("usb:v0979p0227d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "C7C58F7EA31773A18D9D91C");
