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
	{ 0xcce57a7f, "param_ops_ushort" },
	{ 0x131e5561, "param_ops_charp" },
	{ 0x82fcc0d0, "usb_put_function_instance" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3a66f208, "usb_get_function_instance" },
	{ 0x2fe87fdc, "usb_composite_overwrite_options" },
	{ 0x496718df, "usb_add_config" },
	{ 0x15713089, "usb_string_ids_tab" },
	{ 0xab956f02, "usb_composite_probe" },
	{ 0x30d1550c, "usb_add_function" },
	{ 0x8f3b9bbc, "usb_get_function" },
	{ 0x191062ef, "usb_put_function" },
	{ 0x7d8a9e31, "usb_composite_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "libcomposite");


MODULE_INFO(srcversion, "F55EA63AF6CB41433218EA4");
