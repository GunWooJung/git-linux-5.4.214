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
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x1e72aaca, "gpiod_set_debounce" },
	{ 0x403f9529, "gpio_request_one" },
	{ 0x4e97c8d9, "input_free_device" },
	{ 0xca944cd, "devm_kfree" },
	{ 0x4fc0c5ca, "device_init_wakeup" },
	{ 0x94a09154, "input_register_device" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x4c4b17c2, "hwmon_device_register_with_groups" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x8378e785, "regulator_get" },
	{ 0x6a0ea99a, "touchscreen_parse_properties" },
	{ 0xd4419732, "input_set_abs_params" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x4f55cb4, "input_allocate_device" },
	{ 0xe21d630c, "spi_setup" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xfe990052, "gpio_free" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x37a0cba, "kfree" },
	{ 0x74130e69, "regulator_put" },
	{ 0xd3f5b56e, "hwmon_device_unregister" },
	{ 0x2ab40469, "input_unregister_device" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x1643a127, "regulator_disable" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xfe543c51, "regulator_enable" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x33e16627, "touchscreen_report_pos" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x586583b8, "spi_sync" },
	{ 0xf9a482f9, "msleep" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xfe88309f, "gpiod_get_raw_value" },
	{ 0xf37d2c0b, "gpio_to_desc" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x66c54ff1, "input_event" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "4CD2681A3694442C2EAD082");
