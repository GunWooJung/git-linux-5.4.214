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
	{ 0x68a41536, "param_ops_bool" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x87b8798d, "sg_next" },
	{ 0x1fce84d7, "scsi_dma_map" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0x56470118, "__warn_printk" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x56c8799d, "scsi_kunmap_atomic_sg" },
	{ 0x6c5dae23, "scsi_kmap_atomic_sg" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xf8c6e3da, "scsi_scan_host" },
	{ 0xa33bf30d, "scsi_add_host_with_dma" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x85bd1608, "__request_region" },
	{ 0x8ed9fa14, "scsi_host_alloc" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0xf4e6656e, "scsi_host_put" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x665ec217, "scsi_remove_host" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x2c93838f, "scsi_dma_unmap" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0xc1d7d8bf, "dma_direct_sync_single_for_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3bd23fd8, "dma_direct_sync_single_for_cpu" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x24d273d1, "add_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x3885862f, "seq_putc" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xe35ed617, "seq_puts" },
	{ 0xc5850110, "printk" },
	{ 0x37a0cba, "kfree" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x75973455, "scsicam_bios_param" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001DE1d00000391sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "43C0A53F5B649C4CA827D0C");
