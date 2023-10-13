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
	{ 0xc5850110, "printk" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xd38e0687, "desc_to_gpio" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4e47fa6a, "i2c_bit_add_numbered_bus" },
	{ 0x5792f848, "strlcpy" },
	{ 0x322c2f92, "gpiod_cansleep" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x222c28da, "devm_gpiod_get_index" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xa08d547b, "devm_gpiod_get" },
	{ 0xc4fb10cd, "gpiod_set_value_cansleep" },
	{ 0x9e379360, "gpiod_get_value_cansleep" },
	{ 0x3afc0e60, "i2c_del_adapter" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "i2c-algo-bit");


MODULE_INFO(srcversion, "362BC45DFBB052825D1034C");
