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
	{ 0x5ae8a115, "noop_llseek" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x86ed4057, "sensor_hub_device_close" },
	{ 0xe9f610, "sensor_hub_device_open" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4578f528, "__kfifo_to_user" },
	{ 0x6932b09e, "stream_open" },
	{ 0x4b2e0ffe, "misc_register" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0xa483a6ea, "sensor_hub_register_callback" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x50a90e8d, "bsearch" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2f3d6f2, "sensor_hub_get_feature" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbcae5d8b, "sensor_hub_input_attr_get_raw_value" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x2d704e25, "sensor_hub_remove_callback" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x35775925, "misc_deregister" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x33fd4544, "sensor_hub_set_feature" },
	{ 0xba1a2568, "hid_sensor_get_usage_index" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hid-sensor-hub");

MODULE_ALIAS("platform:HID-SENSOR-2000e1");
MODULE_ALIAS("platform:HID-SENSOR-2000e2");

MODULE_INFO(srcversion, "E72EBFC4C4D338D9FAECBB0");
