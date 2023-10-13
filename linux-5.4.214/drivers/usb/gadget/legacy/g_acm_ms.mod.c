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
	{ 0xab6c68ac, "fsg_config_from_params" },
	{ 0x1ccb58f7, "fsg_common_set_num_buffers" },
	{ 0x6acb4179, "fsg_common_set_inquiry_string" },
	{ 0x496718df, "usb_add_config" },
	{ 0x141fce2a, "fsg_common_remove_luns" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0x9a0221c7, "fsg_common_free_buffers" },
	{ 0x131e5561, "param_ops_charp" },
	{ 0xbede210b, "fsg_common_set_cdev" },
	{ 0x82fcc0d0, "usb_put_function_instance" },
	{ 0x2fe87fdc, "usb_composite_overwrite_options" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xab956f02, "usb_composite_probe" },
	{ 0x30d1550c, "usb_add_function" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd1a3e8e0, "fsg_common_create_luns" },
	{ 0x191062ef, "usb_put_function" },
	{ 0x7d8a9e31, "usb_composite_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8f3b9bbc, "usb_get_function" },
	{ 0x37a0cba, "kfree" },
	{ 0x15713089, "usb_string_ids_tab" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0x3a66f208, "usb_get_function_instance" },
	{ 0x7e26d4a5, "fsg_common_set_sysfs" },
	{ 0xcce57a7f, "param_ops_ushort" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x35c9d430, "usb_remove_function" },
};

MODULE_INFO(depends, "usb_f_mass_storage,libcomposite");


MODULE_INFO(srcversion, "AD5762E8A111CF5AEC84BFB");
