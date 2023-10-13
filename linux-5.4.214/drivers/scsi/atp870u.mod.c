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
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x928d7386, "pci_write_config_byte" },
	{ 0xf8c6e3da, "scsi_scan_host" },
	{ 0xa33bf30d, "scsi_add_host_with_dma" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x37a24b11, "pci_read_config_byte" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x8ed9fa14, "scsi_host_alloc" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0xe35ed617, "seq_puts" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2c93838f, "scsi_dma_unmap" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x87b8798d, "sg_next" },
	{ 0x1fce84d7, "scsi_dma_map" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc5850110, "printk" },
	{ 0xf4e6656e, "scsi_host_put" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x665ec217, "scsi_remove_host" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001191d0000808Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001191d00008080sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001191d00008081sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001191d00008002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001191d00008010sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001191d00008020sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001191d00008030sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001191d00008040sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001191d00008050sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001191d00008060sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "BCFBB18706F2082E70F0EED");
