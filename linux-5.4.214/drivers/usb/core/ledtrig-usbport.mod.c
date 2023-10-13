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
	{ 0x7674137c, "led_trigger_unregister" },
	{ 0x7d80062c, "led_trigger_register" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x754d539c, "strlen" },
	{ 0x658518b8, "sysfs_add_file_to_group" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x89bbafc6, "usb_register_notify" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x60a10dcb, "led_set_brightness" },
	{ 0xbd77e487, "usb_for_each_dev" },
	{ 0x811dc334, "usb_unregister_notify" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x37a0cba, "kfree" },
	{ 0x881e0352, "sysfs_remove_file_from_group" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D0BC3FA19429BCC50DFB290");
