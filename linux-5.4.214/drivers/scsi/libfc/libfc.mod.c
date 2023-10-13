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
	{ 0x92a881bb, "kmem_cache_destroy" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x558a4438, "scsi_change_queue_depth" },
	{ 0x2b8ab42, "sg_copy_to_buffer" },
	{ 0x8ed9fa14, "scsi_host_alloc" },
	{ 0x765395c3, "param_ops_int" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xc7ba3d4e, "dev_printk" },
	{ 0xc32d0a02, "scsi_is_fc_rport" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x9034a696, "mempool_destroy" },
	{ 0x87b8798d, "sg_next" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x375f8bbd, "fc_get_event_number" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc972449f, "mempool_alloc_slab" },
	{ 0xd6d0f7d4, "scsi_is_host_device" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xfb578fc5, "memset" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0x9166fada, "strncpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x18c66278, "init_uts_ns" },
	{ 0x8a99a016, "mempool_free_slab" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdf46d4f1, "module_put" },
	{ 0x36de9bc6, "fc_host_post_event" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0xa916b694, "strnlen" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1d756705, "fc_remote_port_delete" },
	{ 0x823eae06, "blocking_notifier_call_chain" },
	{ 0x1000e51, "schedule" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x1953c958, "mempool_create" },
	{ 0xa54000ab, "fc_block_scsi_eh" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x51624e26, "kmem_cache_create" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x21c6c379, "fc_remote_port_add" },
	{ 0x5c7c59ab, "bsg_job_done" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x6d71399f, "try_module_get" },
};

MODULE_INFO(depends, "scsi_transport_fc");


MODULE_INFO(srcversion, "892C5EC576B6520410E96BE");
