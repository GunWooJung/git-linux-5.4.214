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
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xa33acd7f, "comedi_alloc_subdev_readback" },
	{ 0x390a0822, "comedi_alloc_subdevices" },
	{ 0x69d0eaa1, "comedi_8254_init" },
	{ 0x50e77028, "comedi_pci_enable" },
	{ 0xe17d701, "comedi_alloc_devpriv" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x3434f51, "comedi_to_pci_dev" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xa304c2d6, "comedi_8254_pacer_enable" },
	{ 0x311c9949, "comedi_8254_update_divisors" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xdc699967, "comedi_8254_cascade_ns_to_timer" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x9b2f554d, "comedi_buf_read_samples" },
	{ 0x9b6c9ca8, "comedi_handle_events" },
	{ 0xba00d49d, "comedi_nscans_left" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x37a0cba, "kfree" },
	{ 0x15d38954, "comedi_pci_detach" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xc4c933e2, "comedi_pci_auto_config" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi_pci,comedi,comedi_8254");

MODULE_ALIAS("pci:v000014DCd00000007sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014DCd00000008sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "43C4330766A4B0826884916");
