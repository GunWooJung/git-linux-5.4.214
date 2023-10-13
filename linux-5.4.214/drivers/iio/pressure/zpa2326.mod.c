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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xe5b6e9e8, "__pm_runtime_idle" },
	{ 0xe54f5faf, "pm_runtime_force_suspend" },
	{ 0xfb4ec2db, "__pm_runtime_disable" },
	{ 0x18ed72f8, "__pm_runtime_use_autosuspend" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xd3bc5fa0, "iio_read_const_attr" },
	{ 0x7c60d490, "__pm_runtime_suspend" },
	{ 0x89d7a69d, "iio_trigger_notify_done" },
	{ 0x1643a127, "regulator_disable" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xd9729ca4, "regmap_bulk_read" },
	{ 0xb2400ab0, "pm_runtime_force_resume" },
	{ 0x8bdf333d, "__pm_runtime_resume" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0xe1f088fa, "iio_device_unregister" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xab725c65, "iio_get_time_ns" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaae840bf, "iio_trigger_poll_chained" },
	{ 0x549b800a, "devm_iio_trigger_alloc" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0xed9d766e, "iio_triggered_buffer_postenable" },
	{ 0x3db6d27, "__devm_iio_trigger_register" },
	{ 0xa2a28733, "iio_trigger_using_own" },
	{ 0xab1b6c43, "__iio_device_register" },
	{ 0xb1c28310, "pm_runtime_autosuspend_expiration" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x3ccdc02b, "iio_device_claim_direct_mode" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x868b9359, "devm_regulator_get" },
	{ 0x12a38747, "usleep_range" },
	{ 0x9962bc44, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb98c9772, "__pm_runtime_set_status" },
	{ 0xb813aac1, "iio_triggered_buffer_predisable" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xb4e1369f, "iio_device_release_direct_mode" },
	{ 0xde9bbbb0, "devm_iio_triggered_buffer_setup" },
	{ 0x19fd8cc1, "iio_push_to_buffers" },
	{ 0x11c66087, "pm_runtime_set_autosuspend_delay" },
	{ 0x29361773, "complete" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x904a8908, "regmap_write" },
	{ 0xfe543c51, "regulator_enable" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");


MODULE_INFO(srcversion, "4FEBA882C862892BA7C1951");
