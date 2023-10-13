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
	{ 0x7e50a8a0, "ata_common_sdev_attrs" },
	{ 0x5814e313, "ata_scsi_unlock_native_capacity" },
	{ 0x2ceb96bf, "ata_std_bios_param" },
	{ 0xa5dfe37a, "ata_scsi_change_queue_depth" },
	{ 0xe6cf0c30, "ata_scsi_slave_destroy" },
	{ 0x725524e1, "ata_scsi_slave_config" },
	{ 0xd97b9d96, "ata_scsi_queuecmd" },
	{ 0xd8037265, "ata_scsi_ioctl" },
	{ 0x9fd50714, "ata_sff_port_ops" },
	{ 0x1eb5ef35, "ata_bmdma_port_ops" },
	{ 0x7a69fa3b, "ata_pci_device_suspend" },
	{ 0xbd014083, "ata_pci_remove_one" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x76593689, "sata_link_hardreset" },
	{ 0x4fdc945d, "sata_deb_timing_normal" },
	{ 0xcccfb2fa, "sata_deb_timing_hotplug" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x40a69247, "ata_link_printk" },
	{ 0x2a830a6c, "ata_sff_queue_pio_task" },
	{ 0x7646cee, "ata_tf_to_fis" },
	{ 0x467da8bf, "ata_bmdma_qc_issue" },
	{ 0xe0a55c86, "ata_port_abort" },
	{ 0x20ad258, "sata_async_notification" },
	{ 0x4270a9ad, "ata_link_offline" },
	{ 0x54691a92, "ata_bmdma_port_intr" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xe80f2b64, "sata_scr_write_flush" },
	{ 0x9370cc54, "sata_scr_read" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbb1eacb3, "ata_link_abort" },
	{ 0xb1d51891, "ata_ehi_push_desc" },
	{ 0x663b8498, "ata_ehi_clear_desc" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x8a1d6948, "_dev_notice" },
	{ 0x815588a6, "clk_enable" },
	{ 0xe27a5479, "phy_power_on" },
	{ 0x54ad8e0f, "devm_phy_optional_get" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x41187327, "clk_get" },
	{ 0x8281b36, "devm_ioremap" },
	{ 0x7e73a43b, "platform_get_irq" },
	{ 0xd072dc20, "platform_get_resource" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa0dd6d5a, "pci_enable_msi" },
	{ 0xdca74e3c, "pcim_pin_device" },
	{ 0xa567172, "ata_print_version" },
	{ 0x56ce6cd8, "ata_host_activate" },
	{ 0xe549079f, "pci_try_set_mwi" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x37a24b11, "pci_read_config_byte" },
	{ 0x222bc90f, "ata_port_pbar_desc" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x4117e0fc, "pcim_iomap_table" },
	{ 0x5f130ba8, "pcim_iomap_regions" },
	{ 0x27dd129b, "pcim_enable_device" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x2d2d0a7c, "ata_host_alloc_pinfo" },
	{ 0xc5182cc5, "ata_sff_softreset" },
	{ 0x4ea740b1, "sata_std_hardreset" },
	{ 0xce4dd865, "dmam_pool_create" },
	{ 0x486e2fb3, "ata_dev_printk" },
	{ 0xedf34aa2, "ata_eh_analyze_ncq_error" },
	{ 0x2db64d39, "sata_pmp_error_handler" },
	{ 0xa8e8d29c, "ata_port_freeze" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0xf10de535, "ioread8" },
	{ 0x64f3ac90, "ata_port_printk" },
	{ 0x87b8798d, "sg_next" },
	{ 0x71d267b6, "ata_qc_complete_multiple" },
	{ 0x5f76c2d8, "ata_qc_get_active" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x4cd53649, "phy_power_off" },
	{ 0x2e1ca751, "clk_put" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xf253fb1a, "ata_host_detach" },
	{ 0x12a38747, "usleep_range" },
	{ 0x959dbc1c, "ata_host_resume" },
	{ 0x9c7d2da3, "ata_pci_device_do_resume" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x95888aef, "_dev_alert" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xf3576ca7, "ata_sff_dma_pause" },
	{ 0xe59ad398, "ata_host_suspend" },
	{ 0xc5850110, "printk" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000011ABd00005040sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00005041sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00005080sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00005081sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00001720sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00001740sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00001742sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00006040sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00006041sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00006042sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00006080sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00006081sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000241sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000243sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00007042sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00002300sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00002310sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "E37BEB7C39B870D218BF867");
