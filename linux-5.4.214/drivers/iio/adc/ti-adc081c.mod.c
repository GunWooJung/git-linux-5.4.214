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
	{ 0xab725c65, "iio_get_time_ns" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xeee38cc9, "acpi_match_device" },
	{ 0xab1b6c43, "__iio_device_register" },
	{ 0xb8f1db1b, "iio_triggered_buffer_setup" },
	{ 0xfe543c51, "regulator_enable" },
	{ 0x868b9359, "devm_regulator_get" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0x15cb5620, "is_acpi_device_node" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x1d67d36f, "i2c_smbus_read_word_data" },
	{ 0x4853215d, "regulator_get_voltage" },
	{ 0x1643a127, "regulator_disable" },
	{ 0x71349cdc, "iio_triggered_buffer_cleanup" },
	{ 0xe1f088fa, "iio_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");

MODULE_ALIAS("acpi*:ADC081C:*");
MODULE_ALIAS("acpi*:ADC101C:*");
MODULE_ALIAS("acpi*:ADC121C:*");
MODULE_ALIAS("i2c:adc081c");
MODULE_ALIAS("i2c:adc101c");
MODULE_ALIAS("i2c:adc121c");

MODULE_INFO(srcversion, "1671ED310AC8F4C192091C3");
