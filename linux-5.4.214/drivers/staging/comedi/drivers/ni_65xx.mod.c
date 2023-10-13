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
	{ 0x68a41536, "param_ops_bool" },
	{ 0xe2ae01b, "comedi_pci_auto_unconfig" },
	{ 0xad7df7e5, "comedi_pci_driver_unregister" },
	{ 0xc7fe97b7, "comedi_pci_driver_register" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xdb2044b2, "range_unipolar5" },
	{ 0x390a0822, "comedi_alloc_subdevices" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xedc03953, "iounmap" },
	{ 0x33130ff7, "pci_ioremap_bar" },
	{ 0x50e77028, "comedi_pci_enable" },
	{ 0x3434f51, "comedi_to_pci_dev" },
	{ 0x15d38954, "comedi_pci_detach" },
	{ 0x9b6c9ca8, "comedi_handle_events" },
	{ 0x689f67a5, "comedi_buf_write_samples" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xc4c933e2, "comedi_pci_auto_config" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi_pci,comedi");

MODULE_ALIAS("pci:v00001093d00001710sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00007085sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00007086sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00007087sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00007088sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070A9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070C3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070C9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070CCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070CDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070D1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070D2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070D3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00007124sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00007125sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00007126sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00007127sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00007128sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d0000718Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d0000718Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000071C5sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "0438D18A221A16C7E642BEA");
