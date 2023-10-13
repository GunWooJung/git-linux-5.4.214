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
	{ 0x9a4c322, "_dev_err" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xe96d19e1, "devm_gpiochip_add_data" },
	{ 0xb39a4fa6, "kempld_write16" },
	{ 0xf7cce38e, "kempld_read16" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x2bb5044c, "kempld_release_mutex" },
	{ 0xc4396431, "kempld_get_mutex" },
	{ 0x787bfb4b, "gpiochip_get_data" },
	{ 0xb683808, "kempld_write8" },
	{ 0xea2f1d04, "kempld_read8" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "kempld-core");


MODULE_INFO(srcversion, "E5A6124F532F478198D83A3");
