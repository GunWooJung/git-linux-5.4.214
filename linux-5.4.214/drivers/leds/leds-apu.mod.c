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
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0x75ed0899, "__platform_driver_probe" },
	{ 0x56cf6cd9, "platform_device_register_full" },
	{ 0xc5850110, "printk" },
	{ 0x6d253dca, "dmi_match" },
	{ 0x6b2998d4, "led_classdev_unregister" },
	{ 0xb372d8f7, "led_classdev_register_ext" },
	{ 0x8281b36, "devm_ioremap" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x848d372e, "iowrite8" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("dmi*:svn*PCEngines*:pn*APU*:");

MODULE_INFO(srcversion, "A7F815AB7B948F58AF749AE");
