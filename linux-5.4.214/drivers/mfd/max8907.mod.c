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
	{ 0xc5850110, "printk" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x60a32ea9, "pm_power_off" },
	{ 0xa55d7e61, "mfd_add_devices" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xdfe395b9, "regmap_add_irq_chip" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0x28bf0b4e, "i2c_new_dummy_device" },
	{ 0xb8b5aa45, "__devm_regmap_init_i2c" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0x2b55d71e, "i2c_unregister_device" },
	{ 0x131a5ed7, "regmap_del_irq_chip" },
	{ 0xc0c3028b, "mfd_remove_devices" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:max8907");

MODULE_INFO(srcversion, "7665F982E73013FFEF04175");
