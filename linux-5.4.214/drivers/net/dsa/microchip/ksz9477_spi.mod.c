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
	{ 0x86f434e2, "driver_unregister" },
	{ 0xf6dd8fef, "__spi_register_driver" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xab54a8de, "ksz9477_switch_register" },
	{ 0x61fbd9e4, "__devm_regmap_init_spi" },
	{ 0x31bfafb, "ksz_switch_alloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x63945b4a, "ksz_switch_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x409bcb62, "mutex_unlock" },
};

MODULE_INFO(depends, "ksz9477,ksz_common");

MODULE_ALIAS("spi:ksz9477");
MODULE_ALIAS("spi:ksz9897");
MODULE_ALIAS("spi:ksz9893");
MODULE_ALIAS("spi:ksz9563");
MODULE_ALIAS("spi:ksz8563");
MODULE_ALIAS("spi:ksz9567");
MODULE_ALIAS("of:N*T*Cmicrochip,ksz9477");
MODULE_ALIAS("of:N*T*Cmicrochip,ksz9477C*");
MODULE_ALIAS("of:N*T*Cmicrochip,ksz9897");
MODULE_ALIAS("of:N*T*Cmicrochip,ksz9897C*");
MODULE_ALIAS("of:N*T*Cmicrochip,ksz9893");
MODULE_ALIAS("of:N*T*Cmicrochip,ksz9893C*");
MODULE_ALIAS("of:N*T*Cmicrochip,ksz9563");
MODULE_ALIAS("of:N*T*Cmicrochip,ksz9563C*");
MODULE_ALIAS("of:N*T*Cmicrochip,ksz8563");
MODULE_ALIAS("of:N*T*Cmicrochip,ksz8563C*");
MODULE_ALIAS("of:N*T*Cmicrochip,ksz9567");
MODULE_ALIAS("of:N*T*Cmicrochip,ksz9567C*");

MODULE_INFO(srcversion, "09CCA989E3EA715FF71E681");
