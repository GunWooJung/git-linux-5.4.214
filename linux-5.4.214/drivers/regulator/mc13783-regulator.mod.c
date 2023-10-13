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
	{ 0xe54084a4, "mc13xxx_fixed_regulator_set_voltage" },
	{ 0x9c2e6db9, "regulator_list_voltage_table" },
	{ 0x7926532b, "mc13xxx_fixed_regulator_ops" },
	{ 0xb251d81e, "mc13xxx_regulator_ops" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x3304fd6, "rdev_get_dev" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xbaa31e69, "mc13xxx_reg_write" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xa7c8deb2, "devm_regulator_register" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6ee328a6, "mc13xxx_unlock" },
	{ 0x83d9f9d2, "mc13xxx_reg_read" },
	{ 0x36ac3763, "mc13xxx_lock" },
	{ 0x4480e186, "rdev_get_id" },
	{ 0xc9ed9f46, "rdev_get_drvdata" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mc13xxx-regulator-core,mc13xxx-core");


MODULE_INFO(srcversion, "70330C9816472402F3BFF17");
