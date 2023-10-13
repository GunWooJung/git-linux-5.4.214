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
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x19fd8cc1, "iio_push_to_buffers" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x89d7a69d, "iio_trigger_notify_done" },
	{ 0xab1b6c43, "__iio_device_register" },
	{ 0xb8f1db1b, "iio_triggered_buffer_setup" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x2d6bcdcb, "iio_trigger_generic_data_rdy_poll" },
	{ 0xf8a25fcc, "__iio_trigger_register" },
	{ 0x549b800a, "devm_iio_trigger_alloc" },
	{ 0xcfb181dc, "regmap_multi_reg_write" },
	{ 0x904a8908, "regmap_write" },
	{ 0x868b9359, "devm_regulator_get" },
	{ 0xb976d5bb, "devm_regmap_field_alloc" },
	{ 0x61fbd9e4, "__devm_regmap_init_spi" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0x96848186, "scnprintf" },
	{ 0x4dce7dd4, "iio_format_value" },
	{ 0x26f6b499, "iio_str_to_fixpoint" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x28ed4c3b, "regmap_field_read" },
	{ 0x391fccd6, "spi_write_then_read" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x1e5060cf, "regmap_field_update_bits_base" },
	{ 0x37029a28, "iio_trigger_unregister" },
	{ 0x71349cdc, "iio_triggered_buffer_cleanup" },
	{ 0xe1f088fa, "iio_device_unregister" },
	{ 0x1643a127, "regulator_disable" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0xfe543c51, "regulator_enable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");

MODULE_ALIAS("spi:afe4403");
MODULE_ALIAS("of:N*T*Cti,afe4403");
MODULE_ALIAS("of:N*T*Cti,afe4403C*");

MODULE_INFO(srcversion, "1DD7205EE08E64D1A5D0159");
