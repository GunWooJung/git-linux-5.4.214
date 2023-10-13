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
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0xe8c403, "device_get_next_child_node" },
	{ 0x46c5e2e4, "pcim_iomap" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0x27dd129b, "pcim_enable_device" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x888b323, "mdiobus_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v0000177Dd0000A02Bsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "0E4A4796B9336C196892B9A");
