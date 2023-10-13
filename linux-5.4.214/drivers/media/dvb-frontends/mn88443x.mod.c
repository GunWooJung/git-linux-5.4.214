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
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8733236, "intlog10" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x904a8908, "regmap_write" },
	{ 0x12a38747, "usleep_range" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x28bf0b4e, "i2c_new_dummy_device" },
	{ 0xb8b5aa45, "__devm_regmap_init_i2c" },
	{ 0x2bf355c4, "devm_gpiod_get_optional" },
	{ 0x6164d63, "devm_clk_get" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0x2b55d71e, "i2c_unregister_device" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xc4fb10cd, "gpiod_set_value_cansleep" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "dvb-core");

MODULE_ALIAS("i2c:mn884433");
MODULE_ALIAS("i2c:mn884434-0");
MODULE_ALIAS("i2c:mn884434-1");
MODULE_ALIAS("of:N*T*Csocionext,mn884433");
MODULE_ALIAS("of:N*T*Csocionext,mn884433C*");
MODULE_ALIAS("of:N*T*Csocionext,mn884434-0");
MODULE_ALIAS("of:N*T*Csocionext,mn884434-0C*");
MODULE_ALIAS("of:N*T*Csocionext,mn884434-1");
MODULE_ALIAS("of:N*T*Csocionext,mn884434-1C*");

MODULE_INFO(srcversion, "50BB38E36D2F13342B39F50");
