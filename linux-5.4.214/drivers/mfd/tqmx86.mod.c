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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xc5850110, "printk" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x848d372e, "iowrite8" },
	{ 0xd9c157f5, "devm_mfd_add_devices" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xf10de535, "ioread8" },
	{ 0x7e75c696, "devm_ioport_map" },
	{ 0xaf465642, "platform_device_put" },
	{ 0xf14ea0e9, "platform_device_add" },
	{ 0xd73c36a2, "platform_device_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("dmi*:svn*TQ-Group*:pn*TQMx*:");

MODULE_INFO(srcversion, "A4CC249C7589E876D2590CB");
