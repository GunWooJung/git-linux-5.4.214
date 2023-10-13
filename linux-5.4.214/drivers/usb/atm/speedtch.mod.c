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
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0xdc67eaad, "param_ops_byte" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0x746500fd, "usbatm_usb_disconnect" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xcff5573e, "usb_reset_device" },
	{ 0xedb483d8, "usb_alloc_urb" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x69acdf38, "memcpy" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xb03ebff, "usb_driver_claim_interface" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x5c9109de, "release_firmware" },
	{ 0x4302d0eb, "free_pages" },
	{ 0xb9b32561, "usb_set_interface" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x494ba38f, "usb_bulk_msg" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x4b358e06, "atm_dev_signal_change" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x80500894, "request_firmware" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0x7794ba54, "usb_driver_release_interface" },
	{ 0x1079fc0, "usb_ifnum_to_if" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xab6d5b3b, "hex_to_bin" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0x4c448223, "usb_string" },
	{ 0xc5850110, "printk" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xa2d33a1d, "usbatm_usb_probe" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "usbatm,atm");

MODULE_ALIAS("usb:v06B9p4061d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "830063AB5B56DA3DC21842C");
