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
	{ 0x86f434e2, "driver_unregister" },
	{ 0xf6dd8fef, "__spi_register_driver" },
	{ 0x19fd8cc1, "iio_push_to_buffers" },
	{ 0x89d7a69d, "iio_trigger_notify_done" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb4e1369f, "iio_device_release_direct_mode" },
	{ 0x586583b8, "spi_sync" },
	{ 0x3ccdc02b, "iio_device_claim_direct_mode" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xab1b6c43, "__iio_device_register" },
	{ 0xb8f1db1b, "iio_triggered_buffer_setup" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0x5573a68c, "spi_get_device_id" },
	{ 0x9ba2bb2b, "gpio_request_array" },
	{ 0x4853215d, "regulator_get_voltage" },
	{ 0xfe543c51, "regulator_enable" },
	{ 0xf1a50cbd, "devm_regulator_get_optional" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xffb817fb, "gpiod_set_raw_value" },
	{ 0xf37d2c0b, "gpio_to_desc" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xb0d1656c, "gpio_free_array" },
	{ 0x1643a127, "regulator_disable" },
	{ 0x71349cdc, "iio_triggered_buffer_cleanup" },
	{ 0xe1f088fa, "iio_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");

MODULE_ALIAS("spi:ad7265");
MODULE_ALIAS("spi:ad7266");

MODULE_INFO(srcversion, "3510ABF73A1093F48F3F3B3");
