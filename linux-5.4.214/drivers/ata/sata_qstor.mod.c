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
	{ 0xbd014083, "ata_pci_remove_one" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x145f9783, "ata_sff_qc_issue" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa567172, "ata_print_version" },
	{ 0x56ce6cd8, "ata_host_activate" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x222bc90f, "ata_port_pbar_desc" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x4117e0fc, "pcim_iomap_table" },
	{ 0x5f130ba8, "pcim_iomap_regions" },
	{ 0x27dd129b, "pcim_enable_device" },
	{ 0x2d2d0a7c, "ata_host_alloc_pinfo" },
	{ 0x7646cee, "ata_tf_to_fis" },
	{ 0x87b8798d, "sg_next" },
	{ 0x3b9c0625, "ata_sff_prereset" },
	{ 0x9ed02ae3, "dmam_alloc_attrs" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xe0a55c86, "ata_port_abort" },
	{ 0xa8e8d29c, "ata_port_freeze" },
	{ 0xb1d51891, "ata_ehi_push_desc" },
	{ 0x663b8498, "ata_ehi_clear_desc" },
	{ 0xf839138c, "ata_qc_complete" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xfa219c7a, "ata_sff_port_intr" },
	{ 0x3917cd29, "ata_sff_check_status" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x87c50119, "ata_sff_error_handler" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000015E9d00002068sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "4E58D557F30799A1535CEED");
