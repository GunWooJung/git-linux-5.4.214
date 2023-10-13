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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0xf7ad3479, "adt7316_pm_ops" },
	{ 0x86f434e2, "driver_unregister" },
	{ 0xf6dd8fef, "__spi_register_driver" },
	{ 0x391fccd6, "spi_write_then_read" },
	{ 0xbd489580, "adt7316_probe" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x586583b8, "spi_sync" },
};

MODULE_INFO(depends, "adt7316");

MODULE_ALIAS("of:N*T*Cadi,adt7316");
MODULE_ALIAS("of:N*T*Cadi,adt7316C*");
MODULE_ALIAS("of:N*T*Cadi,adt7317");
MODULE_ALIAS("of:N*T*Cadi,adt7317C*");
MODULE_ALIAS("of:N*T*Cadi,adt7318");
MODULE_ALIAS("of:N*T*Cadi,adt7318C*");
MODULE_ALIAS("of:N*T*Cadi,adt7516");
MODULE_ALIAS("of:N*T*Cadi,adt7516C*");
MODULE_ALIAS("of:N*T*Cadi,adt7517");
MODULE_ALIAS("of:N*T*Cadi,adt7517C*");
MODULE_ALIAS("of:N*T*Cadi,adt7519");
MODULE_ALIAS("of:N*T*Cadi,adt7519C*");
MODULE_ALIAS("spi:adt7316");
MODULE_ALIAS("spi:adt7317");
MODULE_ALIAS("spi:adt7318");
MODULE_ALIAS("spi:adt7516");
MODULE_ALIAS("spi:adt7517");
MODULE_ALIAS("spi:adt7519");

MODULE_INFO(srcversion, "1DC9D2FDB532602FD54AB7C");
