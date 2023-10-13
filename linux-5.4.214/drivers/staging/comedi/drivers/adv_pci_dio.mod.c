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
	{ 0x64cb354c, "comedi_dio_update_state" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x307233a, "comedi_8254_subdevice_init" },
	{ 0x69d0eaa1, "comedi_8254_init" },
	{ 0xbbedef75, "subdev_8255_init" },
	{ 0xdb2044b2, "range_unipolar5" },
	{ 0x390a0822, "comedi_alloc_subdevices" },
	{ 0x50e77028, "comedi_pci_enable" },
	{ 0x3434f51, "comedi_to_pci_dev" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0xe37407fe, "pci_release_region" },
	{ 0xb23de490, "pci_request_region" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0xc4c933e2, "comedi_pci_auto_config" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi_pci,comedi,comedi_8254,comedi_8255");

MODULE_ALIAS("pci:v000013FEd00001730sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013FEd00001733sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013FEd00001734sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013FEd00001735sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013FEd00001736sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013FEd00001739sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013FEd00001750sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013FEd00001751sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013FEd00001752sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013FEd00001753sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013FEd00001754sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013FEd00001756sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013FEd00001761sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013FEd00001762sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "C2764156C1D02B1A50887D9");
