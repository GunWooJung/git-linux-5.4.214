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
	{ 0x4eed1932, "rtc_update_irq" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x2b7179da, "platform_get_irq_byname" },
	{ 0xb13c162f, "devm_rtc_device_register" },
	{ 0x4fc0c5ca, "device_init_wakeup" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0x5838f6c9, "rtc_valid_tm" },
	{ 0xd9729ca4, "regmap_bulk_read" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9741de30, "regmap_raw_write" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E3738684CEDDAB913C63086");