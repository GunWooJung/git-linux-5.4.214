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
	{ 0xe2ae01b, "comedi_pci_auto_unconfig" },
	{ 0xad7df7e5, "comedi_pci_driver_unregister" },
	{ 0xc7fe97b7, "comedi_pci_driver_register" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xb679cebc, "range_0_20mA" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xdb2044b2, "range_unipolar5" },
	{ 0xa33acd7f, "comedi_alloc_subdev_readback" },
	{ 0xbb52fc7f, "range_bipolar10" },
	{ 0x390a0822, "comedi_alloc_subdevices" },
	{ 0xedc03953, "iounmap" },
	{ 0x33130ff7, "pci_ioremap_bar" },
	{ 0xe17d701, "comedi_alloc_devpriv" },
	{ 0x50e77028, "comedi_pci_enable" },
	{ 0x3434f51, "comedi_to_pci_dev" },
	{ 0x37a0cba, "kfree" },
	{ 0x15d38954, "comedi_pci_detach" },
	{ 0x64cb354c, "comedi_dio_update_state" },
	{ 0xf3aa101d, "comedi_dio_insn_config" },
	{ 0xc4c933e2, "comedi_pci_auto_config" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi_pci,comedi");

MODULE_ALIAS("pci:v00001093d00001290sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00001920sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00002C90sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "0ECFF276DD224FA83775368");
