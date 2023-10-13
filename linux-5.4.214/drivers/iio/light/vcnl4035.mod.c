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
	{ 0xd3bc5fa0, "iio_read_const_attr" },
	{ 0xc96ebfb3, "iio_validate_scan_mask_onehot" },
	{ 0xb2400ab0, "pm_runtime_force_resume" },
	{ 0xe54f5faf, "pm_runtime_force_suspend" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0xb4e1369f, "iio_device_release_direct_mode" },
	{ 0x3ccdc02b, "iio_device_claim_direct_mode" },
	{ 0x7c60d490, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x8bdf333d, "__pm_runtime_resume" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x89d7a69d, "iio_trigger_notify_done" },
	{ 0x19fd8cc1, "iio_push_to_buffers" },
	{ 0xaae840bf, "iio_trigger_poll_chained" },
	{ 0xc706e0e9, "iio_push_event" },
	{ 0xab725c65, "iio_get_time_ns" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x11c66087, "pm_runtime_set_autosuspend_delay" },
	{ 0x9962bc44, "pm_runtime_enable" },
	{ 0xab1b6c43, "__iio_device_register" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0xde9bbbb0, "devm_iio_triggered_buffer_setup" },
	{ 0x3db6d27, "__devm_iio_trigger_register" },
	{ 0x549b800a, "devm_iio_trigger_alloc" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0xb8b5aa45, "__devm_regmap_init_i2c" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0x904a8908, "regmap_write" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x8c41dd8e, "regcache_mark_dirty" },
	{ 0xf9a482f9, "msleep" },
	{ 0x532a4e22, "regcache_sync" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0xb98c9772, "__pm_runtime_set_status" },
	{ 0xe1f088fa, "iio_device_unregister" },
	{ 0xfb4ec2db, "__pm_runtime_disable" },
	{ 0x18ed72f8, "__pm_runtime_use_autosuspend" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");

MODULE_ALIAS("of:N*T*Cvishay,vcnl4035");
MODULE_ALIAS("of:N*T*Cvishay,vcnl4035C*");

MODULE_INFO(srcversion, "4EA2528EF0806AF40E39F51");
