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
	{ 0x2d3385d3, "system_wq" },
	{ 0x17a46ceb, "hid_sensor_batch_mode_supported" },
	{ 0x37029a28, "iio_trigger_unregister" },
	{ 0xfb4ec2db, "__pm_runtime_disable" },
	{ 0x18ed72f8, "__pm_runtime_use_autosuspend" },
	{ 0x7c60d490, "__pm_runtime_suspend" },
	{ 0x4f8114c2, "iio_trigger_alloc" },
	{ 0x2f3d6f2, "sensor_hub_get_feature" },
	{ 0xe9f610, "sensor_hub_device_open" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x8bdf333d, "__pm_runtime_resume" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x26f6b499, "iio_str_to_fixpoint" },
	{ 0xb80acd5a, "hid_sensor_read_poll_value" },
	{ 0x86ed4057, "sensor_hub_device_close" },
	{ 0xf8a25fcc, "__iio_trigger_register" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xba1a2568, "hid_sensor_get_usage_index" },
	{ 0x9962bc44, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb98c9772, "__pm_runtime_set_status" },
	{ 0x33fd4544, "sensor_hub_set_feature" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xe7a7a03f, "get_device" },
	{ 0x6f395e65, "__module_get" },
	{ 0xe5c65a12, "iio_trigger_free" },
	{ 0x3239a821, "iio_buffer_set_attrs" },
	{ 0x47a7be11, "hid_sensor_set_report_latency" },
	{ 0x11c66087, "pm_runtime_set_autosuspend_delay" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x8bcf12c1, "hid_sensor_get_report_latency" },
};

MODULE_INFO(depends, "hid-sensor-iio-common,industrialio,hid-sensor-hub");


MODULE_INFO(srcversion, "4AFA9D771A29970676E7FF4");
