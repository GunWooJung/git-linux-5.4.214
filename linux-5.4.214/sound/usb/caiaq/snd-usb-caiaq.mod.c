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
	{ 0x765395c3, "param_ops_int" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x691edb72, "snd_pcm_period_elapsed" },
	{ 0x7aaba4d8, "usb_init_urb" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0xa1637162, "snd_rawmidi_set_ops" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x76cff281, "snd_card_disconnect" },
	{ 0xef0af3db, "snd_rawmidi_new" },
	{ 0xd4419732, "input_set_abs_params" },
	{ 0x66c54ff1, "input_event" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x131e5561, "param_ops_charp" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x4c448223, "usb_string" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0x585079d2, "snd_pcm_set_ops" },
	{ 0xb9b32561, "usb_set_interface" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xfab7e0a5, "snd_pcm_lib_get_vmalloc_page" },
	{ 0x5792f848, "strlcpy" },
	{ 0xdaed65a6, "snd_pcm_lib_ioctl" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x64ada295, "snd_card_set_id" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xd5145120, "usb_urb_ep_type_check" },
	{ 0x26be0b39, "snd_card_new" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0x35b57060, "_snd_pcm_lib_alloc_vmalloc_buffer" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xcff5573e, "usb_reset_device" },
	{ 0x94a09154, "input_register_device" },
	{ 0x494ba38f, "usb_bulk_msg" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x4d16dbe5, "snd_ctl_new1" },
	{ 0x4e97c8d9, "input_free_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x2ab40469, "input_unregister_device" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x3d549164, "snd_card_free" },
	{ 0x2c3bd8c1, "snd_card_register" },
	{ 0xb9882e19, "snd_pcm_limit_hw_rates" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe1f25fb, "snd_pcm_new" },
	{ 0xff3bd408, "snd_pcm_lib_free_vmalloc_buffer" },
	{ 0xff94b8b9, "snd_ctl_add" },
	{ 0xe7399ee1, "snd_rawmidi_transmit" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0xb2bc72b9, "snd_rawmidi_receive" },
	{ 0xedb483d8, "usb_alloc_urb" },
	{ 0x4f55cb4, "input_allocate_device" },
};

MODULE_INFO(depends, "snd-pcm,snd-rawmidi,snd");

MODULE_ALIAS("usb:v17CCp1969d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp1940d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp4711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp4712d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp0815d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp1978d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp1915d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp0D8Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp0839d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp041Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp2305d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCpBAFFd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp041Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp0808d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "F759D6A3FBC8A3314E7EB77");
