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
	{ 0x1eb5ef35, "ata_bmdma_port_ops" },
	{ 0xbd014083, "ata_pci_remove_one" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x56ce6cd8, "ata_host_activate" },
	{ 0xe818b32b, "ata_bmdma_interrupt" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0xa567172, "ata_print_version" },
	{ 0xdca74e3c, "pcim_pin_device" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x222bc90f, "ata_port_pbar_desc" },
	{ 0x4117e0fc, "pcim_iomap_table" },
	{ 0x5f130ba8, "pcim_iomap_regions" },
	{ 0x27dd129b, "pcim_enable_device" },
	{ 0x2d2d0a7c, "ata_host_alloc_pinfo" },
	{ 0xc5182cc5, "ata_sff_softreset" },
	{ 0x6097714d, "sata_sff_hardreset" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001166d00000240sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001166d00000241sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001166d00000242sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001166d0000024Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001166d0000024Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001166d00000410sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001166d00000411sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "1FC22D6D136FCD84E9872BA");
