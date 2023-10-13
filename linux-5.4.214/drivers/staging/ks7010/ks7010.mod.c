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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0x406e189e, "sdio_writeb" },
	{ 0x225ecbd1, "sdio_readb" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xeb1919a4, "netdev_info" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x6fc4af2b, "crypto_alloc_shash" },
	{ 0x754d539c, "strlen" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xecf02f95, "sdio_enable_func" },
	{ 0x43dff967, "sdio_claim_irq" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x881f77c7, "crypto_shash_finup" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x21d3b421, "__dynamic_netdev_dbg" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x63616516, "netif_rx" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x8249512, "iwe_stream_add_point" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xfb578fc5, "memset" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x3439c9a7, "crypto_shash_update" },
	{ 0x2816d12d, "free_netdev" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x9166fada, "strncpy" },
	{ 0xc21596aa, "register_netdev" },
	{ 0x742c59ce, "wireless_send_event" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x24d273d1, "add_timer" },
	{ 0xf25f6891, "crypto_shash_setkey" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xd8f46d1d, "sdio_unregister_driver" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xa916b694, "strnlen" },
	{ 0x12a38747, "usleep_range" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x1f7b01bc, "sdio_release_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0xf369487d, "crypto_destroy_tfm" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x216cc777, "netdev_err" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x6961b9f2, "sdio_memcpy_toio" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x955e6f68, "dev_alloc_name" },
	{ 0x80500894, "request_firmware" },
	{ 0x7a4497db, "kzfree" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x43919251, "sdio_register_driver" },
	{ 0xad263612, "consume_skb" },
	{ 0xa5d565a3, "sdio_memcpy_fromio" },
	{ 0xfc5d3d0c, "sdio_claim_host" },
	{ 0x4cba441d, "iwe_stream_add_event" },
	{ 0xf89bc02c, "skb_put" },
	{ 0xc41bc980, "iwe_stream_add_value" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x98d0a1f5, "sdio_set_block_size" },
	{ 0x5c9109de, "release_firmware" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xb63ef191, "sdio_disable_func" },
	{ 0x56d3d127, "sdio_release_host" },
	{ 0xe914e41e, "strcpy" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("sdio:c*v005Bd7910*");
MODULE_ALIAS("sdio:c*v0023d7910*");

MODULE_INFO(srcversion, "7A5C0FD04624B4D01F8A027");
