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
	{ 0xf2ab01, "ahci_sdev_attrs" },
	{ 0xd838eac5, "ahci_shost_attrs" },
	{ 0x5814e313, "ata_scsi_unlock_native_capacity" },
	{ 0x2ceb96bf, "ata_std_bios_param" },
	{ 0xa5dfe37a, "ata_scsi_change_queue_depth" },
	{ 0xe6cf0c30, "ata_scsi_slave_destroy" },
	{ 0x725524e1, "ata_scsi_slave_config" },
	{ 0xd97b9d96, "ata_scsi_queuecmd" },
	{ 0xd8037265, "ata_scsi_ioctl" },
	{ 0x947d4b8b, "ahci_ops" },
	{ 0xbd014083, "ata_pci_remove_one" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xc5850110, "printk" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xdca74e3c, "pcim_pin_device" },
	{ 0xa0dd6d5a, "pci_enable_msi" },
	{ 0xea50dad3, "ahci_ignore_sss" },
	{ 0xa567172, "ata_print_version" },
	{ 0x8278702f, "ahci_host_activate" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xaaf41bd0, "ahci_print_info" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x672552d, "ata_dummy_port_ops" },
	{ 0x222bc90f, "ata_port_pbar_desc" },
	{ 0x2d2d0a7c, "ata_host_alloc_pinfo" },
	{ 0xc94e6153, "ahci_set_em_messages" },
	{ 0xafa5203c, "ahci_save_initial_config" },
	{ 0x4117e0fc, "pcim_iomap_table" },
	{ 0x9424ca0a, "pcim_iomap_regions_request_all" },
	{ 0x27dd129b, "pcim_enable_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x76a38fe9, "ahci_port_resume" },
	{ 0x9ed02ae3, "dmam_alloc_attrs" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x9384cd49, "ata_tf_from_fis" },
	{ 0x87b8798d, "sg_next" },
	{ 0xc46557f7, "ahci_fill_cmd_slot" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7646cee, "ata_tf_to_fis" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x7a69fa3b, "ata_pci_device_suspend" },
	{ 0x6da41d88, "ahci_init_controller" },
	{ 0xe8e8beff, "ahci_reset_controller" },
	{ 0x959dbc1c, "ata_host_resume" },
	{ 0x9c7d2da3, "ata_pci_device_do_resume" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "libahci");

MODULE_ALIAS("pci:v00001191d0000000Dsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "844AD21A46BED911686C9EA");
