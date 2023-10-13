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
	{ 0x169938c1, "__sysfs_match_string" },
	{ 0xe3ef08a7, "usb_get_dev" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x37a0cba, "kfree" },
	{ 0x815f16c8, "usb_put_dev" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x127f76b4, "usb_autopm_get_interface" },
	{ 0xc031e1f1, "usb_autopm_put_interface" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xe914e41e, "strcpy" },
	{ 0x754d539c, "strlen" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0FC5p1227d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "0237A2D9B57589DF4759523");
