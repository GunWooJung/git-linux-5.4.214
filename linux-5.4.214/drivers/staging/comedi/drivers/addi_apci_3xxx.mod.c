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
	{ 0xf3aa101d, "comedi_dio_insn_config" },
	{ 0x15d38954, "comedi_pci_detach" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xa33acd7f, "comedi_alloc_subdev_readback" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xdb2044b2, "range_unipolar5" },
	{ 0x390a0822, "comedi_alloc_subdevices" },
	{ 0x33130ff7, "pci_ioremap_bar" },
	{ 0x50e77028, "comedi_pci_enable" },
	{ 0xe17d701, "comedi_alloc_devpriv" },
	{ 0x3434f51, "comedi_to_pci_dev" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9b6c9ca8, "comedi_handle_events" },
	{ 0x689f67a5, "comedi_buf_write_samples" },
	{ 0xc15e9f12, "comedi_timeout" },
	{ 0x64cb354c, "comedi_dio_update_state" },
	{ 0xc4c933e2, "comedi_pci_auto_config" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi_pci,comedi");

MODULE_ALIAS("pci:v000015B8d00003010sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B8d0000300Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B8d0000300Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B8d00003013sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B8d00003014sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B8d00003015sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B8d00003016sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B8d00003017sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B8d00003018sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B8d00003019sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B8d0000301Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B8d0000301Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B8d0000301Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B8d0000301Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B8d0000301Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B8d0000301Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B8d00003020sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B8d00003021sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B8d00003022sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B8d00003023sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B8d0000300Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B8d00003002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B8d00003003sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B8d00003004sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B8d00003024sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "5A86E7B59FA0C63DACDFFBD");
