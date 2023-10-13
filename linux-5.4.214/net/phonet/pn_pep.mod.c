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
	{ 0x6a9466ef, "skb_queue_head" },
	{ 0xa0554d18, "release_sock" },
	{ 0xffd8af80, "sock_init_data" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xb308c97d, "wait_woken" },
	{ 0x7320db75, "pn_sock_unhash" },
	{ 0xbbff6bfd, "sk_stream_wait_connect" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x5fe87dfe, "sock_queue_rcv_skb" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x3f37e34f, "skb_recv_datagram" },
	{ 0x59efc5b3, "skb_set_owner_w" },
	{ 0xb1b4a27e, "pn_sock_hash" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x4229c5c4, "phonet_proto_register" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x69828cc9, "sock_rfree" },
	{ 0x3b6ae85b, "sk_common_release" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x63616516, "netif_rx" },
	{ 0x650c50b2, "pn_sock_get_port" },
	{ 0x90a69765, "__pskb_pull_tail" },
	{ 0xf89e6197, "skb_queue_purge" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0xefb8cb40, "sk_alloc" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x6dc0618f, "skb_copy_datagram_iter" },
	{ 0xc5850110, "printk" },
	{ 0x5c05256a, "lock_sock_nested" },
	{ 0x2816d12d, "free_netdev" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xc21596aa, "register_netdev" },
	{ 0xd523d85d, "skb_push" },
	{ 0x285c8d25, "sk_free" },
	{ 0x112574c9, "__sk_receive_skb" },
	{ 0xc502ef3, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0xc4a9f597, "_copy_from_iter_full" },
	{ 0xc6fb8710, "alloc_netdev_mqs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x8f8ce9bb, "sock_alloc_send_skb" },
	{ 0x1a7fe6c, "phonet_proto_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x69acdf38, "memcpy" },
	{ 0x170abb98, "pn_skb_send" },
	{ 0x3b89b540, "skb_dequeue" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0xf8f3a2e0, "phonet_stream_ops" },
	{ 0xad263612, "consume_skb" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x5cb6526b, "skb_copy_bits" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x3d81c1b, "skb_free_datagram" },
};

MODULE_INFO(depends, "phonet");


MODULE_INFO(srcversion, "361986F5292D41133B81E5F");
