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
	{ 0xf9a482f9, "msleep" },
	{ 0xffb817fb, "gpiod_set_raw_value" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x1cf8a6b9, "w1_add_master_device" },
	{ 0x127260fc, "gpiod_direction_output" },
	{ 0xc59ed4bd, "devm_gpiod_get_index_optional" },
	{ 0x222c28da, "devm_gpiod_get_index" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x2048bf8c, "gpiod_get_value" },
	{ 0xcc6f6604, "w1_remove_master_device" },
	{ 0xe23f1472, "gpiod_set_value" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "wire");


MODULE_INFO(srcversion, "D68AAEA6B1450D31FBF8E9E");
