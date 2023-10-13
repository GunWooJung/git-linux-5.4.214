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
	{ 0xd3bc5fa0, "iio_read_const_attr" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x89d7a69d, "iio_trigger_notify_done" },
	{ 0x19fd8cc1, "iio_push_to_buffers" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x1a0f5952, "__devm_iio_device_register" },
	{ 0x6f395e65, "__module_get" },
	{ 0xe7a7a03f, "get_device" },
	{ 0x3db6d27, "__devm_iio_trigger_register" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x2d6bcdcb, "iio_trigger_generic_data_rdy_poll" },
	{ 0x549b800a, "devm_iio_trigger_alloc" },
	{ 0xde9bbbb0, "devm_iio_triggered_buffer_setup" },
	{ 0xdf76bbeb, "iio_pollfunc_store_time" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xb8b5aa45, "__devm_regmap_init_i2c" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd9729ca4, "regmap_bulk_read" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x904a8908, "regmap_write" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");

MODULE_ALIAS("i2c:mxc4005");
MODULE_ALIAS("acpi*:MXC4005:*");

MODULE_INFO(srcversion, "E3DC46612DCE9D61A107A73");
