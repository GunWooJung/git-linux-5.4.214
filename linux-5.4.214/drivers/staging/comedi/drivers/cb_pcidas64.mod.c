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
	{ 0xbb52fc7f, "range_bipolar10" },
	{ 0xe2ae01b, "comedi_pci_auto_unconfig" },
	{ 0xad7df7e5, "comedi_pci_driver_unregister" },
	{ 0xc7fe97b7, "comedi_pci_driver_register" },
	{ 0x9b6c9ca8, "comedi_handle_events" },
	{ 0x689f67a5, "comedi_buf_write_samples" },
	{ 0xc15e9f12, "comedi_timeout" },
	{ 0xbbedef75, "subdev_8255_init" },
	{ 0xdb2044b2, "range_unipolar5" },
	{ 0x75e10c44, "subdev_8255_mm_init" },
	{ 0xa33acd7f, "comedi_alloc_subdev_readback" },
	{ 0x390a0822, "comedi_alloc_subdevices" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x33130ff7, "pci_ioremap_bar" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x50e77028, "comedi_pci_enable" },
	{ 0xe17d701, "comedi_alloc_devpriv" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9b2f554d, "comedi_buf_read_samples" },
	{ 0xb0b4e3f9, "comedi_nsamples_left" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x3434f51, "comedi_to_pci_dev" },
	{ 0x8b43e486, "comedi_pci_disable" },
	{ 0xedc03953, "iounmap" },
	{ 0xf3aa101d, "comedi_dio_insn_config" },
	{ 0x64cb354c, "comedi_dio_update_state" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xc4c933e2, "comedi_pci_auto_config" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi,comedi_pci,comedi_8255");

MODULE_ALIAS("pci:v00001307d0000001Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d0000001Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d00000035sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d00000036sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d00000037sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d00000052sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d0000005Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d0000005Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d0000005Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d00000060sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d00000061sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d00000062sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d00000063sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d00000064sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d00000065sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d00000066sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d00000067sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d00000068sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d0000006Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d00000078sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d00000079sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "5B88069F9B87B07134511C8");
