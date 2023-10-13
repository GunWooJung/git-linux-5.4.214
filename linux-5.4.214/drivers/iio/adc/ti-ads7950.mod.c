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
	{ 0x9a4c322, "_dev_err" },
	{ 0x52ac9eed, "gpiochip_add_data_with_key" },
	{ 0xab1b6c43, "__iio_device_register" },
	{ 0xb8f1db1b, "iio_triggered_buffer_setup" },
	{ 0xfe543c51, "regulator_enable" },
	{ 0x868b9359, "devm_regulator_get" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x15cb5620, "is_acpi_device_node" },
	{ 0x5573a68c, "spi_get_device_id" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0xe21d630c, "spi_setup" },
	{ 0x4853215d, "regulator_get_voltage" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x89d7a69d, "iio_trigger_notify_done" },
	{ 0x19fd8cc1, "iio_push_to_buffers" },
	{ 0xab725c65, "iio_get_time_ns" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x586583b8, "spi_sync" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x787bfb4b, "gpiochip_get_data" },
	{ 0x1643a127, "regulator_disable" },
	{ 0x71349cdc, "iio_triggered_buffer_cleanup" },
	{ 0xe1f088fa, "iio_device_unregister" },
	{ 0xf4b0582f, "gpiochip_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");

MODULE_ALIAS("of:N*T*Cti,ads7950");
MODULE_ALIAS("of:N*T*Cti,ads7950C*");
MODULE_ALIAS("of:N*T*Cti,ads7951");
MODULE_ALIAS("of:N*T*Cti,ads7951C*");
MODULE_ALIAS("of:N*T*Cti,ads7952");
MODULE_ALIAS("of:N*T*Cti,ads7952C*");
MODULE_ALIAS("of:N*T*Cti,ads7953");
MODULE_ALIAS("of:N*T*Cti,ads7953C*");
MODULE_ALIAS("of:N*T*Cti,ads7954");
MODULE_ALIAS("of:N*T*Cti,ads7954C*");
MODULE_ALIAS("of:N*T*Cti,ads7955");
MODULE_ALIAS("of:N*T*Cti,ads7955C*");
MODULE_ALIAS("of:N*T*Cti,ads7956");
MODULE_ALIAS("of:N*T*Cti,ads7956C*");
MODULE_ALIAS("of:N*T*Cti,ads7957");
MODULE_ALIAS("of:N*T*Cti,ads7957C*");
MODULE_ALIAS("of:N*T*Cti,ads7958");
MODULE_ALIAS("of:N*T*Cti,ads7958C*");
MODULE_ALIAS("of:N*T*Cti,ads7959");
MODULE_ALIAS("of:N*T*Cti,ads7959C*");
MODULE_ALIAS("of:N*T*Cti,ads7960");
MODULE_ALIAS("of:N*T*Cti,ads7960C*");
MODULE_ALIAS("of:N*T*Cti,ads7961");
MODULE_ALIAS("of:N*T*Cti,ads7961C*");
MODULE_ALIAS("spi:ads7950");
MODULE_ALIAS("spi:ads7951");
MODULE_ALIAS("spi:ads7952");
MODULE_ALIAS("spi:ads7953");
MODULE_ALIAS("spi:ads7954");
MODULE_ALIAS("spi:ads7955");
MODULE_ALIAS("spi:ads7956");
MODULE_ALIAS("spi:ads7957");
MODULE_ALIAS("spi:ads7958");
MODULE_ALIAS("spi:ads7959");
MODULE_ALIAS("spi:ads7960");
MODULE_ALIAS("spi:ads7961");

MODULE_INFO(srcversion, "8872B6589C16B67461BE103");
