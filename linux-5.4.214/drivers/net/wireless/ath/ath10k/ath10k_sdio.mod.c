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
	{ 0x2d6266e0, "ath10k_core_unregister" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xfb344f5d, "ath10k_core_register" },
	{ 0x90895129, "sdio_writesb" },
	{ 0xecf02f95, "sdio_enable_func" },
	{ 0x43dff967, "sdio_claim_irq" },
	{ 0x19c2c9a9, "mmc_hw_reset" },
	{ 0x710af66b, "mmc_wait_for_cmd" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xd3fb56dc, "ath10k_core_destroy" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x50dd77c4, "__tracepoint_ath10k_log_dbg" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x15e5db2, "ath10k_debug_mask" },
	{ 0x41d69a39, "sdio_writel" },
	{ 0xf34b723b, "ath10k_mac_tx_push_pending" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x66bcecae, "ath10k_core_create" },
	{ 0x2a6949d2, "sdio_readl" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x9042e7c3, "sdio_readsb" },
	{ 0xd8f46d1d, "sdio_unregister_driver" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdfae55c4, "ath10k_htc_process_trailer" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x1f7b01bc, "sdio_release_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x3f2e7e43, "ath10k_err" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x6961b9f2, "sdio_memcpy_toio" },
	{ 0xd009a69c, "ath10k_warn" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x43919251, "sdio_register_driver" },
	{ 0xad263612, "consume_skb" },
	{ 0xa5d565a3, "sdio_memcpy_fromio" },
	{ 0xfc5d3d0c, "sdio_claim_host" },
	{ 0xf7a9c515, "ath10k_htc_notify_tx_completion" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x98d0a1f5, "sdio_set_block_size" },
	{ 0xb63ef191, "sdio_disable_func" },
	{ 0x56d3d127, "sdio_release_host" },
};

MODULE_INFO(depends, "ath10k_core");

MODULE_ALIAS("sdio:c*v0271d050A*");
MODULE_ALIAS("sdio:c*v0271d0701*");

MODULE_INFO(srcversion, "A2A94E559C987014A263DF7");
