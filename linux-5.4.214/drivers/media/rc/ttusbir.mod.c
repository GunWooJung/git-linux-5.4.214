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
	{ 0x9a4c322, "_dev_err" },
	{ 0xdc481706, "rc_register_device" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x32437ce4, "rc_free_device" },
	{ 0xb372d8f7, "led_classdev_register_ext" },
	{ 0xe2c54831, "usb_alloc_coherent" },
	{ 0xedb483d8, "usb_alloc_urb" },
	{ 0xb9b32561, "usb_set_interface" },
	{ 0xe4616689, "rc_allocate_device" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa3bff5cc, "ir_raw_event_handle" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xbe08b227, "usb_unlink_urb" },
	{ 0xb8c5979e, "ir_raw_event_store_with_filter" },
	{ 0x37a0cba, "kfree" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0x94c8bc6d, "usb_free_coherent" },
	{ 0x6b2998d4, "led_classdev_unregister" },
	{ 0x534e2a5a, "rc_unregister_device" },
	{ 0xae2af137, "led_classdev_suspend" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0x4bfc612f, "led_classdev_resume" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rc-core");

MODULE_ALIAS("usb:v0B48p2003d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "1B23091F6DC142D7B5200FF");
