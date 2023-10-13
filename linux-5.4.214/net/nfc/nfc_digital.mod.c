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
	{ 0x7bc45fcf, "nfc_register_device" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x9a34a2b, "crc_itu_t" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xde32628a, "nfc_dep_link_is_up" },
	{ 0x2577862c, "nfc_targets_found" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0xa9fb34d6, "nfc_tm_activated" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xd523d85d, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0xbed6138e, "skb_pull" },
	{ 0xffcb73a9, "nfc_set_remote_general_bytes" },
	{ 0x9003bb09, "nfc_get_local_general_bytes" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xf8e4e17a, "skb_copy_expand" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0x8e17faf3, "put_device" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd57c62a1, "nfc_alloc_recv_skb" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x4356de1b, "__pskb_copy_fclone" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xa540e848, "nfc_tm_data_received" },
	{ 0x52ecbc75, "crc_ccitt" },
	{ 0x9c90b3bb, "nfc_allocate_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x9d96dda5, "nfc_unregister_device" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xad263612, "consume_skb" },
	{ 0xf89bc02c, "skb_put" },
};

MODULE_INFO(depends, "nfc,crc-itu-t");


MODULE_INFO(srcversion, "415234584EBDD5095FFEC93");
