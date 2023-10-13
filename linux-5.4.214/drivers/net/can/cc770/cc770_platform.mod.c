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
	{ 0x9a4c322, "_dev_err" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x2938f1aa, "register_cc770dev" },
	{ 0x98641c98, "alloc_cc770dev" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x85bd1608, "__request_region" },
	{ 0x7e73a43b, "platform_get_irq" },
	{ 0xf10de535, "ioread8" },
	{ 0x848d372e, "iowrite8" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0xd072dc20, "platform_get_resource" },
	{ 0xe4882e8d, "free_cc770dev" },
	{ 0xedc03953, "iounmap" },
	{ 0xbaaabfa6, "unregister_cc770dev" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "cc770");

MODULE_ALIAS("of:N*T*Cbosch,cc770");
MODULE_ALIAS("of:N*T*Cbosch,cc770C*");
MODULE_ALIAS("of:N*T*Cintc,82527");
MODULE_ALIAS("of:N*T*Cintc,82527C*");

MODULE_INFO(srcversion, "D2A36546CCD392314DB1774");
