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
	{ 0x2d3385d3, "system_wq" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc52f6b9e, "nci_req_complete" },
	{ 0xde0a2c20, "nci_hci_set_param" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x6088bf99, "nci_hci_dev_session_init" },
	{ 0x6f5aa457, "nci_recv_frame" },
	{ 0x50ad329a, "nfc_vendor_cmd_reply" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x665fd1e3, "nci_hci_send_cmd" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xa3594e42, "nfc_se_connectivity" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x646d3adf, "nci_hci_clear_all_pipes" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x34db2ad, "nci_hci_send_event" },
	{ 0xb61a4cdf, "skb_dequeue_tail" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xf89e6197, "skb_queue_purge" },
	{ 0xa8cc8d0e, "nci_unregister_device" },
	{ 0x74fac1e6, "nci_nfcc_loopback" },
	{ 0xc5850110, "printk" },
	{ 0x74a2b665, "nci_core_conn_create" },
	{ 0xe579ff5f, "nci_prop_cmd" },
	{ 0x262e823a, "wait_for_completion_interruptible" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xd523d85d, "skb_push" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xbeb4205f, "nci_hci_connect_gate" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xbd4ce733, "nfc_se_transaction" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xc502ef3, "skb_queue_tail" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x4f84b69d, "nci_hci_get_param" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd13ae208, "nci_nfcee_mode_set" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf7ca6688, "nfc_remove_se" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x96848186, "scnprintf" },
	{ 0x3b89b540, "skb_dequeue" },
	{ 0x75b8fc2, "nfc_add_se" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x2e60bce4, "__nfc_alloc_vendor_cmd_reply_skb" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x28f18d0, "nci_register_device" },
	{ 0xfc41cf36, "nci_allocate_device" },
	{ 0x8798274e, "nci_free_device" },
};

MODULE_INFO(depends, "nci,nfc");


MODULE_INFO(srcversion, "FCA1D2205882E73AD503165");
