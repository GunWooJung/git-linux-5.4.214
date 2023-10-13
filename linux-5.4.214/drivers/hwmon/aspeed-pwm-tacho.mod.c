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
	{ 0x9a4c322, "_dev_err" },
	{ 0x983c8c67, "devm_hwmon_device_register_with_groups" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x6164d63, "devm_clk_get" },
	{ 0x33560c9e, "devm_add_action" },
	{ 0xb2210d64, "reset_control_deassert" },
	{ 0x25ce0c78, "__devm_reset_control_get" },
	{ 0x61d19c6, "__devm_regmap_init" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x1e57910a, "devm_ioremap_resource" },
	{ 0xd072dc20, "platform_get_resource" },
	{ 0x3854774b, "kstrtoll" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x6c4b6684, "reset_control_assert" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0x12a38747, "usleep_range" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x904a8908, "regmap_write" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Caspeed,ast2400-pwm-tacho");
MODULE_ALIAS("of:N*T*Caspeed,ast2400-pwm-tachoC*");
MODULE_ALIAS("of:N*T*Caspeed,ast2500-pwm-tacho");
MODULE_ALIAS("of:N*T*Caspeed,ast2500-pwm-tachoC*");

MODULE_INFO(srcversion, "C6C9D58332FC25831FFC18F");
