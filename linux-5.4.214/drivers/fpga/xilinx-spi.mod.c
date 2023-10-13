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
	{ 0x15ba50a6, "jiffies" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x586583b8, "spi_sync" },
	{ 0xaa8565d5, "fpga_mgr_register" },
	{ 0x67d846f8, "devm_fpga_mgr_create" },
	{ 0xa08d547b, "devm_gpiod_get" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x12a38747, "usleep_range" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe23f1472, "gpiod_set_value" },
	{ 0x2048bf8c, "gpiod_get_value" },
	{ 0x13819104, "fpga_mgr_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "fpga-mgr");

MODULE_ALIAS("of:N*T*Cxlnx,fpga-slave-serial");
MODULE_ALIAS("of:N*T*Cxlnx,fpga-slave-serialC*");

MODULE_INFO(srcversion, "542887A4EC01A20FD2D0471");
