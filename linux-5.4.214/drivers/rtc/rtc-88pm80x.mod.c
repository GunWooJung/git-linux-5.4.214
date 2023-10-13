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
	{ 0xc1514a3b, "free_irq" },
	{ 0x4fc0c5ca, "device_init_wakeup" },
	{ 0x8804d3fc, "__rtc_register_device" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x55784228, "regmap_irq_get_virq" },
	{ 0xe10f5c53, "devm_rtc_allocate_device" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x4eed1932, "rtc_update_irq" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0x9741de30, "regmap_raw_write" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0x3c50fe65, "regmap_raw_read" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0x7e73a43b, "platform_get_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "CFFD107D93777BA1C6DB98A");
