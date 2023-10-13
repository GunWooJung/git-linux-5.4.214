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
	{ 0x517ab5c8, "ata_cable_40wire" },
	{ 0x765395c3, "param_ops_int" },
	{ 0xf253fb1a, "ata_host_detach" },
	{ 0xa5efbf4c, "async_synchronize_full" },
	{ 0x56ce6cd8, "ata_host_activate" },
	{ 0x3a4f6a32, "ata_sff_interrupt" },
	{ 0x33f57d5a, "ata_port_desc" },
	{ 0x73a48b4a, "ata_sff_std_ports" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdaec76a7, "ata_host_alloc" },
	{ 0x7e75c696, "devm_ioport_map" },
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0x56cf6cd9, "platform_device_register_full" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x85bd1608, "__request_region" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0xa207ea98, "pci_get_device" },
	{ 0x67c23766, "ata_sff_data_xfer32" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x486e2fb3, "ata_dev_printk" },
	{ 0xf5ef26ac, "ata_dev_next" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xf6e874f5, "ata_timing_merge" },
	{ 0xf10de535, "ioread8" },
	{ 0x848d372e, "iowrite8" },
	{ 0xc5534d64, "ioread16" },
	{ 0x3110a0db, "ata_dev_pair" },
	{ 0x145f9783, "ata_sff_qc_issue" },
	{ 0x5d5c423a, "ata_pio_need_iordy" },
	{ 0x56cc6f6f, "ata_timing_compute" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe484e35f, "ioread32" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xbfc177bc, "iowrite32_rep" },
	{ 0x3f0546a8, "ioread32_rep" },
	{ 0x81aebe3e, "ata_sff_data_xfer" },
	{ 0xc7c073b7, "__devm_request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xc5850110, "printk" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc22cd4dd, "pv_ops" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "817A90F89977190477716C1");
