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
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xd523d85d, "skb_push" },
	{ 0x56601480, "hci_recv_frame" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa4ac9b92, "hci_register_dev" },
	{ 0x64f9650a, "hci_alloc_dev" },
	{ 0x5c9109de, "release_firmware" },
	{ 0x37a0cba, "kfree" },
	{ 0x494ba38f, "usb_bulk_msg" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x718b8b7, "bt_info" },
	{ 0x80500894, "request_firmware" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0xedb483d8, "usb_alloc_urb" },
	{ 0x6a9466ef, "skb_queue_head" },
	{ 0xe677827a, "skb_unlink" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0x8e8b23c5, "hci_free_dev" },
	{ 0xc1716c35, "hci_unregister_dev" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0xc502ef3, "skb_queue_tail" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0x1c1b9f8e, "_raw_write_unlock_irqrestore" },
	{ 0xe25ee9d3, "_raw_write_lock_irqsave" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x3b89b540, "skb_dequeue" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xf89e6197, "skb_queue_purge" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "bluetooth");

MODULE_ALIAS("usb:v057Cp2200d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "C167DB0F58310587D166F5A");
