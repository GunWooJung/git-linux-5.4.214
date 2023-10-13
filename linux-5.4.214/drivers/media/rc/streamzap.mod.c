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
	{ 0xd55b19f0, "ir_raw_event_store" },
	{ 0xa3bff5cc, "ir_raw_event_handle" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x32437ce4, "rc_free_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xdd64e639, "strscpy" },
	{ 0xa916b694, "strnlen" },
	{ 0x4c448223, "usb_string" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xdc481706, "rc_register_device" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe4616689, "rc_allocate_device" },
	{ 0xedb483d8, "usb_alloc_urb" },
	{ 0xe2c54831, "usb_alloc_coherent" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xb8c5979e, "ir_raw_event_store_with_filter" },
	{ 0x37a0cba, "kfree" },
	{ 0x94c8bc6d, "usb_free_coherent" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0x534e2a5a, "rc_unregister_device" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rc-core");

MODULE_ALIAS("usb:v0E9Cp0000d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "8E2231E8F18E96630E20FB9");
