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
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xab1b6c43, "__iio_device_register" },
	{ 0x3c967a55, "iio_map_array_register" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x904a8908, "regmap_write" },
	{ 0xbbf7bb10, "iio_map_array_unregister" },
	{ 0xe1f088fa, "iio_device_unregister" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("platform:axp20x-adc");
MODULE_ALIAS("platform:axp22x-adc");
MODULE_ALIAS("platform:axp813-adc");
MODULE_ALIAS("of:N*T*Cx-powers,axp209-adc");
MODULE_ALIAS("of:N*T*Cx-powers,axp209-adcC*");
MODULE_ALIAS("of:N*T*Cx-powers,axp221-adc");
MODULE_ALIAS("of:N*T*Cx-powers,axp221-adcC*");
MODULE_ALIAS("of:N*T*Cx-powers,axp813-adc");
MODULE_ALIAS("of:N*T*Cx-powers,axp813-adcC*");

MODULE_INFO(srcversion, "2D94DA16413A924C633ED14");
