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
	{ 0xd3bc5fa0, "iio_read_const_attr" },
	{ 0x580e0b5c, "iio_enum_available_read" },
	{ 0xea6bc49f, "iio_enum_write" },
	{ 0x4802d671, "iio_enum_read" },
	{ 0x86f434e2, "driver_unregister" },
	{ 0xf6dd8fef, "__spi_register_driver" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x586583b8, "spi_sync" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xab1b6c43, "__iio_device_register" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x5573a68c, "spi_get_device_id" },
	{ 0x4853215d, "regulator_get_voltage" },
	{ 0xfe543c51, "regulator_enable" },
	{ 0x868b9359, "devm_regulator_get" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0x1643a127, "regulator_disable" },
	{ 0xe1f088fa, "iio_device_unregister" },
	{ 0xc706e0e9, "iio_push_event" },
	{ 0xab725c65, "iio_get_time_ns" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("spi:ad5504");
MODULE_ALIAS("spi:ad5501");

MODULE_INFO(srcversion, "E15ACA1AA7C4B50030674DE");
