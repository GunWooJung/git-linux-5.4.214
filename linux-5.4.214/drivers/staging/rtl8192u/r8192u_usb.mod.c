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
	{ 0x2d3385d3, "system_wq" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xeb1919a4, "netdev_info" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x6fc4af2b, "crypto_alloc_shash" },
	{ 0x7ee415d5, "single_open" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xc62cb64, "proc_create_single_data" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x8ce08cc0, "single_release" },
	{ 0xe35ed617, "seq_puts" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0x5a955fde, "skb_copy" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0xcbaa4b74, "remove_proc_entry" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc3c7d712, "crypto_shash_final" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x21ba44a5, "seq_read" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x21d3b421, "__dynamic_netdev_dbg" },
	{ 0xe677827a, "skb_unlink" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x93e2c27e, "crypto_alloc_sync_skcipher" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x63616516, "netif_rx" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x8249512, "iwe_stream_add_point" },
	{ 0x131e5561, "param_ops_charp" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xf89e6197, "skb_queue_purge" },
	{ 0xfb578fc5, "memset" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x7369dd1b, "proc_mkdir" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x3439c9a7, "crypto_shash_update" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x2816d12d, "free_netdev" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x9166fada, "strncpy" },
	{ 0xc21596aa, "register_netdev" },
	{ 0x3885862f, "seq_putc" },
	{ 0x742c59ce, "wireless_send_event" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0x5a921311, "strncmp" },
	{ 0xd523d85d, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x9437181d, "proc_mkdir_data" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x3c27d3f7, "crypto_aead_encrypt" },
	{ 0x24d273d1, "add_timer" },
	{ 0xbed6138e, "skb_pull" },
	{ 0xf25f6891, "crypto_shash_setkey" },
	{ 0x721c9d1f, "init_net" },
	{ 0x55fee78, "crypto_aead_setkey" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc502ef3, "skb_queue_tail" },
	{ 0xf7d31de9, "kstrtoul_from_user" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xa916b694, "strnlen" },
	{ 0x12a38747, "usleep_range" },
	{ 0xfe9dff34, "crypto_skcipher_decrypt" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0xf369487d, "crypto_destroy_tfm" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x216cc777, "netdev_err" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x10a0f609, "crypto_aead_decrypt" },
	{ 0xa7b55c9d, "crypto_aead_setauthsize" },
	{ 0x2290a925, "remove_proc_subtree" },
	{ 0xe8b1a3d2, "netdev_warn" },
	{ 0x3de67d85, "crypto_alloc_aead" },
	{ 0x473e7988, "eth_validate_addr" },
	{ 0xda2b5d09, "seq_lseek" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x955e6f68, "dev_alloc_name" },
	{ 0xb27ba2a8, "dev_trans_start" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0x80500894, "request_firmware" },
	{ 0x7a4497db, "kzfree" },
	{ 0x3b89b540, "skb_dequeue" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb0e602eb, "memmove" },
	{ 0xad263612, "consume_skb" },
	{ 0x960650ec, "proc_create" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4cba441d, "iwe_stream_add_event" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0x5c9109de, "release_firmware" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6d71399f, "try_module_get" },
	{ 0xedb483d8, "usb_alloc_urb" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
	{ 0x7dd6f0c5, "crypto_skcipher_encrypt" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0BDAp8709d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0043d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp805Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0031d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1740p9201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3301d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5A57p0290d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v043Ep7A01d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "0D1231CE8DB854BD4E8DE52");
