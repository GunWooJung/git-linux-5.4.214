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
	{ 0xaed06536, "_dev_warn" },
	{ 0xe96d19e1, "devm_gpiochip_add_data" },
	{ 0x61fbd9e4, "__devm_regmap_init_spi" },
	{ 0x2bf355c4, "devm_gpiod_get_optional" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xf22e1253, "gpiochip_is_requested" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0xe35ed617, "seq_puts" },
	{ 0x787bfb4b, "gpiochip_get_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cexar,xra1403");
MODULE_ALIAS("of:N*T*Cexar,xra1403C*");
MODULE_ALIAS("spi:xra1403");

MODULE_INFO(srcversion, "7870FFFAEB27DBA828EB9DD");
