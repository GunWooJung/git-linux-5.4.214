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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0xe4d1df46, "tty_port_tty_get" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x81188c30, "match_string" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x5d99c43a, "tty_port_open" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x96821827, "tty_port_hangup" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0x540ad596, "tty_register_driver" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x127f76b4, "usb_autopm_get_interface" },
	{ 0x97b943e0, "tty_buffer_request_room" },
	{ 0xc41754ef, "put_tty_driver" },
	{ 0x591cd494, "tty_set_operations" },
	{ 0x1d0147b9, "tty_port_put" },
	{ 0xfb578fc5, "memset" },
	{ 0x27a62ab4, "tty_port_close" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0xc5850110, "printk" },
	{ 0x6b38e454, "tty_port_register_device" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0x94e7a2a2, "tty_port_init" },
	{ 0x8760c74e, "tty_insert_flip_string_fixed_flag" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x72a2e4be, "tty_vhangup" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xe112cb7, "tty_port_tty_wakeup" },
	{ 0xd5198241, "tty_unregister_device" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xe3ef08a7, "usb_get_dev" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x815f16c8, "usb_put_dev" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbec2fa3d, "tty_unregister_driver" },
	{ 0x477c6c7a, "tty_standard_install" },
	{ 0x7b4446ab, "__tty_alloc_driver" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0xb1162224, "tty_kref_put" },
	{ 0xcb763749, "tty_flip_buffer_push" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0xc031e1f1, "usb_autopm_put_interface" },
	{ 0xedb483d8, "usb_alloc_urb" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v1076p8000d*dc*dsc*dp*ic02isc02ip*in*");
MODULE_ALIAS("usb:v1076p8F00d*dc*dsc*dp*ic02isc02ip*in*");
MODULE_ALIAS("usb:v1076p9000d*dc*dsc*dp*ic02isc02ip*in*");
MODULE_ALIAS("usb:v1D74p2300d*dc*dsc*dp*ic02isc02ip*in*");

MODULE_INFO(srcversion, "2974B19F7EF03299495C58E");
