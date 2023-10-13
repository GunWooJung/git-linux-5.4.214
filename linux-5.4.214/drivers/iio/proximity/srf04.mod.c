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
	{ 0x9a4c322, "_dev_err" },
	{ 0x1a0f5952, "__devm_iio_device_register" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0xef3fd222, "gpiod_to_irq" },
	{ 0x322c2f92, "gpiod_cansleep" },
	{ 0xa08d547b, "devm_gpiod_get" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0x29361773, "complete" },
	{ 0x2048bf8c, "gpiod_get_value" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x917490b, "wait_for_completion_killable_timeout" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xe23f1472, "gpiod_set_value" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("of:N*T*Cdevantech,srf04");
MODULE_ALIAS("of:N*T*Cdevantech,srf04C*");
MODULE_ALIAS("of:N*T*Cmaxbotix,mb1000");
MODULE_ALIAS("of:N*T*Cmaxbotix,mb1000C*");
MODULE_ALIAS("of:N*T*Cmaxbotix,mb1010");
MODULE_ALIAS("of:N*T*Cmaxbotix,mb1010C*");
MODULE_ALIAS("of:N*T*Cmaxbotix,mb1020");
MODULE_ALIAS("of:N*T*Cmaxbotix,mb1020C*");
MODULE_ALIAS("of:N*T*Cmaxbotix,mb1030");
MODULE_ALIAS("of:N*T*Cmaxbotix,mb1030C*");
MODULE_ALIAS("of:N*T*Cmaxbotix,mb1040");
MODULE_ALIAS("of:N*T*Cmaxbotix,mb1040C*");

MODULE_INFO(srcversion, "D06A583B6461F47230EE432");
