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
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x83cc5e2e, "mcb_bus_add_devices" },
	{ 0x29993628, "chameleon_parse_cells" },
	{ 0x48eab652, "mcb_alloc_bus" },
	{ 0x8281b36, "devm_ioremap" },
	{ 0xc7c073b7, "__devm_request_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x85f2c9c3, "mcb_release_bus" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mcb");

MODULE_ALIAS("pci:v00001A88d00004D45sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001172d00004D45sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "D973DDE4E6174DFFC7827C1");
