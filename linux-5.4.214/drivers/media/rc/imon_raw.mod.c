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
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa3bff5cc, "ir_raw_event_handle" },
	{ 0xc9d8f266, "ir_raw_event_set_idle" },
	{ 0xb8c5979e, "ir_raw_event_store_with_filter" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xbe08b227, "usb_unlink_urb" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0x1cf4def5, "devm_rc_register_device" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf4f9453e, "devm_rc_allocate_device" },
	{ 0xedb483d8, "usb_alloc_urb" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rc-core");

MODULE_ALIAS("usb:v04E8pFF30d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "D6436F5BCD0CB813E5C75E7");
