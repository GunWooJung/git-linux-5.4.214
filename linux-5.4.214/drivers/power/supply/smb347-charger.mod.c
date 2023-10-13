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
	{ 0xf928c918, "power_supply_changed" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x403f9529, "gpio_request_one" },
	{ 0xef3fd222, "gpiod_to_irq" },
	{ 0xf37d2c0b, "gpio_to_desc" },
	{ 0x1418158d, "power_supply_register" },
	{ 0xb8b5aa45, "__devm_regmap_init_i2c" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xd3a6aa10, "power_supply_get_drvdata" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xfe990052, "gpio_free" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xebdd7402, "power_supply_unregister" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:smb347");

MODULE_INFO(srcversion, "3C8513657D9EFEA8FEAC4D8");
