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
	{ 0x765395c3, "param_ops_int" },
	{ 0x7a69fa3b, "ata_pci_device_suspend" },
	{ 0xbd014083, "ata_pci_remove_one" },
	{ 0x7e50a8a0, "ata_common_sdev_attrs" },
	{ 0x5814e313, "ata_scsi_unlock_native_capacity" },
	{ 0x2ceb96bf, "ata_std_bios_param" },
	{ 0xe6cf0c30, "ata_scsi_slave_destroy" },
	{ 0x725524e1, "ata_scsi_slave_config" },
	{ 0xd97b9d96, "ata_scsi_queuecmd" },
	{ 0xd8037265, "ata_scsi_ioctl" },
	{ 0x1eb5ef35, "ata_bmdma_port_ops" },
	{ 0x4ea740b1, "sata_std_hardreset" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x56ce6cd8, "ata_host_activate" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x222bc90f, "ata_port_pbar_desc" },
	{ 0x73a48b4a, "ata_sff_std_ports" },
	{ 0x4117e0fc, "pcim_iomap_table" },
	{ 0x2d2d0a7c, "ata_host_alloc_pinfo" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x75cdf6c6, "ata_slave_link_init" },
	{ 0x5f130ba8, "pcim_iomap_regions" },
	{ 0x3ddc45a4, "ata_pci_bmdma_prepare_host" },
	{ 0xa567172, "ata_print_version" },
	{ 0x27dd129b, "pcim_enable_device" },
	{ 0x87c50119, "ata_sff_error_handler" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x959dbc1c, "ata_host_resume" },
	{ 0x9c7d2da3, "ata_pci_device_do_resume" },
	{ 0xd0c1e622, "pci_read_config_dword" },
	{ 0xd0bb4ec1, "pci_write_config_dword" },
	{ 0xd2e3b3fd, "ata_bmdma_irq_clear" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x64f3ac90, "ata_port_printk" },
	{ 0x668f1837, "ata_msleep" },
	{ 0x92156ff2, "ata_sff_wait_ready" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x762a8119, "ata_sff_pause" },
	{ 0x5d5fd6f9, "ata_bmdma_start" },
	{ 0xbe80004e, "ata_sff_tf_load" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xa8e8d29c, "ata_port_freeze" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xe818b32b, "ata_bmdma_interrupt" },
	{ 0xe484e35f, "ioread32" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x928d7386, "pci_write_config_byte" },
	{ 0x37a24b11, "pci_read_config_byte" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001106d00005337sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00000591sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00003149sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00003249sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00005372sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00007372sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00005287sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00009000sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "D02B8C752BDC9941B11FCCB");
