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
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xbbb49a07, "smscore_register_hotplug" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x733a909a, "smscore_get_board_id" },
	{ 0x91fc7183, "generic_file_llseek" },
	{ 0x7f3966fa, "debugfs_create_dir" },
	{ 0x3910b186, "sms_board_setup" },
	{ 0x67480317, "dvb_dmx_init" },
	{ 0x26d929db, "dvb_unregister_adapter" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x9e6e4b91, "dvb_create_media_graph" },
	{ 0xa0d7a8f6, "usb_debug_root" },
	{ 0x9f7cc916, "sms_board_event" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x963d42aa, "__wake_up_sync" },
	{ 0x8b51dea0, "dvb_register_frontend" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xbbdb5c42, "smscore_unregister_client" },
	{ 0xcb13db51, "dvb_unregister_frontend" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xd0a46a6a, "debugfs_create_file" },
	{ 0x5b1c5c13, "debugfs_remove_recursive" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x947be5cd, "param_ops_short" },
	{ 0x99a81ab3, "smsclient_sendrequest" },
	{ 0x99a57911, "dvb_dmxdev_release" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x97351a44, "sms_board_lna_control" },
	{ 0x80985cc4, "dvb_dmx_swfilter" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x67ba7ebf, "debugfs_remove" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x7b0d51ce, "dvb_dmx_release" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xf1d14fb3, "smscore_putbuffer" },
	{ 0xf2306d34, "media_device_cleanup" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7c197ddc, "smscore_unregister_hotplug" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x844539ae, "sms_get_board" },
	{ 0x60056b24, "dvb_register_adapter" },
	{ 0xdd14ff38, "sms_board_power" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x1487b19c, "sms_board_led_feedback" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x546a2d8d, "smscore_register_client" },
	{ 0x22c1bd87, "smscore_get_device_mode" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x21bb6ef4, "media_device_unregister" },
	{ 0x58367a1e, "dvb_dmxdev_init" },
};

MODULE_INFO(depends, "smsmdtv,dvb-core,mc");


MODULE_INFO(srcversion, "5AFA07F9A1AA7C326C3352B");
