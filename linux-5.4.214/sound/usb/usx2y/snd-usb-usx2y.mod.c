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
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd9d2bb03, "snd_usbmidi_disconnect" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x691edb72, "snd_pcm_period_elapsed" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xeb44339a, "free_pages_exact" },
	{ 0x78d38ba1, "snd_pcm_stop_xrun" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x43c3bb8a, "snd_pcm_lib_preallocate_pages" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x76cff281, "snd_card_disconnect" },
	{ 0x63343b1d, "snd_usbmidi_input_stop" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x131e5561, "param_ops_charp" },
	{ 0xfb578fc5, "memset" },
	{ 0x5fc72f0e, "alloc_pages_exact" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x585079d2, "snd_pcm_set_ops" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xb9b32561, "usb_set_interface" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xa9225458, "snd_hwdep_new" },
	{ 0x486a27d9, "snd_pcm_lib_free_pages" },
	{ 0xdaed65a6, "snd_pcm_lib_ioctl" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x623ca486, "__snd_usbmidi_create" },
	{ 0x521a011a, "snd_pcm_lib_malloc_pages" },
	{ 0xd5145120, "usb_urb_ep_type_check" },
	{ 0x26be0b39, "snd_card_new" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x494ba38f, "usb_bulk_msg" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x16756dc0, "snd_usbmidi_input_start" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0xa9e1e066, "snd_pcm_hw_constraint_minmax" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x3d549164, "snd_card_free" },
	{ 0x2c3bd8c1, "snd_card_register" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x1079fc0, "usb_ifnum_to_if" },
	{ 0xe1f25fb, "snd_pcm_new" },
	{ 0x30e1d5cf, "usb_get_current_frame_number" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0xedb483d8, "usb_alloc_urb" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "snd-usbmidi-lib,snd-pcm,snd,snd-hwdep");

MODULE_ALIAS("usb:v1604p8001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1604p8007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1604p8005d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "3E41A246FFCD81FCCE705D1");
