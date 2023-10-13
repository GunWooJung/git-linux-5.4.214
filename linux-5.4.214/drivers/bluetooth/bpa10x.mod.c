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
	{ 0x66bc173e, "hci_recv_diag" },
	{ 0x56601480, "hci_recv_frame" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0xa4ac9b92, "hci_register_dev" },
	{ 0x64f9650a, "hci_alloc_dev" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x8f4f6873, "hci_set_fw_info" },
	{ 0x718b8b7, "bt_info" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x4f3aab78, "usb_unanchor_urb" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0xa322e89a, "usb_anchor_urb" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0xd523d85d, "skb_push" },
	{ 0xedb483d8, "usb_alloc_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0x8e8b23c5, "hci_free_dev" },
	{ 0xc1716c35, "hci_unregister_dev" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x6e9b2166, "__hci_cmd_sync" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "bluetooth");

MODULE_ALIAS("usb:v08FDp0002d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "7312D0036C6DFD3C9DD3B58");
