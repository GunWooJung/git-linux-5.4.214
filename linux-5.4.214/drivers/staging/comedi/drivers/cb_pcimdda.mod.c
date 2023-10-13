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
	{ 0xbbedef75, "subdev_8255_init" },
	{ 0xa33acd7f, "comedi_alloc_subdev_readback" },
	{ 0x2f0ad9d3, "range_bipolar5" },
	{ 0x390a0822, "comedi_alloc_subdevices" },
	{ 0x50e77028, "comedi_pci_enable" },
	{ 0x3434f51, "comedi_to_pci_dev" },
	{ 0x4643e1b7, "comedi_readback_insn_read" },
	{ 0xc4c933e2, "comedi_pci_auto_config" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi_pci,comedi_8255,comedi");

MODULE_ALIAS("pci:v00001307d00000053sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "E1F2FB8292B1BF203C5B470");
