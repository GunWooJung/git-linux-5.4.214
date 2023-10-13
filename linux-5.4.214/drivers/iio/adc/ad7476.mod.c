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
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x89d7a69d, "iio_trigger_notify_done" },
	{ 0x19fd8cc1, "iio_push_to_buffers" },
	{ 0xab725c65, "iio_get_time_ns" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xab1b6c43, "__iio_device_register" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb8f1db1b, "iio_triggered_buffer_setup" },
	{ 0xfe543c51, "regulator_enable" },
	{ 0x868b9359, "devm_regulator_get" },
	{ 0x5573a68c, "spi_get_device_id" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x4853215d, "regulator_get_voltage" },
	{ 0xb4e1369f, "iio_device_release_direct_mode" },
	{ 0x586583b8, "spi_sync" },
	{ 0x3ccdc02b, "iio_device_claim_direct_mode" },
	{ 0x1643a127, "regulator_disable" },
	{ 0x71349cdc, "iio_triggered_buffer_cleanup" },
	{ 0xe1f088fa, "iio_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio,industrialio-triggered-buffer");

MODULE_ALIAS("spi:ad7091r");
MODULE_ALIAS("spi:ad7273");
MODULE_ALIAS("spi:ad7274");
MODULE_ALIAS("spi:ad7276");
MODULE_ALIAS("spi:ad7277");
MODULE_ALIAS("spi:ad7278");
MODULE_ALIAS("spi:ad7466");
MODULE_ALIAS("spi:ad7467");
MODULE_ALIAS("spi:ad7468");
MODULE_ALIAS("spi:ad7475");
MODULE_ALIAS("spi:ad7476");
MODULE_ALIAS("spi:ad7476a");
MODULE_ALIAS("spi:ad7477");
MODULE_ALIAS("spi:ad7477a");
MODULE_ALIAS("spi:ad7478");
MODULE_ALIAS("spi:ad7478a");
MODULE_ALIAS("spi:ad7495");
MODULE_ALIAS("spi:ad7910");
MODULE_ALIAS("spi:ad7920");
MODULE_ALIAS("spi:ad7940");
MODULE_ALIAS("spi:adc081s");
MODULE_ALIAS("spi:adc101s");
MODULE_ALIAS("spi:adc121s");
MODULE_ALIAS("spi:ads7866");
MODULE_ALIAS("spi:ads7867");
MODULE_ALIAS("spi:ads7868");

MODULE_INFO(srcversion, "895E44FCB916ADEA50DCAF3");
