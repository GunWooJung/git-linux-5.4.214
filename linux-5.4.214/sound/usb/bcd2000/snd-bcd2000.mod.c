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
	{ 0x407af304, "usb_wait_anchor_empty_timeout" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xa1637162, "snd_rawmidi_set_ops" },
	{ 0x76cff281, "snd_card_disconnect" },
	{ 0xef0af3db, "snd_rawmidi_new" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0xd56b098d, "snd_card_free_when_closed" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xd5145120, "usb_urb_ep_type_check" },
	{ 0x26be0b39, "snd_card_new" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0x3d549164, "snd_card_free" },
	{ 0x2c3bd8c1, "snd_card_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe7399ee1, "snd_rawmidi_transmit" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0xb2bc72b9, "snd_rawmidi_receive" },
	{ 0xa322e89a, "usb_anchor_urb" },
	{ 0xedb483d8, "usb_alloc_urb" },
};

MODULE_INFO(depends, "snd-rawmidi,snd");

MODULE_ALIAS("usb:v1397p00BDd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "B0E45A95111E50DD6C8A6F3");
