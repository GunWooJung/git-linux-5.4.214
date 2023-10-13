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
	{ 0xf9a482f9, "msleep" },
	{ 0xd9d2bb03, "snd_usbmidi_disconnect" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x5d2b5dc5, "snd_power_wait" },
	{ 0xeb44339a, "free_pages_exact" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x127f76b4, "usb_autopm_get_interface" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x76cff281, "snd_card_disconnect" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0x63343b1d, "snd_usbmidi_input_stop" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x131e5561, "param_ops_charp" },
	{ 0xfb578fc5, "memset" },
	{ 0x5fc72f0e, "alloc_pages_exact" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xb9b32561, "usb_set_interface" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xa9225458, "snd_hwdep_new" },
	{ 0x623ca486, "__snd_usbmidi_create" },
	{ 0xd5145120, "usb_urb_ep_type_check" },
	{ 0x26be0b39, "snd_card_new" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0xe3ef08a7, "usb_get_dev" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x815f16c8, "usb_put_dev" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x94363551, "usb_get_intf" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x16756dc0, "snd_usbmidi_input_start" },
	{ 0x37a0cba, "kfree" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0x3d549164, "snd_card_free" },
	{ 0x2c3bd8c1, "snd_card_register" },
	{ 0x1079fc0, "usb_ifnum_to_if" },
	{ 0x30e1d5cf, "usb_get_current_frame_number" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0xc031e1f1, "usb_autopm_put_interface" },
	{ 0xedb483d8, "usb_alloc_urb" },
	{ 0x2ccdf080, "usb_put_intf" },
};

MODULE_INFO(depends, "snd-usbmidi-lib,snd,snd-hwdep");

MODULE_ALIAS("usb:v0644p800Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0644p800Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0644p8021d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0644p8020d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "ED32C6508566E124DE3E5F5");
