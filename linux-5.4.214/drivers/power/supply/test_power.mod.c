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
	{ 0x879724cb, "param_get_int" },
	{ 0xf9a482f9, "msleep" },
	{ 0xebdd7402, "power_supply_unregister" },
	{ 0x1418158d, "power_supply_register" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xf928c918, "power_supply_changed" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x96b29254, "strncasecmp" },
	{ 0xa916b694, "strnlen" },
	{ 0x9166fada, "strncpy" },
	{ 0x754d539c, "strlen" },
	{ 0xe914e41e, "strcpy" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "DE04EBE94AC9D21B6949D81");
