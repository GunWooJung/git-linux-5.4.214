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
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0x48742cd1, "v4l2_device_put" },
	{ 0xbec9194f, "snd_tea575x_exit" },
	{ 0xd59728e8, "v4l2_device_disconnect" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x6b2998d4, "led_classdev_unregister" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x490b58c2, "snd_tea575x_init" },
	{ 0xdd64e639, "strscpy" },
	{ 0xb898d39, "v4l2_device_register" },
	{ 0xb372d8f7, "led_classdev_register_ext" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd6077178, "v4l2_device_set_name" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x75dd0647, "usb_interrupt_msg" },
	{ 0x37a0cba, "kfree" },
	{ 0x28a89cfd, "v4l2_device_unregister" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc2adb52, "snd_tea575x_set_freq" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "videodev,tea575x");

MODULE_ALIAS("usb:v077Dp627Ad0001dc*dsc*dp*ic03isc*ip*in*");

MODULE_INFO(srcversion, "A2D17FB56137A7A22C79EDC");
