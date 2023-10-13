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
	{ 0x20a789ac, "irq_set_chip_data" },
	{ 0x8f094d1b, "irq_find_mapping" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xfdd280e6, "__irq_domain_add" },
	{ 0x549525ef, "handle_nested_irq" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x8be86773, "dev_get_regmap" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xa8cf36a9, "irq_set_chip_and_handler_name" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x5b5d48c1, "handle_level_irq" },
	{ 0x904a8908, "regmap_write" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("platform:mt6397");
MODULE_ALIAS("of:N*T*Cmediatek,mt6323");
MODULE_ALIAS("of:N*T*Cmediatek,mt6323C*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6397");
MODULE_ALIAS("of:N*T*Cmediatek,mt6397C*");

MODULE_INFO(srcversion, "F11B32F8F9CC7D0A67E42C0");
