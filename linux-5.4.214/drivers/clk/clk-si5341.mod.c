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
	{ 0xcf537273, "clk_hw_get_flags" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x532a4e22, "regcache_sync" },
	{ 0xca944cd, "devm_kfree" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x37a0cba, "kfree" },
	{ 0x15f68f5d, "devm_kasprintf" },
	{ 0xcc0d7e7b, "devm_clk_hw_register" },
	{ 0xc569d8ce, "__clk_get_name" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xc4f3acd9, "regcache_cache_only" },
	{ 0xf9a482f9, "msleep" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xb8b5aa45, "__devm_regmap_init_i2c" },
	{ 0x6164d63, "devm_clk_get" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xea124bd1, "gcd" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xd9729ca4, "regmap_bulk_read" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x904a8908, "regmap_write" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe2b72930, "regmap_bulk_write" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Csilabs,si5340");
MODULE_ALIAS("of:N*T*Csilabs,si5340C*");
MODULE_ALIAS("of:N*T*Csilabs,si5341");
MODULE_ALIAS("of:N*T*Csilabs,si5341C*");
MODULE_ALIAS("i2c:si5340");
MODULE_ALIAS("i2c:si5341");

MODULE_INFO(srcversion, "96AE4CC6B4706EFF794061F");
