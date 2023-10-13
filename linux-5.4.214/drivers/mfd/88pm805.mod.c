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
	{ 0x438dd16f, "pm80x_pm_ops" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xa55d7e61, "mfd_add_devices" },
	{ 0xdfe395b9, "regmap_add_irq_chip" },
	{ 0x12a38747, "usleep_range" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0x395eae8e, "pm80x_init" },
	{ 0xd99fd720, "pm80x_deinit" },
	{ 0x131a5ed7, "regmap_del_irq_chip" },
	{ 0xc0c3028b, "mfd_remove_devices" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "88pm80x");

MODULE_ALIAS("i2c:88PM805");

MODULE_INFO(srcversion, "783BC92E546BB595FC28CFC");
