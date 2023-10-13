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
	{ 0x406e189e, "sdio_writeb" },
	{ 0x225ecbd1, "sdio_readb" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe5b6e9e8, "__pm_runtime_idle" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xdc8e8b19, "lbs_resume" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x90895129, "sdio_writesb" },
	{ 0xecf02f95, "sdio_enable_func" },
	{ 0x43dff967, "sdio_claim_irq" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4da8a4a3, "lbs_stop_card" },
	{ 0x8bdf333d, "__pm_runtime_resume" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x11546c58, "netdev_alert" },
	{ 0xa3f56316, "__lbs_cmd" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe4327949, "sdio_get_host_pm_caps" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xdb70a8f7, "lbs_start_card" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x562b7d32, "lbs_queue_event" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9594e899, "lbs_get_firmware_async" },
	{ 0x16b90f86, "lbs_cmd_copyback" },
	{ 0x803ee7b5, "lbs_suspend" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9042e7c3, "sdio_readsb" },
	{ 0xd8f46d1d, "sdio_unregister_driver" },
	{ 0xcaf1bb44, "lbs_remove_card" },
	{ 0x93583205, "sdio_f0_writeb" },
	{ 0xfe66fe5a, "sdio_set_host_pm_flags" },
	{ 0xa70000e5, "lbs_process_rxed_packet" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x1f7b01bc, "sdio_release_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3bff3839, "lbs_host_to_card_done" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x8e478202, "sdio_align_size" },
	{ 0x9e010835, "lbs_add_card" },
	{ 0xeca9c700, "sdio_f0_readb" },
	{ 0x6d3954a4, "mmc_add_host" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x216cc777, "netdev_err" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xb846722a, "mmc_remove_host" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x43919251, "sdio_register_driver" },
	{ 0xfc5d3d0c, "sdio_claim_host" },
	{ 0xf89bc02c, "skb_put" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x98d0a1f5, "sdio_set_block_size" },
	{ 0xb63ef191, "sdio_disable_func" },
	{ 0x56d3d127, "sdio_release_host" },
	{ 0xae4dd985, "lbs_notify_command_response" },
};

MODULE_INFO(depends, "libertas");

MODULE_ALIAS("sdio:c*v02DFd9103*");
MODULE_ALIAS("sdio:c*v02DFd9104*");

MODULE_INFO(srcversion, "574DD96A90F004DBC84B465");
