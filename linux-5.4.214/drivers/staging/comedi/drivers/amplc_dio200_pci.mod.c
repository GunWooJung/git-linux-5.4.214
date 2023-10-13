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
	{ 0x15d38954, "comedi_pci_detach" },
	{ 0xe2ae01b, "comedi_pci_auto_unconfig" },
	{ 0xad7df7e5, "comedi_pci_driver_unregister" },
	{ 0xc7fe97b7, "comedi_pci_driver_register" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xfaa5fa59, "amplc_dio200_common_attach" },
	{ 0x8e0bbfed, "amplc_dio200_set_enhance" },
	{ 0xedc03953, "iounmap" },
	{ 0x33130ff7, "pci_ioremap_bar" },
	{ 0x50e77028, "comedi_pci_enable" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x3434f51, "comedi_to_pci_dev" },
	{ 0xc4c933e2, "comedi_pci_auto_config" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi_pci,amplc_dio200_common");

MODULE_ALIAS("pci:v000014DCd0000000Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014DCd0000000Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014DCd00000011sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014DCd00000012sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014DCd00000014sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "5E36431195A9EF1CDAB1593");
