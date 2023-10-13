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
	{ 0x61d19c6, "__devm_regmap_init" },
	{ 0xf9a482f9, "msleep" },
	{ 0x127260fc, "gpiod_direction_output" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xdf8c695a, "__ndelay" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x9166fada, "strncpy" },
	{ 0xc47fece0, "dsa_unregister_switch" },
	{ 0xa35e10d1, "gpiod_direction_input" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xe9ee5b41, "dsa_switch_alloc" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x2bf355c4, "devm_gpiod_get_optional" },
	{ 0x2048bf8c, "gpiod_get_value" },
	{ 0x1f874c5f, "dsa_register_switch" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0xe23f1472, "gpiod_set_value" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x904a8908, "regmap_write" },
};

MODULE_INFO(depends, "dsa_core");

MODULE_ALIAS("of:N*T*Crealtek,rtl8366rb");
MODULE_ALIAS("of:N*T*Crealtek,rtl8366rbC*");
MODULE_ALIAS("of:N*T*Crealtek,rtl8366s");
MODULE_ALIAS("of:N*T*Crealtek,rtl8366sC*");

MODULE_INFO(srcversion, "D39C38A25EDCED4585478E4");
