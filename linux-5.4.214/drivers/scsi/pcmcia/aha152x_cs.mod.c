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
	{ 0x2d3385d3, "system_wq" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xb55067d3, "pcmcia_enable_device" },
	{ 0x49951708, "sev_enable_key" },
	{ 0x8ed9fa14, "scsi_host_alloc" },
	{ 0x765395c3, "param_ops_int" },
	{ 0xa33bf30d, "scsi_add_host_with_dma" },
	{ 0xfd864eaf, "pcmcia_register_driver" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x461d16ca, "sg_nents" },
	{ 0xc7ba3d4e, "dev_printk" },
	{ 0xe35ed617, "seq_puts" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0x87b8798d, "sg_next" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf0f65023, "scmd_printk" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x32dce1b0, "pcmcia_request_io" },
	{ 0xb83f306e, "scsi_print_command" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7371f00b, "scsi_eh_restore_cmnd" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0xf1e046cc, "panic" },
	{ 0xf8c6e3da, "scsi_scan_host" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x6af95259, "pcmcia_loop_config" },
	{ 0xf4e6656e, "scsi_host_put" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x2c8218b3, "blk_queue_bounce_limit" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x3e0b548e, "scsi_eh_prep_cmnd" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x75973455, "scsicam_bios_param" },
	{ 0x37a0cba, "kfree" },
	{ 0xb9262523, "pcmcia_unregister_driver" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0xa0c71dac, "spi_populate_sync_msg" },
	{ 0x665ec217, "scsi_remove_host" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x19c85322, "pcmcia_disable_device" },
	{ 0x3686ea09, "spi_print_msg" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "pcmcia,scsi_transport_spi");

MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paCDF7E4CCpb35F26476pcA8851D6Epd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paAD89C6E8pb35F26476pcA8851D6Epd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa24BA9738pb3A3C3D20pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa085A850Bpb80A6535Cpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paAD89C6E8pb5F9A615Bpc*pd*");

MODULE_INFO(srcversion, "CE495F7A434980790A2D116");
