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
	{ 0x49f10e30, "power_supply_am_i_supplied" },
	{ 0xbb2178f9, "devm_power_supply_register" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x2353de0b, "w1_ds2781_eeprom_cmd" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x6b284ed, "w1_ds2781_io" },
	{ 0xd3a6aa10, "power_supply_get_drvdata" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "w1_ds2781");


MODULE_INFO(srcversion, "E3BCC1010046D582300BF0B");
