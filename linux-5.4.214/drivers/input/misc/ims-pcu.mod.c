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
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x4e97c8d9, "input_free_device" },
	{ 0xd4419732, "input_set_abs_params" },
	{ 0x94a09154, "input_register_device" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x4f55cb4, "input_allocate_device" },
	{ 0xb372d8f7, "led_classdev_register_ext" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7794ba54, "usb_driver_release_interface" },
	{ 0xaf7ad1b4, "request_firmware_nowait" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xedb483d8, "usb_alloc_urb" },
	{ 0xe2c54831, "usb_alloc_coherent" },
	{ 0xb03ebff, "usb_driver_claim_interface" },
	{ 0x1079fc0, "usb_ifnum_to_if" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x80500894, "request_firmware" },
	{ 0x5c9109de, "release_firmware" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x3adba3e3, "sysfs_notify" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x29361773, "complete" },
	{ 0x66c54ff1, "input_event" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x6b2998d4, "led_classdev_unregister" },
	{ 0x2ab40469, "input_unregister_device" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x37a0cba, "kfree" },
	{ 0x94c8bc6d, "usb_free_coherent" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x69acdf38, "memcpy" },
	{ 0xfb578fc5, "memset" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xa916b694, "strnlen" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x494ba38f, "usb_bulk_msg" },
	{ 0x96848186, "scnprintf" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6969A454F2CA55B8802FA62");
