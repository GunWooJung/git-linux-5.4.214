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
	{ 0x2b708d10, "hid_unregister_driver" },
	{ 0xb27fe432, "__hid_register_driver" },
	{ 0x42c0b7e4, "devm_hwrng_register" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x9b9a702f, "devm_led_classdev_register_ext" },
	{ 0x15f68f5d, "devm_kasprintf" },
	{ 0xedb483d8, "usb_alloc_urb" },
	{ 0xc6c38eb0, "hid_hw_start" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x49bdb973, "hid_open_report" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x3232dfdb, "usb_hid_driver" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x29361773, "complete" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0x693a12d4, "usb_poison_urb" },
	{ 0xffa8e380, "hid_hw_stop" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hid,usbhid");

MODULE_ALIAS("hid:b0003g*v000010C4p00008ACF");

MODULE_INFO(srcversion, "D164713DA519F0CBF9D49A5");
