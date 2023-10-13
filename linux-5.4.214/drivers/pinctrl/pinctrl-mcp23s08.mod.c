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
	{ 0x86f434e2, "driver_unregister" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0xf6dd8fef, "__spi_register_driver" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xacdeb71f, "device_property_read_u32_array" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x5573a68c, "spi_get_device_id" },
	{ 0x60cea88, "gpiochip_set_nested_irqchip" },
	{ 0x6cb782a, "gpiochip_irqchip_add_key" },
	{ 0x96a44dfb, "handle_simple_irq" },
	{ 0xb8b5aa45, "__devm_regmap_init_i2c" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x92498d8d, "devm_pinctrl_register" },
	{ 0x15f68f5d, "devm_kasprintf" },
	{ 0x904a8908, "regmap_write" },
	{ 0x61853e9a, "device_property_present" },
	{ 0xe96d19e1, "devm_gpiochip_add_data" },
	{ 0x61d19c6, "__devm_regmap_init" },
	{ 0x7d725735, "devm_kmemdup" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x549525ef, "handle_nested_irq" },
	{ 0x8f094d1b, "irq_find_mapping" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x58ef25ef, "pinctrl_dev_get_drvdata" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0x586583b8, "spi_sync" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x391fccd6, "spi_write_then_read" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x532a4e22, "regcache_sync" },
	{ 0xc4f3acd9, "regcache_cache_only" },
	{ 0x787bfb4b, "gpiochip_get_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("spi:mcp23s08");
MODULE_ALIAS("spi:mcp23s17");
MODULE_ALIAS("spi:mcp23s18");
MODULE_ALIAS("i2c:mcp23008");
MODULE_ALIAS("i2c:mcp23017");
MODULE_ALIAS("i2c:mcp23018");

MODULE_INFO(srcversion, "632761FBD31D918C1026EF1");
