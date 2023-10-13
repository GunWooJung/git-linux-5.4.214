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
	{ 0x9fd50714, "ata_sff_port_ops" },
	{ 0x67c23766, "ata_sff_data_xfer32" },
	{ 0x517ab5c8, "ata_cable_40wire" },
	{ 0x617415fb, "ata_pci_device_resume" },
	{ 0x7a69fa3b, "ata_pci_device_suspend" },
	{ 0xbd014083, "ata_pci_remove_one" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x145f9783, "ata_sff_qc_issue" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd712aabe, "pci_write_config_word" },
	{ 0x5d5c423a, "ata_pio_need_iordy" },
	{ 0x3b9c0625, "ata_sff_prereset" },
	{ 0x4eeac16b, "pci_test_config_bits" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa567172, "ata_print_version" },
	{ 0x56ce6cd8, "ata_host_activate" },
	{ 0x3a4f6a32, "ata_sff_interrupt" },
	{ 0x73a48b4a, "ata_sff_std_ports" },
	{ 0x33f57d5a, "ata_port_desc" },
	{ 0x7e75c696, "devm_ioport_map" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0xdaec76a7, "ata_host_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00008086d00001234sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "382EA91333CAB295077594C");
