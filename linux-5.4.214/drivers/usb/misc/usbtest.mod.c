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
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0xcce57a7f, "param_ops_ushort" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x365acda7, "set_normalized_timespec64" },
	{ 0x5e515be6, "ktime_get_ts64" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x3c4dda6e, "usb_get_descriptor" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x51bd55b5, "completion_done" },
	{ 0xf9a482f9, "msleep" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xe2c54831, "usb_alloc_coherent" },
	{ 0xedb483d8, "usb_alloc_urb" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x77ae495d, "usb_speed_string" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xe5a397f6, "usb_clear_halt" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x301babb4, "usb_get_status" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x37a0cba, "kfree" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0x94c8bc6d, "usb_free_coherent" },
	{ 0xfb578fc5, "memset" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0x29361773, "complete" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbe08b227, "usb_unlink_urb" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x3ccd56d7, "usb_sg_wait" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5b21dd7, "usb_sg_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x5b6ffd2a, "usb_sg_cancel" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xb9b32561, "usb_set_interface" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0547p2235d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0547p0080d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p8613d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vFFF0pFFF0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0525pA4A0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0525pA4A4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0525pA4A3d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "E74A530596F7B48338B2CBC");
