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
	{ 0x6bc2f223, "ili9320_write_regs" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb5791f2e, "ili9320_write" },
	{ 0xf3f5c49c, "ili9320_suspend" },
	{ 0xdac3fce7, "ili9320_resume" },
	{ 0x1908d5e3, "ili9320_remove" },
	{ 0x6f00a71, "ili9320_shutdown" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x9e6d8b5, "ili9320_probe_spi" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ili9320");


MODULE_INFO(srcversion, "0EB601BCEF7FAB463811D09");
