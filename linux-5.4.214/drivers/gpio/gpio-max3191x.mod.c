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
	{ 0xaa8106bc, "crc8_populate_msb" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xe2aae5cc, "crc8" },
	{ 0x9e379360, "gpiod_get_value_cansleep" },
	{ 0x586583b8, "spi_sync" },
	{ 0x704cac6c, "devm_gpiod_put_array" },
	{ 0x52ac9eed, "gpiochip_add_data_with_key" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x3483b5a8, "gpiod_set_array_value_cansleep" },
	{ 0xfb578fc5, "memset" },
	{ 0x20dbf27, "bitmap_alloc" },
	{ 0x61853e9a, "device_property_present" },
	{ 0xacdeb71f, "device_property_read_u32_array" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc4fb10cd, "gpiod_set_value_cansleep" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x787bfb4b, "gpiochip_get_data" },
	{ 0xf4b0582f, "gpiochip_remove" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x88095edc, "devm_gpiod_get_array_optional" },
	{ 0xfef787f1, "gpiod_count" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "crc8");

MODULE_ALIAS("spi:max31910");
MODULE_ALIAS("spi:max31911");
MODULE_ALIAS("spi:max31912");
MODULE_ALIAS("spi:max31913");
MODULE_ALIAS("spi:max31953");
MODULE_ALIAS("spi:max31963");

MODULE_INFO(srcversion, "5F57BFB4B34703F9E2DCAE5");
