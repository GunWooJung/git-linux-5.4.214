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
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0xed9d766e, "iio_triggered_buffer_postenable" },
	{ 0xe1f088fa, "iio_device_unregister" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb4e1369f, "iio_device_release_direct_mode" },
	{ 0x8bdf333d, "__pm_runtime_resume" },
	{ 0x3ccdc02b, "iio_device_claim_direct_mode" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x19fd8cc1, "iio_push_to_buffers" },
	{ 0xab725c65, "iio_get_time_ns" },
	{ 0x89d7a69d, "iio_trigger_notify_done" },
	{ 0xfb4ec2db, "__pm_runtime_disable" },
	{ 0x37029a28, "iio_trigger_unregister" },
	{ 0x71349cdc, "iio_triggered_buffer_cleanup" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xab1b6c43, "__iio_device_register" },
	{ 0x18ed72f8, "__pm_runtime_use_autosuspend" },
	{ 0x11c66087, "pm_runtime_set_autosuspend_delay" },
	{ 0x9962bc44, "pm_runtime_enable" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0xb8f1db1b, "iio_triggered_buffer_setup" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0xf8a25fcc, "__iio_trigger_register" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb98c9772, "__pm_runtime_set_status" },
	{ 0xb8b5aa45, "__devm_regmap_init_i2c" },
	{ 0x549b800a, "devm_iio_trigger_alloc" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xd9729ca4, "regmap_bulk_read" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe2b72930, "regmap_bulk_write" },
	{ 0x7c60d490, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0xb813aac1, "iio_triggered_buffer_predisable" },
	{ 0x533bfe53, "iio_trigger_poll" },
	{ 0x904a8908, "regmap_write" },
	{ 0xcfb5871c, "irq_work_queue" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");

MODULE_ALIAS("of:N*T*Catlas,ph-sm");
MODULE_ALIAS("of:N*T*Catlas,ph-smC*");
MODULE_ALIAS("of:N*T*Catlas,ec-sm");
MODULE_ALIAS("of:N*T*Catlas,ec-smC*");
MODULE_ALIAS("of:N*T*Catlas,orp-sm");
MODULE_ALIAS("of:N*T*Catlas,orp-smC*");
MODULE_ALIAS("i2c:atlas-ph-sm");
MODULE_ALIAS("i2c:atlas-ec-sm");
MODULE_ALIAS("i2c:atlas-orp-sm");

MODULE_INFO(srcversion, "C72E1B32E8F9507E2288DC4");
