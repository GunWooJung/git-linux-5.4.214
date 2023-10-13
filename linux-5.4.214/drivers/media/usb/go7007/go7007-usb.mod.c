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
	{ 0x765395c3, "param_ops_int" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x2c445752, "go7007_read_addr" },
	{ 0x9da63e29, "go7007_update_board" },
	{ 0x53b9230d, "i2c_smbus_xfer" },
	{ 0xeaea6fe7, "go7007_register_encoder" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x3656c243, "i2c_add_adapter" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xbf84dda5, "go7007_boot_encoder" },
	{ 0xedb483d8, "usb_alloc_urb" },
	{ 0xdd64e639, "strscpy" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x50ce94d0, "go7007_alloc" },
	{ 0xfb578fc5, "memset" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe6c59e04, "go7007_read_interrupt" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0xf9a482f9, "msleep" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x494ba38f, "usb_bulk_msg" },
	{ 0x84752507, "go7007_parse_video_stream" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xeb94cb12, "go7007_snd_remove" },
	{ 0x48742cd1, "v4l2_device_put" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2bd4d994, "video_unregister_device" },
	{ 0xd59728e8, "v4l2_device_disconnect" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "go7007,videodev");

MODULE_ALIAS("usb:v0EB1p7007d0200dc*dsc*dp*icFFisc00ipFFin*");
MODULE_ALIAS("usb:v0EB1p7007d0202dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB1p7007d0204dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB1p7007d0205dc*dsc*dp*icFFisc00ipFFin*");
MODULE_ALIAS("usb:v0EB1p7007d0208dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB1p7007d0209dc*dsc*dp*icFFisc00ipFFin*");
MODULE_ALIAS("usb:v0EB1p7007d0210dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093BpA102d0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093BpA104d0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10FDpDE00d0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1943p2250d0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06E1p0709d0204dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "327BBC69D9ED04C35818893");
