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
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xeee38cc9, "acpi_match_device" },
	{ 0x9fb3106c, "rtc_add_group" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x8d40871c, "device_set_wakeup_capable" },
	{ 0xcd47c63, "rtc_nvmem_register" },
	{ 0x983c8c67, "devm_hwmon_device_register_with_groups" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x61853e9a, "device_property_present" },
	{ 0xacdeb71f, "device_property_read_u32_array" },
	{ 0x8804d3fc, "__rtc_register_device" },
	{ 0xe10f5c53, "devm_rtc_allocate_device" },
	{ 0xb8b5aa45, "__devm_regmap_init_i2c" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x4c12b82d, "devm_clk_register" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x96848186, "scnprintf" },
	{ 0x4eed1932, "rtc_update_irq" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0x904a8908, "regmap_write" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0xe2b72930, "regmap_bulk_write" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd9729ca4, "regmap_bulk_read" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:DS1307:*");
MODULE_ALIAS("acpi*:DS1308:*");
MODULE_ALIAS("acpi*:DS1337:*");
MODULE_ALIAS("acpi*:DS1338:*");
MODULE_ALIAS("acpi*:DS1339:*");
MODULE_ALIAS("acpi*:DS1388:*");
MODULE_ALIAS("acpi*:DS1340:*");
MODULE_ALIAS("acpi*:DS1341:*");
MODULE_ALIAS("acpi*:DS3231:*");
MODULE_ALIAS("acpi*:M41T0:*");
MODULE_ALIAS("acpi*:M41T00:*");
MODULE_ALIAS("acpi*:M41T11:*");
MODULE_ALIAS("acpi*:MCP7940X:*");
MODULE_ALIAS("acpi*:MCP7941X:*");
MODULE_ALIAS("acpi*:PT7C4338:*");
MODULE_ALIAS("acpi*:RX8025:*");
MODULE_ALIAS("acpi*:ISL12057:*");
MODULE_ALIAS("acpi*:RX8130:*");
MODULE_ALIAS("i2c:ds1307");
MODULE_ALIAS("i2c:ds1308");
MODULE_ALIAS("i2c:ds1337");
MODULE_ALIAS("i2c:ds1338");
MODULE_ALIAS("i2c:ds1339");
MODULE_ALIAS("i2c:ds1388");
MODULE_ALIAS("i2c:ds1340");
MODULE_ALIAS("i2c:ds1341");
MODULE_ALIAS("i2c:ds3231");
MODULE_ALIAS("i2c:m41t0");
MODULE_ALIAS("i2c:m41t00");
MODULE_ALIAS("i2c:m41t11");
MODULE_ALIAS("i2c:mcp7940x");
MODULE_ALIAS("i2c:mcp7941x");
MODULE_ALIAS("i2c:pt7c4338");
MODULE_ALIAS("i2c:rx8025");
MODULE_ALIAS("i2c:isl12057");
MODULE_ALIAS("i2c:rx8130");

MODULE_INFO(srcversion, "5CB541D46257578D6701A12");
