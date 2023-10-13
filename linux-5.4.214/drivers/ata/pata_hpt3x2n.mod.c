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
	{ 0xbd014083, "ata_pci_remove_one" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xe8ed0bc8, "ata_std_qc_defer" },
	{ 0x467da8bf, "ata_bmdma_qc_issue" },
	{ 0xf10de535, "ioread8" },
	{ 0x848d372e, "iowrite8" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x3b9c0625, "ata_sff_prereset" },
	{ 0xff62bfa9, "ata_bmdma_stop" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x308f838c, "ata_pci_bmdma_init_one" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0xd0c1e622, "pci_read_config_dword" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc5850110, "printk" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xd0bb4ec1, "pci_write_config_dword" },
	{ 0x37a24b11, "pci_read_config_byte" },
	{ 0x928d7386, "pci_write_config_byte" },
	{ 0x27dd129b, "pcim_enable_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001103d00000004sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00000007sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00000005sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00000006sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00000009sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "1892388070F58063DE64E27");
