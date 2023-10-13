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
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0x4cf9e53f, "usb_ep_autoconfig_reset" },
	{ 0x131e5561, "param_ops_charp" },
	{ 0x82fcc0d0, "usb_put_function_instance" },
	{ 0x2fe87fdc, "usb_composite_overwrite_options" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xab956f02, "usb_composite_probe" },
	{ 0x30d1550c, "usb_add_function" },
	{ 0x191062ef, "usb_put_function" },
	{ 0x7d8a9e31, "usb_composite_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8f3b9bbc, "usb_get_function" },
	{ 0x37a0cba, "kfree" },
	{ 0x15713089, "usb_string_ids_tab" },
	{ 0xe6d162a2, "usb_add_config_only" },
	{ 0x3a66f208, "usb_get_function_instance" },
	{ 0xcce57a7f, "param_ops_ushort" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x35c9d430, "usb_remove_function" },
};

MODULE_INFO(depends, "libcomposite");


MODULE_INFO(srcversion, "90C759580740A3E3C7C6867");
