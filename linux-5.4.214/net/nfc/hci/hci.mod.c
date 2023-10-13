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
	{ 0x6a9466ef, "skb_queue_head" },
	{ 0x7bc45fcf, "nfc_register_device" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x754d539c, "strlen" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x27aa24cd, "nfc_driver_failure" },
	{ 0x2577862c, "nfc_targets_found" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xb61a4cdf, "skb_dequeue_tail" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xf89e6197, "skb_queue_purge" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xd523d85d, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xbed6138e, "skb_pull" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xc502ef3, "skb_queue_tail" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0x8e17faf3, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd57c62a1, "nfc_alloc_recv_skb" },
	{ 0x1000e51, "schedule" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x9c90b3bb, "nfc_allocate_device" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x9d96dda5, "nfc_unregister_device" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x3b89b540, "skb_dequeue" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xf89bc02c, "skb_put" },
};

MODULE_INFO(depends, "nfc");


MODULE_INFO(srcversion, "58D5713A80D816341BCA79C");
