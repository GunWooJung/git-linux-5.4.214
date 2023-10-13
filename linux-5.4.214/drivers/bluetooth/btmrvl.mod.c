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
	{ 0x6a9466ef, "skb_queue_head" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x7f3966fa, "debugfs_create_dir" },
	{ 0x98d5d311, "debugfs_create_u8" },
	{ 0x6e9b2166, "__hci_cmd_sync" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xa4ac9b92, "hci_register_dev" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xd0a46a6a, "debugfs_create_file" },
	{ 0xc1716c35, "hci_unregister_dev" },
	{ 0x5b1c5c13, "debugfs_remove_recursive" },
	{ 0xabaae129, "kthread_create_on_node" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x57a9b3e7, "debugfs_create_x16" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x2505bf18, "kstrtol_from_user" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xf89e6197, "skb_queue_purge" },
	{ 0xc2448345, "default_llseek" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x85e73dd7, "kthread_stop" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x64f9650a, "hci_alloc_dev" },
	{ 0xd523d85d, "skb_push" },
	{ 0x32ee9868, "simple_open" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xc502ef3, "skb_queue_tail" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xab37f21b, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x3b89b540, "skb_dequeue" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8e8b23c5, "hci_free_dev" },
	{ 0xf89bc02c, "skb_put" },
};

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "26430B0CBEB3559E1E3F861");
