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
	{ 0xeb233a45, "__kmalloc" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xaea92c90, "__tracepoint_iscsi_dbg_eh" },
	{ 0x8ed9fa14, "scsi_host_alloc" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xa33bf30d, "scsi_add_host_with_dma" },
	{ 0x5aceb252, "iscsi_block_session" },
	{ 0xb87bc864, "iscsi_put_conn" },
	{ 0xc7ba3d4e, "dev_printk" },
	{ 0xfd20af10, "iscsi_remove_session" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x8112b3d2, "scsi_build_sense_buffer" },
	{ 0xe8e5d5c5, "iscsi_get_conn" },
	{ 0x47268996, "iscsi_unblock_session" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xea3c8e4e, "scsilun_to_int" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbd462b55, "__kfifo_init" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc4673b62, "iscsi_add_session" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xfb578fc5, "memset" },
	{ 0xca41851f, "iscsi_recv_pdu" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x24d273d1, "add_timer" },
	{ 0xf4e6656e, "scsi_host_put" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xce5d776c, "iscsi_create_conn" },
	{ 0x8837fcfd, "flush_signals" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x3133dc5c, "__tracepoint_iscsi_dbg_session" },
	{ 0xdf46d4f1, "module_put" },
	{ 0x26772c9f, "iscsi_destroy_conn" },
	{ 0x6b6ac946, "scsi_host_get" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x153cf299, "iscsi_conn_error_event" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x818416e1, "scsi_set_sense_information" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x15af7f4, "system_state" },
	{ 0x8e7cb06c, "iscsi_free_session" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x2383c145, "iscsi_dbg_trace" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x665ec217, "scsi_remove_host" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xaac3519d, "__tracepoint_iscsi_dbg_conn" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xa67be39f, "iscsi_host_for_each_session" },
	{ 0x6d71399f, "try_module_get" },
	{ 0x616b7645, "iscsi_session_chkready" },
	{ 0xeae9580e, "iscsi_alloc_session" },
};

MODULE_INFO(depends, "scsi_transport_iscsi");


MODULE_INFO(srcversion, "42D926DEB4026CD24C41AD5");
