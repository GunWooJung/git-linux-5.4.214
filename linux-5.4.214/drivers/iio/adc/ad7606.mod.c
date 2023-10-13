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
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0x89d7a69d, "iio_trigger_notify_done" },
	{ 0x1643a127, "regulator_disable" },
	{ 0xa08d547b, "devm_gpiod_get" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xab725c65, "iio_get_time_ns" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaae840bf, "iio_trigger_poll_chained" },
	{ 0x549b800a, "devm_iio_trigger_alloc" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x88095edc, "devm_gpiod_get_array_optional" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0xed9d766e, "iio_triggered_buffer_postenable" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x1a0f5952, "__devm_iio_device_register" },
	{ 0x3db6d27, "__devm_iio_trigger_register" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x4b0530f9, "iio_trigger_validate_own_device" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x3ccdc02b, "iio_device_claim_direct_mode" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x33560c9e, "devm_add_action" },
	{ 0x868b9359, "devm_regulator_get" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb813aac1, "iio_triggered_buffer_predisable" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xe7a7a03f, "get_device" },
	{ 0x6f395e65, "__module_get" },
	{ 0x2bf355c4, "devm_gpiod_get_optional" },
	{ 0x2048bf8c, "gpiod_get_value" },
	{ 0xb4e1369f, "iio_device_release_direct_mode" },
	{ 0xde9bbbb0, "devm_iio_triggered_buffer_setup" },
	{ 0x96848186, "scnprintf" },
	{ 0x19fd8cc1, "iio_push_to_buffers" },
	{ 0x29361773, "complete" },
	{ 0xe23f1472, "gpiod_set_value" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x30257c84, "gpiod_set_array_value" },
	{ 0x61853e9a, "device_property_present" },
	{ 0xfe543c51, "regulator_enable" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");


MODULE_INFO(srcversion, "48342A4841B6A9835BFD131");
