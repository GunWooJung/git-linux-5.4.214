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
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x4dce64c0, "orinoco_if_del" },
	{ 0x2dc36513, "wiphy_unregister" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0x3bffcc92, "pci_iounmap" },
	{ 0x5c8f0410, "free_orinocodev" },
	{ 0x60cd493a, "orinoco_if_add" },
	{ 0xc36d70d, "orinoco_init" },
	{ 0x20b542b4, "hermes_struct_init" },
	{ 0x5e49ff3b, "alloc_orinocodev" },
	{ 0x5c4e734e, "pci_iomap" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc5534d64, "ioread16" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x200dc428, "pci_save_state" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x3b5a42ea, "orinoco_down" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0xc5850110, "printk" },
	{ 0xb6b6b81e, "orinoco_up" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xffe27bca, "orinoco_interrupt" },
	{ 0x921f329, "pci_restore_state" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x74c790d2, "pci_set_power_state" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "orinoco,cfg80211");

MODULE_ALIAS("pci:v0000126Cd00008030sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001562d00000001sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "6429C56C884AD581BDA60E4");
