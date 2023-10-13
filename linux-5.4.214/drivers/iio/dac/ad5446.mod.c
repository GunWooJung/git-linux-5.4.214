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
	{ 0x580e0b5c, "iio_enum_available_read" },
	{ 0xea6bc49f, "iio_enum_write" },
	{ 0x4802d671, "iio_enum_read" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0x86f434e2, "driver_unregister" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0xf6dd8fef, "__spi_register_driver" },
	{ 0x586583b8, "spi_sync" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4fc58c0c, "i2c_transfer_buffer_flags" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x5573a68c, "spi_get_device_id" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xab1b6c43, "__iio_device_register" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0x4853215d, "regulator_get_voltage" },
	{ 0xfe543c51, "regulator_enable" },
	{ 0x868b9359, "devm_regulator_get" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x1643a127, "regulator_disable" },
	{ 0xe1f088fa, "iio_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("i2c:ad5301");
MODULE_ALIAS("i2c:ad5311");
MODULE_ALIAS("i2c:ad5321");
MODULE_ALIAS("i2c:ad5602");
MODULE_ALIAS("i2c:ad5612");
MODULE_ALIAS("i2c:ad5622");
MODULE_ALIAS("spi:ad5300");
MODULE_ALIAS("spi:ad5310");
MODULE_ALIAS("spi:ad5320");
MODULE_ALIAS("spi:ad5444");
MODULE_ALIAS("spi:ad5446");
MODULE_ALIAS("spi:ad5450");
MODULE_ALIAS("spi:ad5451");
MODULE_ALIAS("spi:ad5452");
MODULE_ALIAS("spi:ad5453");
MODULE_ALIAS("spi:ad5512a");
MODULE_ALIAS("spi:ad5541a");
MODULE_ALIAS("spi:ad5542a");
MODULE_ALIAS("spi:ad5543");
MODULE_ALIAS("spi:ad5553");
MODULE_ALIAS("spi:ad5600");
MODULE_ALIAS("spi:ad5601");
MODULE_ALIAS("spi:ad5611");
MODULE_ALIAS("spi:ad5621");
MODULE_ALIAS("spi:ad5641");
MODULE_ALIAS("spi:ad5620-2500");
MODULE_ALIAS("spi:ad5620-1250");
MODULE_ALIAS("spi:ad5640-2500");
MODULE_ALIAS("spi:ad5640-1250");
MODULE_ALIAS("spi:ad5660-2500");
MODULE_ALIAS("spi:ad5660-1250");
MODULE_ALIAS("spi:ad5662");
MODULE_ALIAS("spi:dac081s101");
MODULE_ALIAS("spi:dac101s101");
MODULE_ALIAS("spi:dac121s101");
MODULE_ALIAS("spi:dac7512");

MODULE_INFO(srcversion, "96458060378ABB998ED9C41");
