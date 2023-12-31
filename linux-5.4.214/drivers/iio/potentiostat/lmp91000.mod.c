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
	{ 0x9a4c322, "_dev_err" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x549b800a, "devm_iio_trigger_alloc" },
	{ 0xb8b5aa45, "__devm_regmap_init_i2c" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x12a38747, "usleep_range" },
	{ 0xd2c39a87, "iio_convert_raw_to_processed" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xaae840bf, "iio_trigger_poll_chained" },
	{ 0x904a8908, "regmap_write" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0x11f782b0, "iio_read_channel_scale" },
	{ 0xf8038b0e, "iio_read_channel_offset" },
	{ 0x7a711aef, "iio_channel_start_all_cb" },
	{ 0x37029a28, "iio_trigger_unregister" },
	{ 0x71349cdc, "iio_triggered_buffer_cleanup" },
	{ 0x267c0508, "iio_channel_release_all_cb" },
	{ 0x2a1fab3c, "iio_channel_stop_all_cb" },
	{ 0xe1f088fa, "iio_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,industrialio-buffer-cb,industrialio-triggered-buffer");

MODULE_ALIAS("i2c:lmp91000");
MODULE_ALIAS("i2c:lmp91002");
MODULE_ALIAS("of:N*T*Cti,lmp91000");
MODULE_ALIAS("of:N*T*Cti,lmp91000C*");
MODULE_ALIAS("of:N*T*Cti,lmp91002");
MODULE_ALIAS("of:N*T*Cti,lmp91002C*");

MODULE_INFO(srcversion, "2618681CF55DB57953CD5F3");
