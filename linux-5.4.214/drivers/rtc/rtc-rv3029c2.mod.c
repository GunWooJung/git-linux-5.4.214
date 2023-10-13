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
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x61fbd9e4, "__devm_regmap_init_spi" },
	{ 0xb8b5aa45, "__devm_regmap_init_i2c" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0xb13c162f, "devm_rtc_device_register" },
	{ 0x983c8c67, "devm_hwmon_device_register_with_groups" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x12a38747, "usleep_range" },
	{ 0x4eed1932, "rtc_update_irq" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xe2b72930, "regmap_bulk_write" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd9729ca4, "regmap_bulk_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmicrocrystal,rv3029");
MODULE_ALIAS("of:N*T*Cmicrocrystal,rv3029C*");
MODULE_ALIAS("of:N*T*Crv3029");
MODULE_ALIAS("of:N*T*Crv3029C*");
MODULE_ALIAS("of:N*T*Crv3029c2");
MODULE_ALIAS("of:N*T*Crv3029c2C*");
MODULE_ALIAS("of:N*T*Cmc,rv3029c2");
MODULE_ALIAS("of:N*T*Cmc,rv3029c2C*");
MODULE_ALIAS("i2c:rv3029");
MODULE_ALIAS("i2c:rv3029c2");

MODULE_INFO(srcversion, "2FC92EE5461669DB46338F4");
