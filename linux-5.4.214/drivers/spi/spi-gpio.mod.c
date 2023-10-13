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
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x9e379360, "gpiod_get_value_cansleep" },
	{ 0xbb4e55fd, "devm_spi_register_controller" },
	{ 0xaf7b1673, "spi_bitbang_init" },
	{ 0x52db7cb5, "spi_bitbang_setup_transfer" },
	{ 0xa08d547b, "devm_gpiod_get" },
	{ 0x2bf355c4, "devm_gpiod_get_optional" },
	{ 0x222c28da, "devm_gpiod_get_index" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x6cac2f3b, "__devm_spi_alloc_controller" },
	{ 0xa2b3b163, "spi_bitbang_setup" },
	{ 0x127260fc, "gpiod_direction_output" },
	{ 0xa35e10d1, "gpiod_direction_input" },
	{ 0xc4fb10cd, "gpiod_set_value_cansleep" },
	{ 0x55d8927b, "spi_bitbang_cleanup" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "spi-bitbang");


MODULE_INFO(srcversion, "747188131144E9BF37085E2");
