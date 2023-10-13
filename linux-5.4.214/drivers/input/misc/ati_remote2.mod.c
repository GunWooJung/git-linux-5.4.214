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
	{ 0x4e97c8d9, "input_free_device" },
	{ 0x94a09154, "input_register_device" },
	{ 0x4f55cb4, "input_allocate_device" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xedb483d8, "usb_alloc_urb" },
	{ 0xe2c54831, "usb_alloc_coherent" },
	{ 0xb03ebff, "usb_driver_claim_interface" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x7794ba54, "usb_driver_release_interface" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x2ab40469, "input_unregister_device" },
	{ 0x2c256e1f, "input_scancode_to_scalar" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x66c54ff1, "input_event" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x94c8bc6d, "usb_free_coherent" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0xc031e1f1, "usb_autopm_put_interface" },
	{ 0x127f76b4, "usb_autopm_get_interface" },
	{ 0x1079fc0, "usb_ifnum_to_if" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0471p0602d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "1A4FEE5178C8F348C403F42");
