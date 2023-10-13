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
	{ 0x5ae8a115, "noop_llseek" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0x765395c3, "param_ops_int" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x538e7f52, "rc_keyup" },
	{ 0xe6f26e12, "rc_keydown" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x32437ce4, "rc_free_device" },
	{ 0x4e97c8d9, "input_free_device" },
	{ 0xe819ea0e, "usb_register_dev" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0xdc481706, "rc_register_device" },
	{ 0xe4616689, "rc_allocate_device" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x94a09154, "input_register_device" },
	{ 0xd4419732, "input_set_abs_params" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x4f55cb4, "input_allocate_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xedb483d8, "usb_alloc_urb" },
	{ 0x1079fc0, "usb_ifnum_to_if" },
	{ 0xe3ef08a7, "usb_get_dev" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0x58ae3970, "usb_deregister_dev" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x534e2a5a, "rc_unregister_device" },
	{ 0x2ab40469, "input_unregister_device" },
	{ 0x815f16c8, "usb_put_dev" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xdd64e639, "strscpy" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x37a0cba, "kfree" },
	{ 0x262e823a, "wait_for_completion_interruptible" },
	{ 0xee13453, "usb_find_interface" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x29361773, "complete" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0x66c54ff1, "input_event" },
	{ 0xf4d86be4, "rc_g_keycode_from_table" },
	{ 0xc5850110, "printk" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rc-core");

MODULE_ALIAS("usb:v15C2pFFDCd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0034d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0035d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0036d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0037d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0038d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p003Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p003Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p003Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p003Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p003Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p003Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0042d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0043d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0044d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0045d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C2p0046d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "F3B6BBB89337C1129902B18");
