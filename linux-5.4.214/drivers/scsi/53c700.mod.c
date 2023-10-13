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
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x558a4438, "scsi_change_queue_depth" },
	{ 0x92a1a377, "spi_dv_device" },
	{ 0x8ed9fa14, "scsi_host_alloc" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xa33bf30d, "scsi_add_host_with_dma" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xc7ba3d4e, "dev_printk" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x56470118, "__warn_printk" },
	{ 0x87b8798d, "sg_next" },
	{ 0x4d2f8209, "blk_mq_tag_to_rq" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf0f65023, "scmd_printk" },
	{ 0x174fb4fc, "spi_attach_transport" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xb83f306e, "scsi_print_command" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xd6d0f7d4, "scsi_is_host_device" },
	{ 0xfb578fc5, "memset" },
	{ 0xf10de535, "ioread8" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xc5850110, "printk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x4007983b, "sdev_prefix_printk" },
	{ 0x2e2b721e, "__scsi_device_lookup" },
	{ 0xf4e6656e, "scsi_host_put" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0xa6882c9e, "spi_populate_tag_msg" },
	{ 0x141ef8fc, "spi_schedule_dv_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x848d372e, "iowrite8" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x25d158c1, "spi_release_transport" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x2c93838f, "scsi_dma_unmap" },
	{ 0xc81d549b, "spi_display_xfer_agreement" },
	{ 0xc1d7d8bf, "dma_direct_sync_single_for_device" },
	{ 0xa0c71dac, "spi_populate_sync_msg" },
	{ 0x53632dee, "scsi_report_bus_reset" },
	{ 0xcd0db3fc, "dma_cache_sync" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x3686ea09, "spi_print_msg" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0xe484e35f, "ioread32" },
	{ 0x1fce84d7, "scsi_dma_map" },
};

MODULE_INFO(depends, "scsi_transport_spi");


MODULE_INFO(srcversion, "1CE125EFE49D9760585D259");
