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

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf0c5ce57, "ci_hdrc_add_device" },
	{ 0x4e016cf0, "usb_phy_generic_register" },
	{ 0xe549079f, "pci_try_set_mwi" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x27dd129b, "pcim_enable_device" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x73bf7793, "usb_phy_generic_unregister" },
	{ 0x8d7d2ef9, "ci_hdrc_remove_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ci_hdrc,phy-generic");

MODULE_ALIAS("pci:v0000153Fd00001004sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000153Fd00001006sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000811sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000829sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000E006sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "AE694A55E89632063561399");
