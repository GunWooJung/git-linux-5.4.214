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
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x8b666025, "mwifiex_cancel_hs" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0xd2e2781a, "mwifiex_write_data_complete" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x6cc6cc89, "mwifiex_process_sleep_confirm_resp" },
	{ 0xe7898423, "mwifiex_queue_main_work" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc1a408ef, "_mwifiex_dbg" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xc1f3f43, "mwifiex_add_card" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0xc5850110, "printk" },
	{ 0xd523d85d, "skb_push" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xd4dad9f3, "mwifiex_alloc_dma_align_buf" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc502ef3, "skb_queue_tail" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0xe3ef08a7, "usb_get_dev" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xcff5573e, "usb_reset_device" },
	{ 0x494ba38f, "usb_bulk_msg" },
	{ 0x815f16c8, "usb_put_dev" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x37d1d69e, "mwifiex_process_hs_config" },
	{ 0x37a0cba, "kfree" },
	{ 0x8e0d9227, "mwifiex_multi_chan_resync" },
	{ 0x69acdf38, "memcpy" },
	{ 0x23898e23, "mwifiex_fw_dump_event" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0x3b89b540, "skb_dequeue" },
	{ 0x2a09341, "mwifiex_deauthenticate_all" },
	{ 0x9299d243, "mwifiex_remove_card" },
	{ 0x8c863dbc, "mwifiex_enable_hs" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x447f543d, "mwifiex_init_shutdown_fw" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0xedb483d8, "usb_alloc_urb" },
};

MODULE_INFO(depends, "mwifiex");

MODULE_ALIAS("usb:v1286p2041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1286p2042d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v1286p2043d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1286p2044d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v1286p2049d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1286p204Ad*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v1286p2052d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1286p204Ed*dc*dsc*dp*icFFiscFFipFFin*");

MODULE_INFO(srcversion, "969ACE488B629743715885B");
