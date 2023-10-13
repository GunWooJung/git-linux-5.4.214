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
	{ 0x686953b7, "regulator_map_voltage_linear" },
	{ 0x9c2e6db9, "regulator_list_voltage_table" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xa7c8deb2, "devm_regulator_register" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x5c558ae, "regulator_list_voltage_linear" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xbca0b1e, "i2c_smbus_write_byte" },
	{ 0xc9ed9f46, "rdev_get_drvdata" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:max1586");
MODULE_ALIAS("of:N*T*Cmaxim,max1586");
MODULE_ALIAS("of:N*T*Cmaxim,max1586C*");

MODULE_INFO(srcversion, "C51FFF8EC0ABBAD5E6A9347");
