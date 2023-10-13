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
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x5e5288db, "l2cap_chan_set_defaults" },
	{ 0x7ee415d5, "single_open" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x8ce08cc0, "single_release" },
	{ 0xe8bd5824, "l2cap_chan_del" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x5c42b5ca, "no_llseek" },
	{ 0x30313dd3, "skb_clone" },
	{ 0x5a955fde, "skb_copy" },
	{ 0xe04f838c, "lowpan_header_compress" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xae6325c9, "l2cap_chan_send" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xe717b7e6, "neigh_destroy" },
	{ 0x7f1def43, "l2cap_add_psm" },
	{ 0xd0a46a6a, "debugfs_create_file" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x21ba44a5, "seq_read" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x157ccfc0, "l2cap_chan_close" },
	{ 0x718b8b7, "bt_info" },
	{ 0x3d40860f, "hci_get_route" },
	{ 0x50087170, "netif_rx_ni" },
	{ 0xe844b610, "l2cap_chan_put" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x7b5ce5c3, "baswap" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x87a17f30, "iov_iter_kvec" },
	{ 0x67ba7ebf, "debugfs_remove" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5561600b, "dev_close" },
	{ 0x3c2ef1a4, "nd_tbl" },
	{ 0x3f556282, "simple_attr_release" },
	{ 0xdb798d3d, "debugfs_create_file_unsafe" },
	{ 0xbed6138e, "skb_pull" },
	{ 0xebaa60f0, "debugfs_attr_read" },
	{ 0x62aa6169, "dev_open" },
	{ 0xa06cefdf, "lowpan_header_decompress" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdf46d4f1, "module_put" },
	{ 0xf8e4e17a, "skb_copy_expand" },
	{ 0x2595b08a, "lowpan_unregister_netdev" },
	{ 0x36a900b2, "bt_debugfs" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0xc6fb8710, "alloc_netdev_mqs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2778fc56, "l2cap_chan_connect" },
	{ 0xc8e2970a, "netdev_notify_peers" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x93bff243, "lowpan_register_netdev" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x827e2937, "l2cap_chan_create" },
	{ 0xda2b5d09, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xad263612, "consume_skb" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x54d16a13, "debugfs_attr_write" },
	{ 0x703de441, "simple_attr_open" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6d71399f, "try_module_get" },
};

MODULE_INFO(depends, "bluetooth,6lowpan");


MODULE_INFO(srcversion, "4E69EBFA92E310F0062755E");
