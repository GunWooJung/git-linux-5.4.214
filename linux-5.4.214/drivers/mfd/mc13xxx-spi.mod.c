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
	{ 0xe9daec07, "mc13xxx_variant_mc34708" },
	{ 0xbb6f524f, "mc13xxx_variant_mc13892" },
	{ 0xfbd5196f, "mc13xxx_variant_mc13783" },
	{ 0x86f434e2, "driver_unregister" },
	{ 0xf6dd8fef, "__spi_register_driver" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x5573a68c, "spi_get_device_id" },
	{ 0xe5aed3f2, "mc13xxx_common_init" },
	{ 0x61d19c6, "__devm_regmap_init" },
	{ 0xe21d630c, "spi_setup" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x586583b8, "spi_sync" },
	{ 0x8a7d7b2a, "mc13xxx_common_exit" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mc13xxx-core");

MODULE_ALIAS("of:N*T*Cfsl,mc13783");
MODULE_ALIAS("of:N*T*Cfsl,mc13783C*");
MODULE_ALIAS("of:N*T*Cfsl,mc13892");
MODULE_ALIAS("of:N*T*Cfsl,mc13892C*");
MODULE_ALIAS("of:N*T*Cfsl,mc34708");
MODULE_ALIAS("of:N*T*Cfsl,mc34708C*");
MODULE_ALIAS("spi:mc13783");
MODULE_ALIAS("spi:mc13892");
MODULE_ALIAS("spi:mc34708");

MODULE_INFO(srcversion, "9ECF0B518300BFB2FBFF8D1");
