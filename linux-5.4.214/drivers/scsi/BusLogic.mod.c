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
	{ 0x131e5561, "param_ops_charp" },
	{ 0x665ec217, "scsi_remove_host" },
	{ 0xf8c6e3da, "scsi_scan_host" },
	{ 0xa33bf30d, "scsi_add_host_with_dma" },
	{ 0x7054a3e4, "request_dma" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xf4e6656e, "scsi_host_put" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x8ed9fa14, "scsi_host_alloc" },
	{ 0x85bd1608, "__request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x69acdf38, "memcpy" },
	{ 0x87b8798d, "sg_next" },
	{ 0x1fce84d7, "scsi_dma_map" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x2c93838f, "scsi_dma_unmap" },
	{ 0x558a4438, "scsi_change_queue_depth" },
	{ 0xd522f41c, "pci_dev_get" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0xa207ea98, "pci_get_device" },
	{ 0xe914e41e, "strcpy" },
	{ 0x8a7d1c31, "high_memory" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xfb578fc5, "memset" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x868acba5, "get_options" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x37a0cba, "kfree" },
	{ 0xf47ea6e8, "scsi_bios_ptable" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xc5850110, "printk" },
	{ 0xa916b694, "strnlen" },
	{ 0xac94e86b, "vsprintf" },
	{ 0x8423aab5, "pci_dev_put" },
	{ 0x72b243d4, "free_dma" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xe35ed617, "seq_puts" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0x2d2e8ee8, "seq_write" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v0000104Bd00001040sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000104Bd00000140sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000104Bd00008130sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "3ECE20F41B44E543D8E69BD");
