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
	{ 0x787bfb4b, "gpiochip_get_data" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc4fb10cd, "gpiod_set_value_cansleep" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x586583b8, "spi_sync" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x52ac9eed, "gpiochip_add_data_with_key" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x2bf355c4, "devm_gpiod_get_optional" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xf4b0582f, "gpiochip_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cpisosr-gpio");
MODULE_ALIAS("of:N*T*Cpisosr-gpioC*");
MODULE_ALIAS("spi:pisosr-gpio");

MODULE_INFO(srcversion, "A22416DBF0F61597CFB4F88");
