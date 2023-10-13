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
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x56470118, "__warn_printk" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x1fce84d7, "scsi_dma_map" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x87b8798d, "sg_next" },
	{ 0x9166fada, "strncpy" },
	{ 0x8d73278e, "hex_asc_upper" },
	{ 0x953e1b9e, "ktime_get_real_seconds" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0xc5850110, "printk" },
	{ 0x665ec217, "scsi_remove_host" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x69acdf38, "memcpy" },
	{ 0x905695ab, "sg_copy_from_buffer" },
	{ 0x2b8ab42, "sg_copy_to_buffer" },
	{ 0x2c93838f, "scsi_dma_unmap" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xfff5afc, "time64_to_tm" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xaf7d0f48, "current_task" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x96b29254, "strncasecmp" },
	{ 0x349cba85, "strchr" },
	{ 0x85df9b6c, "strsep" },
	{ 0xf4e6656e, "scsi_host_put" },
	{ 0xf8c6e3da, "scsi_scan_host" },
	{ 0xa33bf30d, "scsi_add_host_with_dma" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x8ed9fa14, "scsi_host_alloc" },
	{ 0x37a24b11, "pci_read_config_byte" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x6fcb87a1, "touch_softlockup_watchdog" },
	{ 0xc4ae915e, "arch_touch_nmi_watchdog" },
	{ 0xedc03953, "iounmap" },
	{ 0x37a0cba, "kfree" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfb578fc5, "memset" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x558a4438, "scsi_change_queue_depth" },
	{ 0x3885862f, "seq_putc" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0xe35ed617, "seq_puts" },
	{ 0xc7ba3d4e, "dev_printk" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001014d0000002Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001014d000001BDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000250sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "21F97E55D46DA773D4CB1DB");
