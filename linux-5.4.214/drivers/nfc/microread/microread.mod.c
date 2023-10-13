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
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xf32e521b, "nfc_hci_send_event" },
	{ 0xde32628a, "nfc_dep_link_is_up" },
	{ 0x2577862c, "nfc_targets_found" },
	{ 0x2a41e8d3, "nfc_hci_set_param" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0x8cec60f2, "nfc_hci_allocate_device" },
	{ 0xa9fb34d6, "nfc_tm_activated" },
	{ 0xc5850110, "printk" },
	{ 0x419cf490, "nfc_hci_get_clientdata" },
	{ 0x4ea3db63, "nfc_hci_send_cmd" },
	{ 0xd523d85d, "skb_push" },
	{ 0xffcb73a9, "nfc_set_remote_general_bytes" },
	{ 0xdc05ecf3, "nfc_hci_register_device" },
	{ 0x9003bb09, "nfc_get_local_general_bytes" },
	{ 0xd701f4f5, "nfc_hci_free_device" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdd231c55, "nfc_hci_sak_to_protocol" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x81044242, "nfc_hci_unregister_device" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x74fe3670, "nfc_hci_result_to_errno" },
	{ 0xa540e848, "nfc_tm_data_received" },
	{ 0x52ecbc75, "crc_ccitt" },
	{ 0x37a0cba, "kfree" },
	{ 0x7ac00d5d, "nfc_hci_send_cmd_async" },
	{ 0xa1550ba7, "nfc_hci_get_param" },
	{ 0xf89bc02c, "skb_put" },
	{ 0xa2fd8c, "nfc_hci_set_clientdata" },
};

MODULE_INFO(depends, "hci,nfc");


MODULE_INFO(srcversion, "DD58250EB1099EC8324EA79");
