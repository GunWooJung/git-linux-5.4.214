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
	{ 0xc4fb10cd, "gpiod_set_value_cansleep" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x9e379360, "gpiod_get_value_cansleep" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x12b60659, "pwm_apply_state" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xc9ed9f46, "rdev_get_drvdata" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cpwm-regulator");
MODULE_ALIAS("of:N*T*Cpwm-regulatorC*");

MODULE_INFO(srcversion, "8316286206E390DEDF90FE8");
