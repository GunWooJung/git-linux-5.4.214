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
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0xcce57a7f, "param_ops_ushort" },
	{ 0x5ae8a115, "noop_llseek" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0xbce3803, "__register_chrdev" },
	{ 0xcbaa4b74, "remove_proc_entry" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xc5850110, "printk" },
	{ 0x7369dd1b, "proc_mkdir" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x56470118, "__warn_printk" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0xf8c6e3da, "scsi_scan_host" },
	{ 0xa33bf30d, "scsi_add_host_with_dma" },
	{ 0xc62cb64, "proc_create_single_data" },
	{ 0x9437181d, "proc_mkdir_data" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xd0c1e622, "pci_read_config_dword" },
	{ 0x8ed9fa14, "scsi_host_alloc" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x85bd1608, "__request_region" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x8a1d6948, "_dev_notice" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x69acdf38, "memcpy" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0xf4e6656e, "scsi_host_put" },
	{ 0x2290a925, "remove_proc_subtree" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0xedc03953, "iounmap" },
	{ 0x665ec217, "scsi_remove_host" },
	{ 0x72ea7b2d, "scsi_device_type" },
	{ 0x2d2e8ee8, "seq_write" },
	{ 0x3885862f, "seq_putc" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xf9a482f9, "msleep" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0xaefa51aa, "pci_alloc_dev" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x6d334118, "__get_user_8" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0xe35ed617, "seq_puts" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x87b8798d, "sg_next" },
	{ 0x1fce84d7, "scsi_dma_map" },
	{ 0x37a0cba, "kfree" },
	{ 0x4afe9a77, "scsi_partsize" },
	{ 0xf47ea6e8, "scsi_bios_ptable" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x76af1d0e, "_dev_crit" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x29361773, "complete" },
	{ 0x2c93838f, "scsi_dma_unmap" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc6cbbc89, "capable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v0000101Ed00009010sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000101Ed00009060sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001960sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "E0AD40D8EFC299F8A22CD11");
