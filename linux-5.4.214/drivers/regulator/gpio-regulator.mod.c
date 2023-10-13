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
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa7c8deb2, "devm_regulator_register" },
	{ 0x9bfdcbb2, "gpiod_get_optional" },
	{ 0x7d725735, "devm_kmemdup" },
	{ 0x222c28da, "devm_gpiod_get_index" },
	{ 0xe8d567ba, "gpiod_set_consumer_name" },
	{ 0xb403c66d, "devm_kstrdup" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xc4fb10cd, "gpiod_set_value_cansleep" },
	{ 0xc9ed9f46, "rdev_get_drvdata" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "57DE63AD6060C7F96F7A241");
