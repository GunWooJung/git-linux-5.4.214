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
	{ 0x61d19c6, "__devm_regmap_init" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x5573a68c, "spi_get_device_id" },
	{ 0x61fbd9e4, "__devm_regmap_init_spi" },
	{ 0xcd47c63, "rtc_nvmem_register" },
	{ 0x8804d3fc, "__rtc_register_device" },
	{ 0x9fb3106c, "rtc_add_group" },
	{ 0x70648c92, "devm_watchdog_register_device" },
	{ 0xe10f5c53, "devm_rtc_allocate_device" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0x5838f6c9, "rtc_valid_tm" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0xd9729ca4, "regmap_bulk_read" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe2b72930, "regmap_bulk_write" },
	{ 0x904a8908, "regmap_write" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4fc58c0c, "i2c_transfer_buffer_flags" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("spi:pcf2127");
MODULE_ALIAS("spi:pcf2129");
MODULE_ALIAS("i2c:pcf2127");
MODULE_ALIAS("i2c:pcf2129");

MODULE_INFO(srcversion, "BE60B1D00E6D77AEC0E78E1");
