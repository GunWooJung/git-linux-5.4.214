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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x8b666025, "mwifiex_cancel_hs" },
	{ 0x90895129, "sdio_writesb" },
	{ 0xecf02f95, "sdio_enable_func" },
	{ 0x43dff967, "sdio_claim_irq" },
	{ 0x19c2c9a9, "mmc_hw_reset" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xb128d0fe, "mwifiex_disable_auto_ds" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x6cc6cc89, "mwifiex_process_sleep_confirm_resp" },
	{ 0x999e8297, "vfree" },
	{ 0x82d7a439, "mwifiex_main_process" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x60d5aa23, "mwifiex_prepare_fw_dump_info" },
	{ 0xe4327949, "sdio_get_host_pm_caps" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0xfd94814e, "complete_all" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc1a408ef, "_mwifiex_dbg" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xc1f3f43, "mwifiex_add_card" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0xfd471ad8, "mwifiex_shutdown_sw" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xd4dad9f3, "mwifiex_alloc_dma_align_buf" },
	{ 0x9042e7c3, "sdio_readsb" },
	{ 0xd8f46d1d, "sdio_unregister_driver" },
	{ 0xfe66fe5a, "sdio_set_host_pm_flags" },
	{ 0x6b07acd5, "mwifiex_dnld_fw" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc502ef3, "skb_queue_tail" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x12a38747, "usleep_range" },
	{ 0x1f7b01bc, "sdio_release_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xeca9c700, "sdio_f0_readb" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xfc9354e8, "mwifiex_reinit_sw" },
	{ 0x33379d1f, "mwifiex_handle_rx_packet" },
	{ 0x2a09341, "mwifiex_deauthenticate_all" },
	{ 0x9299d243, "mwifiex_remove_card" },
	{ 0x8c863dbc, "mwifiex_enable_hs" },
	{ 0x3b15fae, "mwifiex_upload_device_dump" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xb0e602eb, "memmove" },
	{ 0x43919251, "sdio_register_driver" },
	{ 0xfc5d3d0c, "sdio_claim_host" },
	{ 0x9fd206d0, "mwifiex_drv_info_dump" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x447f543d, "mwifiex_init_shutdown_fw" },
	{ 0x98d0a1f5, "sdio_set_block_size" },
	{ 0xb63ef191, "sdio_disable_func" },
	{ 0x56d3d127, "sdio_release_host" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "mwifiex");

MODULE_ALIAS("sdio:c*v02DFd9116*");
MODULE_ALIAS("sdio:c*v02DFd9119*");
MODULE_ALIAS("sdio:c*v02DFd9129*");
MODULE_ALIAS("sdio:c*v02DFd912D*");
MODULE_ALIAS("sdio:c*v02DFd9135*");
MODULE_ALIAS("sdio:c*v02DFd9139*");
MODULE_ALIAS("sdio:c*v02DFd9145*");
MODULE_ALIAS("sdio:c*v02DFd9149*");
MODULE_ALIAS("sdio:c*v02DFd9141*");

MODULE_INFO(srcversion, "8D8B9A53F1BB5DB22B88DEC");
