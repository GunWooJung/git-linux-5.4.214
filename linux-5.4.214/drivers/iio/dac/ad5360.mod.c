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
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xab1b6c43, "__iio_device_register" },
	{ 0xeb94b6dd, "regulator_bulk_enable" },
	{ 0xec688f13, "devm_regulator_bulk_get" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0x5573a68c, "spi_get_device_id" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x4853215d, "regulator_get_voltage" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x586583b8, "spi_sync" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x5bb6172e, "regulator_bulk_disable" },
	{ 0x37a0cba, "kfree" },
	{ 0xe1f088fa, "iio_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("spi:ad5360");
MODULE_ALIAS("spi:ad5361");
MODULE_ALIAS("spi:ad5362");
MODULE_ALIAS("spi:ad5363");
MODULE_ALIAS("spi:ad5370");
MODULE_ALIAS("spi:ad5371");
MODULE_ALIAS("spi:ad5372");
MODULE_ALIAS("spi:ad5373");

MODULE_INFO(srcversion, "BE8E5A826CE32FEFAF3958F");
