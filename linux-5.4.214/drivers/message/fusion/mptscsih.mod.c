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
	{ 0xeb233a45, "__kmalloc" },
	{ 0x558a4438, "scsi_change_queue_depth" },
	{ 0xd21e4276, "scsi_block_requests" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x60332888, "mpt_set_taskmgmt_in_progress_flag" },
	{ 0x46526b90, "mpt_HardResetHandler" },
	{ 0x5ed822bf, "scsi_unblock_requests" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0xb2279e87, "mpt_get_msg_frame" },
	{ 0x87b8798d, "sg_next" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xce5fd8d7, "mpt_halt_firmware" },
	{ 0xb83f306e, "scsi_print_command" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x85afd560, "mpt_raid_phys_disk_get_num_paths" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x3a0993f9, "mpt_send_handshake_request" },
	{ 0x4007983b, "sdev_prefix_printk" },
	{ 0x502108d0, "mpt_fwfault_debug" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf4e6656e, "scsi_host_put" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xe55b100e, "mpt_put_msg_frame" },
	{ 0x3d8b2a15, "mpt_resume" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x36a86c1d, "mpt_Soft_Hard_ResetHandler" },
	{ 0xecf1c741, "mpt_GetIocState" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0x8d8b870b, "mpt_raid_phys_disk_pg1" },
	{ 0x37a0cba, "kfree" },
	{ 0x2c93838f, "scsi_dma_unmap" },
	{ 0x4d9196aa, "mpt_print_ioc_summary" },
	{ 0x86c05293, "blk_queue_dma_alignment" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x96ad65c8, "mpt_free_msg_frame" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xd27ec472, "mpt_suspend" },
	{ 0x2dd79e14, "mpt_detach" },
	{ 0x625e56ad, "mpt_clear_taskmgmt_in_progress_flag" },
	{ 0x1fce84d7, "scsi_dma_map" },
	{ 0x872731ea, "mpt_put_msg_frame_hi_pri" },
};

MODULE_INFO(depends, "mptbase");


MODULE_INFO(srcversion, "019341844F87731F5DC96D6");
