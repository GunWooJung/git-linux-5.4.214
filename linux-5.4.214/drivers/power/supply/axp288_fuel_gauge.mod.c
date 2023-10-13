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
	{ 0x8ce08cc0, "single_release" },
	{ 0x21ba44a5, "seq_read" },
	{ 0xda2b5d09, "seq_lseek" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x904a8908, "regmap_write" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x6712284f, "iio_read_channel_raw" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0xd9729ca4, "regmap_bulk_read" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x55784228, "regmap_irq_get_virq" },
	{ 0x7e73a43b, "platform_get_irq" },
	{ 0xd0a46a6a, "debugfs_create_file" },
	{ 0x1418158d, "power_supply_register" },
	{ 0xf44ddfd2, "iio_channel_get" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x7ee415d5, "single_open" },
	{ 0xf928c918, "power_supply_changed" },
	{ 0xd3a6aa10, "power_supply_get_drvdata" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x68e9cf5d, "iio_channel_release" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x67ba7ebf, "debugfs_remove" },
	{ 0xebdd7402, "power_supply_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");

MODULE_ALIAS("platform:axp288_fuel_gauge");

MODULE_INFO(srcversion, "27D5E7939E825C77635221D");
