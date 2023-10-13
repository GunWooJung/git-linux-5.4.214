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
	{ 0x68a41536, "param_ops_bool" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x5c9109de, "release_firmware" },
	{ 0x80500894, "request_firmware" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x905695ab, "sg_copy_from_buffer" },
	{ 0xcff5573e, "usb_reset_device" },
	{ 0xde7d6c64, "usb_lock_device_for_reset" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x3ccd56d7, "usb_sg_wait" },
	{ 0x5b21dd7, "usb_sg_init" },
	{ 0x2b8ab42, "sg_copy_to_buffer" },
	{ 0xfb578fc5, "memset" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x40ca826f, "mmc_request_done" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x6d3954a4, "mmc_add_host" },
	{ 0x24d273d1, "add_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x947fbbbc, "mmc_alloc_host" },
	{ 0x4c448223, "usb_string" },
	{ 0xe3ef08a7, "usb_get_dev" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xc5850110, "printk" },
	{ 0xb846722a, "mmc_remove_host" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0x2cbcc89, "mmc_detect_change" },
	{ 0x9166fada, "strncpy" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xab37f21b, "wake_up_process" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xedb483d8, "usb_alloc_urb" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0x29361773, "complete" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xbe08b227, "usb_unlink_urb" },
	{ 0x5b6ffd2a, "usb_sg_cancel" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x8bd4fa4f, "mmc_free_host" },
	{ 0x815f16c8, "usb_put_dev" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v2201p012Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p012Cd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "D3586B0C8AFD1E6D2BDA34F");
