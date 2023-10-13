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
	{ 0x7a69fa3b, "ata_pci_device_suspend" },
	{ 0xbd014083, "ata_pci_remove_one" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x145f9783, "ata_sff_qc_issue" },
	{ 0xc5850110, "printk" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xf6e874f5, "ata_timing_merge" },
	{ 0x56cc6f6f, "ata_timing_compute" },
	{ 0x3110a0db, "ata_dev_pair" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x959dbc1c, "ata_host_resume" },
	{ 0x9c7d2da3, "ata_pci_device_do_resume" },
	{ 0xc95e0994, "ata_pci_sff_init_one" },
	{ 0x27dd129b, "pcim_enable_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x37a24b11, "pci_read_config_byte" },
	{ 0x928d7386, "pci_write_config_byte" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001095d00000640sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "75DDD36C08A2D75D4B7C5D1");
