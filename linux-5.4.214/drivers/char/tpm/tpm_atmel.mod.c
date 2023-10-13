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
	{ 0x3fa6d454, "tpm_pm_resume" },
	{ 0xdb91a2d7, "tpm_pm_suspend" },
	{ 0xcdcff6fb, "tpm_chip_unregister" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0x4603116d, "tpm_chip_register" },
	{ 0x79a3da7a, "tpmm_chip_alloc" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x56cf6cd9, "platform_device_register_full" },
	{ 0x85bd1608, "__request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x594bf15b, "ioport_map" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x848d372e, "iowrite8" },
	{ 0xf10de535, "ioread8" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "78440DEFF7087CAABF4CE98");
