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
	{ 0x12a38747, "usleep_range" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xcc0d7e7b, "devm_clk_hw_register" },
	{ 0x904a8908, "regmap_write" },
	{ 0xb8b5aa45, "__devm_regmap_init_i2c" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0xe2b72930, "regmap_bulk_write" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xd9729ca4, "regmap_bulk_read" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Csilabs,si544a");
MODULE_ALIAS("of:N*T*Csilabs,si544aC*");
MODULE_ALIAS("of:N*T*Csilabs,si544b");
MODULE_ALIAS("of:N*T*Csilabs,si544bC*");
MODULE_ALIAS("of:N*T*Csilabs,si544c");
MODULE_ALIAS("of:N*T*Csilabs,si544cC*");
MODULE_ALIAS("i2c:si544a");
MODULE_ALIAS("i2c:si544b");
MODULE_ALIAS("i2c:si544c");

MODULE_INFO(srcversion, "F439273CF9FE972437F880C");
