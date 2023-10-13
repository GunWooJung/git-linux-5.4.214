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
	{ 0xb12f2d20, "nfc_hci_disconnect_gate" },
	{ 0x418e3766, "nfc_hci_disconnect_all_gates" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xf32e521b, "nfc_hci_send_event" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xde32628a, "nfc_dep_link_is_up" },
	{ 0x2a41e8d3, "nfc_hci_set_param" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x50ad329a, "nfc_vendor_cmd_reply" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xa3594e42, "nfc_se_connectivity" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0x8cec60f2, "nfc_hci_allocate_device" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xa9fb34d6, "nfc_tm_activated" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x419cf490, "nfc_hci_get_clientdata" },
	{ 0x262e823a, "wait_for_completion_interruptible" },
	{ 0x4ea3db63, "nfc_hci_send_cmd" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xd523d85d, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xffcb73a9, "nfc_set_remote_general_bytes" },
	{ 0xdc05ecf3, "nfc_hci_register_device" },
	{ 0x9003bb09, "nfc_get_local_general_bytes" },
	{ 0xbd4ce733, "nfc_se_transaction" },
	{ 0xd701f4f5, "nfc_hci_free_device" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x4469b331, "nfc_llc_start" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0xdd231c55, "nfc_hci_sak_to_protocol" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x81044242, "nfc_hci_unregister_device" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf7ca6688, "nfc_remove_se" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xa540e848, "nfc_tm_data_received" },
	{ 0x801ff5f3, "nfc_hci_connect_gate" },
	{ 0x7937f354, "nfc_llc_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x96848186, "scnprintf" },
	{ 0x75b8fc2, "nfc_add_se" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x7ac00d5d, "nfc_hci_send_cmd_async" },
	{ 0xa1550ba7, "nfc_hci_get_param" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x2e60bce4, "__nfc_alloc_vendor_cmd_reply_skb" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xa2fd8c, "nfc_hci_set_clientdata" },
};

MODULE_INFO(depends, "hci,nfc");


MODULE_INFO(srcversion, "D26F25CA9A7A3A786EFB940");
