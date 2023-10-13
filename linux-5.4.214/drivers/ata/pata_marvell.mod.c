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
	{ 0x7e50a8a0, "ata_common_sdev_attrs" },
	{ 0x5814e313, "ata_scsi_unlock_native_capacity" },
	{ 0x2ceb96bf, "ata_std_bios_param" },
	{ 0xe6cf0c30, "ata_scsi_slave_destroy" },
	{ 0x725524e1, "ata_scsi_slave_config" },
	{ 0xd97b9d96, "ata_scsi_queuecmd" },
	{ 0xd8037265, "ata_scsi_ioctl" },
	{ 0x1eb5ef35, "ata_bmdma_port_ops" },
	{ 0x617415fb, "ata_pci_device_resume" },
	{ 0x7a69fa3b, "ata_pci_device_suspend" },
	{ 0xbd014083, "ata_pci_remove_one" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x3b9c0625, "ata_sff_prereset" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xdc584c7f, "ata_dummy_port_info" },
	{ 0x308f838c, "ata_pci_bmdma_init_one" },
	{ 0x3bffcc92, "pci_iounmap" },
	{ 0xe484e35f, "ioread32" },
	{ 0xf10de535, "ioread8" },
	{ 0xc5850110, "printk" },
	{ 0x5c4e734e, "pci_iomap" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000011ABd00006101sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00006121sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00006123sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00006145sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001B4Bd000091A0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001B4Bd000091A4sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "97B70FB20D80713A45933F8");
