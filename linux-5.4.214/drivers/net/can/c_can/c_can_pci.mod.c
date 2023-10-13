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
	{ 0xe484e35f, "ioread32" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x69ee0d12, "register_c_can_dev" },
	{ 0xa4d2b9b5, "alloc_c_can_dev" },
	{ 0x5c4e734e, "pci_iomap" },
	{ 0xa0dd6d5a, "pci_enable_msi" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0x9d766f4b, "pci_clear_master" },
	{ 0x28fe4c90, "pci_disable_msi" },
	{ 0x3bffcc92, "pci_iounmap" },
	{ 0x8958b6b1, "free_c_can_dev" },
	{ 0x205f8042, "unregister_c_can_dev" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "c_can");

MODULE_ALIAS("pci:v0000104Ad0000CC11sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008818sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "9B537AD69A2922CD98DC5CA");
