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
	{ 0x7a69fa3b, "ata_pci_device_suspend" },
	{ 0xbd014083, "ata_pci_remove_one" },
	{ 0x7e50a8a0, "ata_common_sdev_attrs" },
	{ 0x5814e313, "ata_scsi_unlock_native_capacity" },
	{ 0x2ceb96bf, "ata_std_bios_param" },
	{ 0xe6cf0c30, "ata_scsi_slave_destroy" },
	{ 0xd97b9d96, "ata_scsi_queuecmd" },
	{ 0xd8037265, "ata_scsi_ioctl" },
	{ 0x1eb5ef35, "ata_bmdma_port_ops" },
	{ 0xe8ed0bc8, "ata_std_qc_defer" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0x87b8798d, "sg_next" },
	{ 0xdbe1cfcf, "ata_bmdma_qc_prep" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xa0dd6d5a, "pci_enable_msi" },
	{ 0x8a1d6948, "_dev_notice" },
	{ 0xa567172, "ata_print_version" },
	{ 0x6df74d21, "ata_pci_sff_activate_host" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x5f130ba8, "pcim_iomap_regions" },
	{ 0x3ddc45a4, "ata_pci_bmdma_prepare_host" },
	{ 0x27dd129b, "pcim_enable_device" },
	{ 0x9ed02ae3, "dmam_alloc_attrs" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x5d4710e1, "ata_bmdma_port_start" },
	{ 0x76593689, "sata_link_hardreset" },
	{ 0x40a69247, "ata_link_printk" },
	{ 0x59a4903b, "sata_link_resume" },
	{ 0x4fdc945d, "sata_deb_timing_normal" },
	{ 0xcccfb2fa, "sata_deb_timing_hotplug" },
	{ 0xe484e35f, "ioread32" },
	{ 0x5346201e, "ata_bmdma_post_internal_cmd" },
	{ 0xd2e3b3fd, "ata_bmdma_irq_clear" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xe0a55c86, "ata_port_abort" },
	{ 0x5c0717b7, "__ata_ehi_push_desc" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xe55d3fc, "blk_queue_max_segments" },
	{ 0xcf627578, "blk_queue_segment_boundary" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x841ad101, "ata_sff_tf_read" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x467da8bf, "ata_bmdma_qc_issue" },
	{ 0x64f3ac90, "ata_port_printk" },
	{ 0xdc086e80, "ata_bmdma_error_handler" },
	{ 0xb1d51891, "ata_ehi_push_desc" },
	{ 0x71d267b6, "ata_qc_complete_multiple" },
	{ 0x5f76c2d8, "ata_qc_get_active" },
	{ 0x495fb36d, "sata_scr_write" },
	{ 0x9370cc54, "sata_scr_read" },
	{ 0x663b8498, "ata_ehi_clear_desc" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xa8e8d29c, "ata_port_freeze" },
	{ 0x54691a92, "ata_bmdma_port_intr" },
	{ 0x3917cd29, "ata_sff_check_status" },
	{ 0xf10de535, "ioread8" },
	{ 0x848d372e, "iowrite8" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x486e2fb3, "ata_dev_printk" },
	{ 0xa5dfe37a, "ata_scsi_change_queue_depth" },
	{ 0xafddd545, "ata_id_c_string" },
	{ 0x725524e1, "ata_scsi_slave_config" },
	{ 0x959dbc1c, "ata_host_resume" },
	{ 0x9c7d2da3, "ata_pci_device_do_resume" },
	{ 0xd0bb4ec1, "pci_write_config_dword" },
	{ 0xd0c1e622, "pci_read_config_dword" },
	{ 0x928d7386, "pci_write_config_byte" },
	{ 0x37a24b11, "pci_read_config_byte" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xff62bfa9, "ata_bmdma_stop" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000010DEd0000008Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000000E3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000000EEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000054sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000055sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000036sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000003Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000266sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000267sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000037Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000037Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000003E7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000003F6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000003F7sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "6CE841F475745B3117009BB");
