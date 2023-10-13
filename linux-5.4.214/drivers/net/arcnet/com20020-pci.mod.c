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
	{ 0xc9d8b484, "param_ops_string" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xe8b1a3d2, "netdev_warn" },
	{ 0xc5850110, "printk" },
	{ 0x6203fabf, "alloc_arcdev" },
	{ 0xd19e7f24, "devm_arcnet_led_init" },
	{ 0xd37024c5, "com20020_found" },
	{ 0x9b9a702f, "devm_led_classdev_register_ext" },
	{ 0x15f68f5d, "devm_kasprintf" },
	{ 0x1c50751a, "com20020_check" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc7c073b7, "__devm_request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x6534792a, "arcnet_debug" },
	{ 0x6d7bf39d, "com20020_netdev_ops" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2816d12d, "free_netdev" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "arcnet,com20020");

MODULE_ALIAS("pci:v00001571d0000A001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001571d0000A002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001571d0000A003sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001571d0000A004sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001571d0000A005sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001571d0000A006sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001571d0000A007sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001571d0000A008sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001571d0000A009sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001571d0000A00Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001571d0000A00Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001571d0000A00Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001571d0000A00Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001571d0000A00Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001571d0000A201sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001571d0000A202sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001571d0000A203sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001571d0000A204sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001571d0000A205sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001571d0000A206sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009030sv000010B5sd00002978bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009050sv000010B5sd00002273bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009050sv000010B5sd00003263bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009050sv000010B5sd00003292bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009050sv000010B5sd00003294bc*sc*i*");
MODULE_ALIAS("pci:v000014BAd00006000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00002200sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "6D2DBA222FAAEB64405CD49");
