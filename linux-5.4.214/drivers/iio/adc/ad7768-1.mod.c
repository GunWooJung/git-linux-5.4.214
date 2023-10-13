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
	{ 0x4b0530f9, "iio_trigger_validate_own_device" },
	{ 0x86f434e2, "driver_unregister" },
	{ 0xf6dd8fef, "__spi_register_driver" },
	{ 0xb4e1369f, "iio_device_release_direct_mode" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x3ccdc02b, "iio_device_claim_direct_mode" },
	{ 0x4853215d, "regulator_get_voltage" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x89d7a69d, "iio_trigger_notify_done" },
	{ 0x19fd8cc1, "iio_push_to_buffers" },
	{ 0xab725c65, "iio_get_time_ns" },
	{ 0xed9d766e, "iio_triggered_buffer_postenable" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xa08d547b, "devm_gpiod_get" },
	{ 0x815588a6, "clk_enable" },
	{ 0x1a0f5952, "__devm_iio_device_register" },
	{ 0xde9bbbb0, "devm_iio_triggered_buffer_setup" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6f395e65, "__module_get" },
	{ 0xe7a7a03f, "get_device" },
	{ 0x3db6d27, "__devm_iio_trigger_register" },
	{ 0x549b800a, "devm_iio_trigger_alloc" },
	{ 0x5573a68c, "spi_get_device_id" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x6164d63, "devm_clk_get" },
	{ 0x33560c9e, "devm_add_action" },
	{ 0xfe543c51, "regulator_enable" },
	{ 0x868b9359, "devm_regulator_get" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0xe23f1472, "gpiod_set_value" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x586583b8, "spi_sync" },
	{ 0x1643a127, "regulator_disable" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x96848186, "scnprintf" },
	{ 0x29361773, "complete" },
	{ 0x533bfe53, "iio_trigger_poll" },
	{ 0xb813aac1, "iio_triggered_buffer_predisable" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x391fccd6, "spi_write_then_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");

MODULE_ALIAS("of:N*T*Cadi,ad7768-1");
MODULE_ALIAS("of:N*T*Cadi,ad7768-1C*");
MODULE_ALIAS("spi:ad7768-1");

MODULE_INFO(srcversion, "AA26FD6BB0DCB1B51C49E8A");
