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
	{ 0xd9d2bb03, "snd_usbmidi_disconnect" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x691edb72, "snd_pcm_period_elapsed" },
	{ 0x7aaba4d8, "usb_init_urb" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xa8e6c125, "snd_pcm_hw_constraint_msbits" },
	{ 0x78d38ba1, "snd_pcm_stop_xrun" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x76cff281, "snd_card_disconnect" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x131e5561, "param_ops_charp" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0xb9638db4, "snd_pcm_rate_to_rate_bit" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x585079d2, "snd_pcm_set_ops" },
	{ 0xb9b32561, "usb_set_interface" },
	{ 0xd56b098d, "snd_card_free_when_closed" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xfab7e0a5, "snd_pcm_lib_get_vmalloc_page" },
	{ 0xb03ebff, "usb_driver_claim_interface" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xdaed65a6, "snd_pcm_lib_ioctl" },
	{ 0x94c8bc6d, "usb_free_coherent" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x623ca486, "__snd_usbmidi_create" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x26be0b39, "snd_card_new" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0xa916b694, "strnlen" },
	{ 0x35b57060, "_snd_pcm_lib_alloc_vmalloc_buffer" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x7794ba54, "usb_driver_release_interface" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0xa9e1e066, "snd_pcm_hw_constraint_minmax" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x3d549164, "snd_card_free" },
	{ 0x2c3bd8c1, "snd_card_register" },
	{ 0x1079fc0, "usb_ifnum_to_if" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe1f25fb, "snd_pcm_new" },
	{ 0xff3bd408, "snd_pcm_lib_free_vmalloc_buffer" },
	{ 0xe2c54831, "usb_alloc_coherent" },
	{ 0x1cd6f316, "param_ops_uint" },
};

MODULE_INFO(depends, "snd-usbmidi-lib,snd-pcm,snd");

MODULE_ALIAS("usb:v0582p0044d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p007Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p008Dd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "582A4D10E10AB81A2567E0D");
