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
	{ 0x517ab5c8, "ata_cable_40wire" },
	{ 0x1eb5ef35, "ata_bmdma_port_ops" },
	{ 0x7a69fa3b, "ata_pci_device_suspend" },
	{ 0xbd014083, "ata_pci_remove_one" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xa567172, "ata_print_version" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x308f838c, "ata_pci_bmdma_init_one" },
	{ 0x27dd129b, "pcim_enable_device" },
	{ 0x959dbc1c, "ata_host_resume" },
	{ 0x9c7d2da3, "ata_pci_device_do_resume" },
	{ 0xe8ed0bc8, "ata_std_qc_defer" },
	{ 0xd712aabe, "pci_write_config_word" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x37a24b11, "pci_read_config_byte" },
	{ 0x3b9c0625, "ata_sff_prereset" },
	{ 0x4eeac16b, "pci_test_config_bits" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x928d7386, "pci_write_config_byte" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001191d00000005sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001191d00000006sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001191d00000007sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001191d00000008sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001191d00000009sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "FCA4DCC2F9782D00EAE1E18");
