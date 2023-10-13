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
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x89d7a69d, "iio_trigger_notify_done" },
	{ 0x19fd8cc1, "iio_push_to_buffers" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xb4e1369f, "iio_device_release_direct_mode" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x3ccdc02b, "iio_device_claim_direct_mode" },
	{ 0xab1b6c43, "__iio_device_register" },
	{ 0xf8a25fcc, "__iio_trigger_register" },
	{ 0x549b800a, "devm_iio_trigger_alloc" },
	{ 0xb8f1db1b, "iio_triggered_buffer_setup" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb8b5aa45, "__devm_regmap_init_i2c" },
	{ 0xfe543c51, "regulator_enable" },
	{ 0x868b9359, "devm_regulator_get" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0xed9d766e, "iio_triggered_buffer_postenable" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x37a0cba, "kfree" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xb813aac1, "iio_triggered_buffer_predisable" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc706e0e9, "iio_push_event" },
	{ 0xab725c65, "iio_get_time_ns" },
	{ 0xd9729ca4, "regmap_bulk_read" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x904a8908, "regmap_write" },
	{ 0xcfb5871c, "irq_work_queue" },
	{ 0xe2b72930, "regmap_bulk_write" },
	{ 0x533bfe53, "iio_trigger_poll" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x1643a127, "regulator_disable" },
	{ 0x71349cdc, "iio_triggered_buffer_cleanup" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x37029a28, "iio_trigger_unregister" },
	{ 0xe1f088fa, "iio_device_unregister" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");

MODULE_ALIAS("i2c:gp2ap020a00f");

MODULE_INFO(srcversion, "DB77A13FF3A3B4A74754D5F");
