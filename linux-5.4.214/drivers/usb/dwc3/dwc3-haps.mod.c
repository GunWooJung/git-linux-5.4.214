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
	{ 0xf14ea0e9, "platform_device_add" },
	{ 0xaf465642, "platform_device_put" },
	{ 0x2371be34, "platform_device_add_properties" },
	{ 0x2f8b92de, "platform_device_add_resources" },
	{ 0xd73c36a2, "platform_device_alloc" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x27dd129b, "pcim_enable_device" },
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000016C3d0000ABCDsv*sd*bc0Csc03i*");
MODULE_ALIAS("pci:v000016C3d0000ABCEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000016C3d0000ABCFsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "2820E7C5D6CF5489A8340E7");
