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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x558a4438, "scsi_change_queue_depth" },
	{ 0x92a1a377, "spi_dv_device" },
	{ 0xd712aabe, "pci_write_config_word" },
	{ 0x8ed9fa14, "scsi_host_alloc" },
	{ 0x754d539c, "strlen" },
	{ 0x37a24b11, "pci_read_config_byte" },
	{ 0xa33bf30d, "scsi_add_host_with_dma" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0xc7ba3d4e, "dev_printk" },
	{ 0xbbfe175a, "pci_get_slot" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0x87b8798d, "sg_next" },
	{ 0x928d7386, "pci_write_config_byte" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0xf0f65023, "scmd_printk" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x174fb4fc, "spi_attach_transport" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x131e5561, "param_ops_charp" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xd6d0f7d4, "scsi_is_host_device" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xf10de535, "ioread8" },
	{ 0x11089ac7, "_ctype" },
	{ 0x3bffcc92, "pci_iounmap" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xf1e046cc, "panic" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0x5792f848, "strlcpy" },
	{ 0xf8c6e3da, "scsi_scan_host" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0xef06974, "spi_populate_ppr_msg" },
	{ 0x24d273d1, "add_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xf4e6656e, "scsi_host_put" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x319010b4, "pci_set_mwi" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xcffa2aff, "spi_populate_width_msg" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x848d372e, "iowrite8" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x25d158c1, "spi_release_transport" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xdc67eaad, "param_ops_byte" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x2c93838f, "scsi_dma_unmap" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0xc81d549b, "spi_display_xfer_agreement" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0xe0a388bf, "pcibios_resource_to_bus" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xa0c71dac, "spi_populate_sync_msg" },
	{ 0xc5534d64, "ioread16" },
	{ 0x8423aab5, "pci_dev_put" },
	{ 0x665ec217, "scsi_remove_host" },
	{ 0x29361773, "complete" },
	{ 0x5c4e734e, "pci_iomap" },
	{ 0xcce57a7f, "param_ops_ushort" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x3686ea09, "spi_print_msg" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0xe484e35f, "ioread32" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x1fce84d7, "scsi_dma_map" },
};

MODULE_INFO(depends, "scsi_transport_spi");

MODULE_ALIAS("pci:v00001000d00000001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000003sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000004sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000005sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000006sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000000Asv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00001000d0000000Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000000Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000000Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000000Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000010sv*sd*bc01sc00i*");
MODULE_ALIAS("pci:v00001000d00000012sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000013sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000020sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000021sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000008Fsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "34ECC6A10CAF87113201DAA");
