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
	{ 0xc2448345, "default_llseek" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x12d7640b, "usb_enable_autosuspend" },
	{ 0x6cfb19d0, "hwrng_register" },
	{ 0xe819ea0e, "usb_register_dev" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xedb483d8, "usb_alloc_urb" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x94363551, "usb_get_intf" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x93c7edeb, "usb_find_common_endpoints" },
	{ 0x69acdf38, "memcpy" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xc031e1f1, "usb_autopm_put_interface" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0x127f76b4, "usb_autopm_get_interface" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb605aeff, "hwrng_unregister" },
	{ 0x693a12d4, "usb_poison_urb" },
	{ 0x58ae3970, "usb_deregister_dev" },
	{ 0x2ccdf080, "usb_put_intf" },
	{ 0x37a0cba, "kfree" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xee13453, "usb_find_interface" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v1D50p60C6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12D8p0001d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "271F57C654BB0269D87CE55");
