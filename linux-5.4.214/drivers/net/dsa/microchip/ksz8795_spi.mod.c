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
	{ 0x74e629fe, "ksz8795_switch_register" },
	{ 0x61fbd9e4, "__devm_regmap_init_spi" },
	{ 0x31bfafb, "ksz_switch_alloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x63945b4a, "ksz_switch_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x409bcb62, "mutex_unlock" },
};

MODULE_INFO(depends, "ksz8795,ksz_common");

MODULE_ALIAS("spi:ksz8765");
MODULE_ALIAS("spi:ksz8794");
MODULE_ALIAS("spi:ksz8795");
MODULE_ALIAS("spi:ksz8863");
MODULE_ALIAS("spi:ksz8873");
MODULE_ALIAS("of:N*T*Cmicrochip,ksz8765");
MODULE_ALIAS("of:N*T*Cmicrochip,ksz8765C*");
MODULE_ALIAS("of:N*T*Cmicrochip,ksz8794");
MODULE_ALIAS("of:N*T*Cmicrochip,ksz8794C*");
MODULE_ALIAS("of:N*T*Cmicrochip,ksz8795");
MODULE_ALIAS("of:N*T*Cmicrochip,ksz8795C*");

MODULE_INFO(srcversion, "262E7703EE4EAC037135B25");
