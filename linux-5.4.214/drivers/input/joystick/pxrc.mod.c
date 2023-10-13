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
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x94a09154, "input_register_device" },
	{ 0xd4419732, "input_set_abs_params" },
	{ 0x7ef2952e, "input_set_capability" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2cc132c2, "devm_input_allocate_device" },
	{ 0x33560c9e, "devm_add_action" },
	{ 0xedb483d8, "usb_alloc_urb" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x93c7edeb, "usb_find_common_endpoints" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0x66c54ff1, "input_event" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v1781p0898d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "A352127919081C9B749633F");
