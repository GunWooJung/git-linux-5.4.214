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
	{ 0x37c1c72a, "usb_free_all_descriptors" },
	{ 0x39cd3433, "gserial_connect" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x6b926abb, "usb_function_unregister" },
	{ 0x82fcc0d0, "usb_put_function_instance" },
	{ 0x4b70bb1, "usb_ep_autoconfig" },
	{ 0xc0de07b9, "gserial_disconnect" },
	{ 0x3b346986, "config_group_init_type_name" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x33bfdca2, "gserial_alloc_line" },
	{ 0x6d73fc48, "usb_function_register" },
	{ 0x7fc51512, "config_ep_by_speed" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0xb6652875, "gserial_free_line" },
	{ 0x4a9d9550, "usb_string_id" },
	{ 0xc3375c60, "usb_assign_descriptors" },
	{ 0xfa7bdbc3, "usb_interface_id" },
};

MODULE_INFO(depends, "libcomposite,u_serial");


MODULE_INFO(srcversion, "CA4112CBE4C50330B282627");
