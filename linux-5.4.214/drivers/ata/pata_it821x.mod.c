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
	{ 0x32cd571a, "ata_cable_80wire" },
	{ 0x9cf173, "ata_cable_unknown" },
	{ 0x1eb5ef35, "ata_bmdma_port_ops" },
	{ 0x7a69fa3b, "ata_pci_device_suspend" },
	{ 0xbd014083, "ata_pci_remove_one" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5857b225, "ioread16_rep" },
	{ 0x37a0cba, "kfree" },
	{ 0x12a38747, "usleep_range" },
	{ 0xf10de535, "ioread8" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x848d372e, "iowrite8" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x5d4710e1, "ata_bmdma_port_start" },
	{ 0xff62bfa9, "ata_bmdma_stop" },
	{ 0x5d5fd6f9, "ata_bmdma_start" },
	{ 0x2521e989, "ata_sff_dev_select" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x3110a0db, "ata_dev_pair" },
	{ 0xf333781a, "ata_do_dev_read_id" },
	{ 0x37a24b11, "pci_read_config_byte" },
	{ 0x308f838c, "ata_pci_bmdma_init_one" },
	{ 0x27dd129b, "pcim_enable_device" },
	{ 0x959dbc1c, "ata_host_resume" },
	{ 0x9c7d2da3, "ata_pci_device_do_resume" },
	{ 0xd0bb4ec1, "pci_write_config_dword" },
	{ 0xd712aabe, "pci_write_config_word" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0x467da8bf, "ata_bmdma_qc_issue" },
	{ 0xf5ef26ac, "ata_dev_next" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc5850110, "printk" },
	{ 0x486e2fb3, "ata_dev_printk" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xafddd545, "ata_id_c_string" },
	{ 0x928d7386, "pci_write_config_byte" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001283d00008211sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001283d00008212sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017F3d00001010sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "F1A16FB2EDA4C94EE2B6C80");
