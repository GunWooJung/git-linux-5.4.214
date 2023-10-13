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
	{ 0xb813aac1, "iio_triggered_buffer_predisable" },
	{ 0xed9d766e, "iio_triggered_buffer_postenable" },
	{ 0x4b0530f9, "iio_trigger_validate_own_device" },
	{ 0x86f434e2, "driver_unregister" },
	{ 0xf6dd8fef, "__spi_register_driver" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x89d7a69d, "iio_trigger_notify_done" },
	{ 0x19fd8cc1, "iio_push_to_buffers" },
	{ 0x586583b8, "spi_sync" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x1a0f5952, "__devm_iio_device_register" },
	{ 0xde9bbbb0, "devm_iio_triggered_buffer_setup" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0x3db6d27, "__devm_iio_trigger_register" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x549b800a, "devm_iio_trigger_alloc" },
	{ 0x2bf355c4, "devm_gpiod_get_optional" },
	{ 0xec688f13, "devm_regulator_bulk_get" },
	{ 0x6164d63, "devm_clk_get" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0x5573a68c, "spi_get_device_id" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x4853215d, "regulator_get_voltage" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xeb94b6dd, "regulator_bulk_enable" },
	{ 0x5bb6172e, "regulator_bulk_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe23f1472, "gpiod_set_value" },
	{ 0x533bfe53, "iio_trigger_poll" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");

MODULE_ALIAS("spi:ad7766");
MODULE_ALIAS("spi:ad7766-1");
MODULE_ALIAS("spi:ad7766-2");
MODULE_ALIAS("spi:ad7767");
MODULE_ALIAS("spi:ad7767-1");
MODULE_ALIAS("spi:ad7767-2");

MODULE_INFO(srcversion, "06FDF640E622E5FE49215E8");
