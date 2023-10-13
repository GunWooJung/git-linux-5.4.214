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
	{ 0x580e0b5c, "iio_enum_available_read" },
	{ 0xea6bc49f, "iio_enum_write" },
	{ 0x4802d671, "iio_enum_read" },
	{ 0x86f434e2, "driver_unregister" },
	{ 0xf6dd8fef, "__spi_register_driver" },
	{ 0x1a0f5952, "__devm_iio_device_register" },
	{ 0x33560c9e, "devm_add_action" },
	{ 0xfa3a3866, "iio_triggered_event_setup" },
	{ 0x5573a68c, "spi_get_device_id" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc4fb10cd, "gpiod_set_value_cansleep" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xa08d547b, "devm_gpiod_get" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x586583b8, "spi_sync" },
	{ 0x89d7a69d, "iio_trigger_notify_done" },
	{ 0xc706e0e9, "iio_push_event" },
	{ 0xab725c65, "iio_get_time_ns" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x391fccd6, "spi_write_then_read" },
	{ 0xc43b1a6f, "iio_triggered_event_cleanup" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-event");

MODULE_ALIAS("spi:hi8435");
MODULE_ALIAS("of:N*T*Cholt,hi8435");
MODULE_ALIAS("of:N*T*Cholt,hi8435C*");

MODULE_INFO(srcversion, "A0D4420A39FB40E22D7BB81");
