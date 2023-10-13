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
	{ 0x56d0a403, "spi_unregister_controller" },
	{ 0xfb4ec2db, "__pm_runtime_disable" },
	{ 0xb98c9772, "__pm_runtime_set_status" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb71b7859, "spi_controller_resume" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7af8c0f, "spi_controller_suspend" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cxlnx,zynqmp-qspi-1.0");
MODULE_ALIAS("of:N*T*Cxlnx,zynqmp-qspi-1.0C*");

MODULE_INFO(srcversion, "35897034B343FE9C4A70DAA");
