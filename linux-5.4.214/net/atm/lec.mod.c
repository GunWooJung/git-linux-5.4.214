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
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0x7669ab7d, "deregister_atm_ioctl" },
	{ 0xcbaa4b74, "remove_proc_entry" },
	{ 0xc7942ee8, "register_atm_ioctl" },
	{ 0x3ce25513, "proc_create_seq_private" },
	{ 0x4443d399, "atm_proc_root" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x1cc490fb, "dev_set_mtu" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xb428ecc7, "br_fdb_test_addr_hook" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x63616516, "netif_rx" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0xbed6138e, "skb_pull" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0xf8e4e17a, "skb_copy_expand" },
	{ 0xf89bc02c, "skb_put" },
	{ 0xd523d85d, "skb_push" },
	{ 0x564c202f, "skb_realloc_headroom" },
	{ 0x2816d12d, "free_netdev" },
	{ 0xc21596aa, "register_netdev" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
	{ 0x24d273d1, "add_timer" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x6f395e65, "__module_get" },
	{ 0x7dedaa1b, "vcc_insert_socket" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xdf46d4f1, "module_put" },
	{ 0x3b89b540, "skb_dequeue" },
	{ 0xad263612, "consume_skb" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x69acdf38, "memcpy" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xe35ed617, "seq_puts" },
	{ 0x3885862f, "seq_putc" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc502ef3, "skb_queue_tail" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc5850110, "printk" },
	{ 0xf89e6197, "skb_queue_purge" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0xdd0010c3, "vcc_release_async" },
	{ 0x37a0cba, "kfree" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "atm");


MODULE_INFO(srcversion, "6AAFF50A5F958C6186F0DE1");
