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
	{ 0x241db022, "rsi_91x_init" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8133c67d, "complete_and_exit" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x90895129, "sdio_writesb" },
	{ 0xecf02f95, "sdio_enable_func" },
	{ 0x5647b4ea, "rsi_config_wowlan" },
	{ 0x43dff967, "sdio_claim_irq" },
	{ 0x710af66b, "mmc_wait_for_cmd" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xabaae129, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xcd173710, "rsi_dbg" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xf89e6197, "skb_queue_purge" },
	{ 0xfb578fc5, "memset" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x85e73dd7, "kthread_stop" },
	{ 0xeb791108, "rsi_mac80211_detach" },
	{ 0x2e02637f, "rsi_read_pkt" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9042e7c3, "sdio_readsb" },
	{ 0xd8f46d1d, "sdio_unregister_driver" },
	{ 0x93583205, "sdio_f0_writeb" },
	{ 0xfe66fe5a, "sdio_set_host_pm_flags" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x1f7b01bc, "sdio_release_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xeca9c700, "sdio_f0_readb" },
	{ 0xab37f21b, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x3e02b1ea, "rsi_hal_device_init" },
	{ 0x43919251, "sdio_register_driver" },
	{ 0xcce57a7f, "param_ops_ushort" },
	{ 0xfc5d3d0c, "sdio_claim_host" },
	{ 0xc840288f, "rsi_91x_deinit" },
	{ 0x98d0a1f5, "sdio_set_block_size" },
	{ 0x7fd2cdbf, "rsi_bt_ops" },
	{ 0xb63ef191, "sdio_disable_func" },
	{ 0x56d3d127, "sdio_release_host" },
};

MODULE_INFO(depends, "rsi_91x,btrsi");

MODULE_ALIAS("sdio:c*v041Bd9330*");
MODULE_ALIAS("sdio:c*v041Bd9116*");

MODULE_INFO(srcversion, "3CD57382FFF6623D643214E");
