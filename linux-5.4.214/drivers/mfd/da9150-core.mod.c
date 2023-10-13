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
	{ 0xeb233a45, "__kmalloc" },
	{ 0x131a5ed7, "regmap_del_irq_chip" },
	{ 0x9741de30, "regmap_raw_write" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0xc0c3028b, "mfd_remove_devices" },
	{ 0xb35586ed, "i2c_transfer" },
	{ 0xd9729ca4, "regmap_bulk_read" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0x6e89a560, "regmap_irq_chip_get_base" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xa55d7e61, "mfd_add_devices" },
	{ 0x2b55d71e, "i2c_unregister_device" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0xdfe395b9, "regmap_add_irq_chip" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb8b5aa45, "__devm_regmap_init_i2c" },
	{ 0x28bf0b4e, "i2c_new_dummy_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x904a8908, "regmap_write" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cdlg,da9150");
MODULE_ALIAS("of:N*T*Cdlg,da9150C*");
MODULE_ALIAS("i2c:da9150");

MODULE_INFO(srcversion, "9CF5DA2076F5261FC2DE55B");
