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
	{ 0xcce57a7f, "param_ops_ushort" },
	{ 0x3afc0e60, "i2c_del_adapter" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x928d7386, "pci_write_config_byte" },
	{ 0xd712aabe, "pci_write_config_word" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8423aab5, "pci_dev_put" },
	{ 0xd522f41c, "pci_dev_get" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x3656c243, "i2c_add_adapter" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x37a24b11, "pci_read_config_byte" },
	{ 0x85bd1608, "__request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x3ada9e06, "acpi_check_region" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0xa207ea98, "pci_get_device" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xf9a482f9, "msleep" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001039d00000008sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "ABF753D3B5115E8E6856ABA");
