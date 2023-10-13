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
	{ 0x37029a28, "iio_trigger_unregister" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x89d7a69d, "iio_trigger_notify_done" },
	{ 0x1643a127, "regulator_disable" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0x4f8114c2, "iio_trigger_alloc" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xd9729ca4, "regmap_bulk_read" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xab725c65, "iio_get_time_ns" },
	{ 0xaae840bf, "iio_trigger_poll_chained" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xf8a25fcc, "__iio_trigger_register" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xa2a28733, "iio_trigger_using_own" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xb662a539, "irq_get_irq_data" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x868b9359, "devm_regulator_get" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xe7a7a03f, "get_device" },
	{ 0x6f395e65, "__module_get" },
	{ 0xe5c65a12, "iio_trigger_free" },
	{ 0x37a0cba, "kfree" },
	{ 0x96848186, "scnprintf" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x19fd8cc1, "iio_push_to_buffers" },
	{ 0x904a8908, "regmap_write" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xfe543c51, "regulator_enable" },
};

MODULE_INFO(depends, "industrialio");


MODULE_INFO(srcversion, "316D533AD01AAA3226B8DA8");
