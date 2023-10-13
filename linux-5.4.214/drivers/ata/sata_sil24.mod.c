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
	{ 0xa5dfe37a, "ata_scsi_change_queue_depth" },
	{ 0xe6cf0c30, "ata_scsi_slave_destroy" },
	{ 0x725524e1, "ata_scsi_slave_config" },
	{ 0xd97b9d96, "ata_scsi_queuecmd" },
	{ 0xd8037265, "ata_scsi_ioctl" },
	{ 0xf2fe7dd, "sata_pmp_port_ops" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xc9aba70, "pci_intx" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xa0dd6d5a, "pci_enable_msi" },
	{ 0xa567172, "ata_print_version" },
	{ 0x56ce6cd8, "ata_host_activate" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x5094ac27, "pcie_set_readrq" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x2d2d0a7c, "ata_host_alloc_pinfo" },
	{ 0x4117e0fc, "pcim_iomap_table" },
	{ 0x5f130ba8, "pcim_iomap_regions" },
	{ 0x27dd129b, "pcim_enable_device" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x5ec62549, "ata_dev_classify" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe8ed0bc8, "ata_std_qc_defer" },
	{ 0x87b8798d, "sg_next" },
	{ 0x7646cee, "ata_tf_to_fis" },
	{ 0x69acdf38, "memcpy" },
	{ 0x9384cd49, "ata_tf_from_fis" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x668f1837, "ata_msleep" },
	{ 0x4270a9ad, "ata_link_offline" },
	{ 0xf0b43d60, "sata_link_debounce" },
	{ 0xc428068d, "sata_deb_timing_long" },
	{ 0x82836fcf, "ata_link_online" },
	{ 0xf8ec8a48, "sata_set_spd" },
	{ 0x40a69247, "ata_link_printk" },
	{ 0x4ea740b1, "sata_std_hardreset" },
	{ 0x2db64d39, "sata_pmp_error_handler" },
	{ 0x7e7b2421, "ata_eh_freeze_port" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x222bc90f, "ata_port_pbar_desc" },
	{ 0x9ed02ae3, "dmam_alloc_attrs" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xe0a55c86, "ata_port_abort" },
	{ 0x20ad258, "sata_async_notification" },
	{ 0xbb1eacb3, "ata_link_abort" },
	{ 0xb1d51891, "ata_ehi_push_desc" },
	{ 0x663b8498, "ata_ehi_clear_desc" },
	{ 0xa8e8d29c, "ata_port_freeze" },
	{ 0x64f3ac90, "ata_port_printk" },
	{ 0xf8f3a0fb, "ata_ratelimit" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x71d267b6, "ata_qc_complete_multiple" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x959dbc1c, "ata_host_resume" },
	{ 0x9c7d2da3, "ata_pci_device_do_resume" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xe10ca535, "ata_wait_register" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001095d00003124sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003124sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001095d00003132sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001095d00000242sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001095d00000244sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001095d00003131sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001095d00003531sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "76C5C35AA5E45764E883DEE");
