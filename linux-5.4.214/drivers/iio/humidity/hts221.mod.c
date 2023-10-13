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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x89d7a69d, "iio_trigger_notify_done" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0xd9729ca4, "regmap_bulk_read" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xab725c65, "iio_get_time_ns" },
	{ 0xaae840bf, "iio_trigger_poll_chained" },
	{ 0x549b800a, "devm_iio_trigger_alloc" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xed9d766e, "iio_triggered_buffer_postenable" },
	{ 0x1a0f5952, "__devm_iio_device_register" },
	{ 0x3db6d27, "__devm_iio_trigger_register" },
	{ 0xb662a539, "irq_get_irq_data" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x3ccdc02b, "iio_device_claim_direct_mode" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb813aac1, "iio_triggered_buffer_predisable" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe7a7a03f, "get_device" },
	{ 0x6f395e65, "__module_get" },
	{ 0xb4e1369f, "iio_device_release_direct_mode" },
	{ 0xde9bbbb0, "devm_iio_triggered_buffer_setup" },
	{ 0x96848186, "scnprintf" },
	{ 0x19fd8cc1, "iio_push_to_buffers" },
	{ 0x51765820, "devm_request_threaded_irq" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");


MODULE_INFO(srcversion, "872AD95AF57030BB4D2802C");
