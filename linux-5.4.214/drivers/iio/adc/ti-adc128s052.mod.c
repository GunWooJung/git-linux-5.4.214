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
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x4853215d, "regulator_get_voltage" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x586583b8, "spi_sync" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xab1b6c43, "__iio_device_register" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xfe543c51, "regulator_enable" },
	{ 0x868b9359, "devm_regulator_get" },
	{ 0x5573a68c, "spi_get_device_id" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0x3bd1fe4c, "device_get_match_data" },
	{ 0xd0865ac4, "dev_fwnode" },
	{ 0x1643a127, "regulator_disable" },
	{ 0xe1f088fa, "iio_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("acpi*:AANT1280:*");
MODULE_ALIAS("spi:adc128s052");
MODULE_ALIAS("spi:adc122s021");
MODULE_ALIAS("spi:adc122s051");
MODULE_ALIAS("spi:adc122s101");
MODULE_ALIAS("spi:adc124s021");
MODULE_ALIAS("spi:adc124s051");
MODULE_ALIAS("spi:adc124s101");
MODULE_ALIAS("of:N*T*Cti,adc128s052");
MODULE_ALIAS("of:N*T*Cti,adc128s052C*");
MODULE_ALIAS("of:N*T*Cti,adc122s021");
MODULE_ALIAS("of:N*T*Cti,adc122s021C*");
MODULE_ALIAS("of:N*T*Cti,adc122s051");
MODULE_ALIAS("of:N*T*Cti,adc122s051C*");
MODULE_ALIAS("of:N*T*Cti,adc122s101");
MODULE_ALIAS("of:N*T*Cti,adc122s101C*");
MODULE_ALIAS("of:N*T*Cti,adc124s021");
MODULE_ALIAS("of:N*T*Cti,adc124s021C*");
MODULE_ALIAS("of:N*T*Cti,adc124s051");
MODULE_ALIAS("of:N*T*Cti,adc124s051C*");
MODULE_ALIAS("of:N*T*Cti,adc124s101");
MODULE_ALIAS("of:N*T*Cti,adc124s101C*");

MODULE_INFO(srcversion, "405FF10F251261B8B3B3548");