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
	{ 0x725524e1, "ata_scsi_slave_config" },
	{ 0xd97b9d96, "ata_scsi_queuecmd" },
	{ 0xd8037265, "ata_scsi_ioctl" },
	{ 0xda10e9ca, "ata_bmdma32_port_ops" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xdca74e3c, "pcim_pin_device" },
	{ 0xa567172, "ata_print_version" },
	{ 0x56ce6cd8, "ata_host_activate" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x222bc90f, "ata_port_pbar_desc" },
	{ 0x73a48b4a, "ata_sff_std_ports" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x4117e0fc, "pcim_iomap_table" },
	{ 0x5f130ba8, "pcim_iomap_regions" },
	{ 0x27dd129b, "pcim_enable_device" },
	{ 0x2d2d0a7c, "ata_host_alloc_pinfo" },
	{ 0x50877b9, "dmi_first_match" },
	{ 0x87b8798d, "sg_next" },
	{ 0xf5ef26ac, "ata_dev_next" },
	{ 0x8a3e67b5, "ata_do_set_mode" },
	{ 0x486e2fb3, "ata_dev_printk" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xafddd545, "ata_id_c_string" },
	{ 0xf10de535, "ioread8" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xf3576ca7, "ata_sff_dma_pause" },
	{ 0x848d372e, "iowrite8" },
	{ 0xb1d51891, "ata_ehi_push_desc" },
	{ 0x1307e25, "ata_sff_hsm_move" },
	{ 0xd2e3b3fd, "ata_bmdma_irq_clear" },
	{ 0xa8e8d29c, "ata_port_freeze" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x959dbc1c, "ata_host_resume" },
	{ 0x9c7d2da3, "ata_pci_device_do_resume" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x37a24b11, "pci_read_config_byte" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001095d00003112sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001095d00000240sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001095d00003512sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001095d00003114sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000436Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004379sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000437Asv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "05EFDAA337A944F13305110");
