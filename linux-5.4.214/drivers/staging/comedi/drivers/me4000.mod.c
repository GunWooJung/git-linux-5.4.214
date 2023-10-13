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
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x15d38954, "comedi_pci_detach" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xa33acd7f, "comedi_alloc_subdev_readback" },
	{ 0xbb52fc7f, "range_bipolar10" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x307233a, "comedi_8254_subdevice_init" },
	{ 0x69d0eaa1, "comedi_8254_init" },
	{ 0xdb2044b2, "range_unipolar5" },
	{ 0x390a0822, "comedi_alloc_subdevices" },
	{ 0xc75c79af, "comedi_load_firmware" },
	{ 0x50e77028, "comedi_pci_enable" },
	{ 0xe17d701, "comedi_alloc_devpriv" },
	{ 0x12a38747, "usleep_range" },
	{ 0x3434f51, "comedi_to_pci_dev" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9b6c9ca8, "comedi_handle_events" },
	{ 0x689f67a5, "comedi_buf_write_samples" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xc15e9f12, "comedi_timeout" },
	{ 0x64cb354c, "comedi_dio_update_state" },
	{ 0xc4c933e2, "comedi_pci_auto_config" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi_pci,comedi,comedi_8254");

MODULE_ALIAS("pci:v00001402d00004650sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001402d00004660sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001402d00004661sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001402d00004662sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001402d00004663sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001402d00004670sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001402d00004671sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001402d00004672sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001402d00004673sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001402d00004680sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001402d00004681sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001402d00004682sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001402d00004683sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "3B43BAF365B7C2173460FF0");
