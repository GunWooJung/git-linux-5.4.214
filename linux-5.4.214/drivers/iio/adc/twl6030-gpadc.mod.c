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
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xd6a91f54, "twl_i2c_read" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xe1f088fa, "iio_device_unregister" },
	{ 0x8f01afd6, "twl6030_interrupt_mask" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf9722676, "twl_i2c_write" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("of:N*T*Cti,twl6030-gpadc");
MODULE_ALIAS("of:N*T*Cti,twl6030-gpadcC*");
MODULE_ALIAS("of:N*T*Cti,twl6032-gpadc");
MODULE_ALIAS("of:N*T*Cti,twl6032-gpadcC*");

MODULE_INFO(srcversion, "2DAE8B58DD8DF2D9D64E475");
