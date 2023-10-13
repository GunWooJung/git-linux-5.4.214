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
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x24d273d1, "add_timer" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0xc75c79af, "comedi_load_firmware" },
	{ 0x6b24bba8, "comedi_alloc_spriv" },
	{ 0x390a0822, "comedi_alloc_subdevices" },
	{ 0x33130ff7, "pci_ioremap_bar" },
	{ 0x50e77028, "comedi_pci_enable" },
	{ 0xe17d701, "comedi_alloc_devpriv" },
	{ 0x3434f51, "comedi_to_pci_dev" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xab6d5b3b, "hex_to_bin" },
	{ 0x11089ac7, "_ctype" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x15d38954, "comedi_pci_detach" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xc4c933e2, "comedi_pci_auto_config" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "comedi_pci,comedi");

MODULE_ALIAS("pci:v00001762d00001111sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001762d00003111sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001762d00003112sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001762d00003113sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001762d00003114sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "B721BEB3EBA6A81D7E43581");
