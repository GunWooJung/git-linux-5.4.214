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
	{ 0x68a41536, "param_ops_bool" },
	{ 0xd8f46d1d, "sdio_unregister_driver" },
	{ 0x43919251, "sdio_register_driver" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xfb4ec2db, "__pm_runtime_disable" },
	{ 0xa4ac9b92, "hci_register_dev" },
	{ 0x64f9650a, "hci_alloc_dev" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xa453352, "pm_runtime_allow" },
	{ 0x9962bc44, "pm_runtime_enable" },
	{ 0x2b6f0008, "pm_runtime_forbid" },
	{ 0xb98c9772, "__pm_runtime_set_status" },
	{ 0x18ed72f8, "__pm_runtime_use_autosuspend" },
	{ 0x11c66087, "pm_runtime_set_autosuspend_delay" },
	{ 0x6e9b2166, "__hci_cmd_sync" },
	{ 0x5c9109de, "release_firmware" },
	{ 0x80500894, "request_firmware" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x4071b517, "out_of_line_wait_on_bit_timeout" },
	{ 0x44bae227, "bit_wait_timeout" },
	{ 0x7947776b, "__hci_cmd_send" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0x214e4265, "bt_warn" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x9042e7c3, "sdio_readsb" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0xcfb5d782, "pskb_expand_head" },
	{ 0x7c60d490, "__pm_runtime_suspend" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x6a9466ef, "skb_queue_head" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x90895129, "sdio_writesb" },
	{ 0xd523d85d, "skb_push" },
	{ 0x3b89b540, "skb_dequeue" },
	{ 0x8bdf333d, "__pm_runtime_resume" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x56601480, "hci_recv_frame" },
	{ 0x30313dd3, "skb_clone" },
	{ 0x98d0a1f5, "sdio_set_block_size" },
	{ 0x43dff967, "sdio_claim_irq" },
	{ 0xecf02f95, "sdio_enable_func" },
	{ 0xb63ef191, "sdio_disable_func" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x1f7b01bc, "sdio_release_irq" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xf89e6197, "skb_queue_purge" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc502ef3, "skb_queue_tail" },
	{ 0x8e8b23c5, "hci_free_dev" },
	{ 0xc1716c35, "hci_unregister_dev" },
	{ 0xfe66fe5a, "sdio_set_host_pm_flags" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x56d3d127, "sdio_release_host" },
	{ 0x718b8b7, "bt_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0x2a6949d2, "sdio_readl" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x41d69a39, "sdio_writel" },
	{ 0xfc5d3d0c, "sdio_claim_host" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "7ABBECD82E45FBA3EED7DD6");
