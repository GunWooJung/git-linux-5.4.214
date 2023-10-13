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
	{ 0xd111bb59, "_dev_info" },
	{ 0x311c9949, "comedi_8254_update_divisors" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x689f67a5, "comedi_buf_write_samples" },
	{ 0x9b6c9ca8, "comedi_handle_events" },
	{ 0xb0b4e3f9, "comedi_nsamples_left" },
	{ 0xe798aabd, "comedi_set_hw_dev" },
	{ 0xa207ea98, "pci_get_device" },
	{ 0x8423aab5, "pci_dev_put" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x15d38954, "comedi_pci_detach" },
	{ 0xd522f41c, "pci_dev_get" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xdb2044b2, "range_unipolar5" },
	{ 0xa33acd7f, "comedi_alloc_subdev_readback" },
	{ 0xbb52fc7f, "range_bipolar10" },
	{ 0x390a0822, "comedi_alloc_subdevices" },
	{ 0xd712aabe, "pci_write_config_word" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0x69d0eaa1, "comedi_8254_init" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x50e77028, "comedi_pci_enable" },
	{ 0xe17d701, "comedi_alloc_devpriv" },
	{ 0x3434f51, "comedi_to_pci_dev" },
	{ 0xc15e9f12, "comedi_timeout" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xe186f776, "comedi_8254_load" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xdc699967, "comedi_8254_cascade_ns_to_timer" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xa304c2d6, "comedi_8254_pacer_enable" },
	{ 0x64cb354c, "comedi_dio_update_state" },
	{ 0xc4c933e2, "comedi_pci_auto_config" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi_pci,comedi_8254,comedi");

MODULE_ALIAS("pci:v000010E8d000080D9sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "8CB119DC9EE5F34ED81F922");
