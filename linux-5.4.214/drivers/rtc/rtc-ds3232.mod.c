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
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xf6dd8fef, "__spi_register_driver" },
	{ 0xc5850110, "printk" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xe21d630c, "spi_setup" },
	{ 0x61fbd9e4, "__devm_regmap_init_spi" },
	{ 0xb8b5aa45, "__devm_regmap_init_i2c" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x8d40871c, "device_set_wakeup_capable" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0xcd47c63, "rtc_nvmem_register" },
	{ 0xb13c162f, "devm_rtc_device_register" },
	{ 0xd15ff8ae, "devm_hwmon_device_register_with_info" },
	{ 0x4fc0c5ca, "device_init_wakeup" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x4eed1932, "rtc_update_irq" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x904a8908, "regmap_write" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xd9729ca4, "regmap_bulk_read" },
	{ 0xe2b72930, "regmap_bulk_write" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cdallas,ds3232");
MODULE_ALIAS("of:N*T*Cdallas,ds3232C*");
MODULE_ALIAS("i2c:ds3232");

MODULE_INFO(srcversion, "0C4A63875213CDA8BDEC6BF");
