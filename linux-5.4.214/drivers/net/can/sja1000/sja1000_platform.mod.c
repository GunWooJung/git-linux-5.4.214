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
	{ 0xf10de535, "ioread8" },
	{ 0x848d372e, "iowrite8" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xe1451398, "register_sja1000dev" },
	{ 0x9c9734f3, "alloc_sja1000dev" },
	{ 0x189a3237, "devm_ioremap_nocache" },
	{ 0xc7c073b7, "__devm_request_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0xd072dc20, "platform_get_resource" },
	{ 0xc5534d64, "ioread16" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x2deca308, "free_sja1000dev" },
	{ 0xdc94a391, "unregister_sja1000dev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "sja1000");

MODULE_ALIAS("of:N*T*Cnxp,sja1000");
MODULE_ALIAS("of:N*T*Cnxp,sja1000C*");
MODULE_ALIAS("of:N*T*Ctechnologic,sja1000");
MODULE_ALIAS("of:N*T*Ctechnologic,sja1000C*");

MODULE_INFO(srcversion, "4EA74E24629C92CF2A90A3F");
