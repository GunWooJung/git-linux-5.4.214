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
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0x58ae3970, "usb_deregister_dev" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x167e7f9d, "__get_user_1" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xfb578fc5, "memset" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x40cc2f4a, "no_seek_end_llseek" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xe819ea0e, "usb_register_dev" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xe3ef08a7, "usb_get_dev" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x815f16c8, "usb_put_dev" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xee13453, "usb_find_interface" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0x5a4896a8, "__put_user_2" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8f9c199c, "__get_user_2" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xedb483d8, "usb_alloc_urb" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0711p0550d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0711p0900d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0711p0901d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0711p0902d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0711p0903d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0711p0918d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0711p0920d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0711p0950d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0711p5200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v182Dp021Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v182Dp0269d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "BF0743AEF6B11562110161D");
