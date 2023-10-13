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
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x8804d3fc, "__rtc_register_device" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x2b7179da, "platform_get_irq_byname" },
	{ 0xe10f5c53, "devm_rtc_allocate_device" },
	{ 0x8be86773, "dev_get_regmap" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0xd9729ca4, "regmap_bulk_read" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xe2b72930, "regmap_bulk_write" },
	{ 0x4eed1932, "rtc_update_irq" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cdlg,da9063-rtc");
MODULE_ALIAS("of:N*T*Cdlg,da9063-rtcC*");
MODULE_ALIAS("of:N*T*Cdlg,da9062-rtc");
MODULE_ALIAS("of:N*T*Cdlg,da9062-rtcC*");

MODULE_INFO(srcversion, "1C5AC0C7E7BA07BDEEBB9DA");
