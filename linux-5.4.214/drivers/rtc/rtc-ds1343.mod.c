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
	{ 0x86f434e2, "driver_unregister" },
	{ 0xf6dd8fef, "__spi_register_driver" },
	{ 0x4faff24, "dev_pm_set_wake_irq" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x5748356e, "device_create_file" },
	{ 0xcd47c63, "rtc_nvmem_register" },
	{ 0x8804d3fc, "__rtc_register_device" },
	{ 0xe10f5c53, "devm_rtc_allocate_device" },
	{ 0x61fbd9e4, "__devm_regmap_init_spi" },
	{ 0xe21d630c, "spi_setup" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xd9729ca4, "regmap_bulk_read" },
	{ 0xe2b72930, "regmap_bulk_write" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x4eed1932, "rtc_update_irq" },
	{ 0x904a8908, "regmap_write" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0x7cf7aeda, "devm_free_irq" },
	{ 0x4fc0c5ca, "device_init_wakeup" },
	{ 0xd44eede4, "dev_pm_clear_wake_irq" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x174e203e, "device_remove_file" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("spi:ds1343");
MODULE_ALIAS("spi:ds1344");

MODULE_INFO(srcversion, "AB1A8A7627FCF702AC72682");
