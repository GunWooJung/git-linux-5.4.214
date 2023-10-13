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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xeb1919a4, "netdev_info" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8133c67d, "complete_and_exit" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x754d539c, "strlen" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x2149450, "find_vpid" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0x30313dd3, "skb_clone" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xabaae129, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9d8b484, "param_ops_string" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x63616516, "netif_rx" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x8249512, "iwe_stream_add_point" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x131e5561, "param_ops_charp" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xf89e6197, "skb_queue_purge" },
	{ 0xfb578fc5, "memset" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x262e823a, "wait_for_completion_interruptible" },
	{ 0x2816d12d, "free_netdev" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xc21596aa, "register_netdev" },
	{ 0x742c59ce, "wireless_send_event" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0x5792f848, "strlcpy" },
	{ 0xd523d85d, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x652032cb, "mac_pton" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xf459eb14, "kill_pid" },
	{ 0xbed6138e, "skb_pull" },
	{ 0xaf7ad1b4, "request_firmware_nowait" },
	{ 0x41482d8b, "strndup_user" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc502ef3, "skb_queue_tail" },
	{ 0xc5f6f445, "netif_device_attach" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x7ad55ce3, "netif_device_detach" },
	{ 0xe3ef08a7, "usb_get_dev" },
	{ 0xa916b694, "strnlen" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xcff5573e, "usb_reset_device" },
	{ 0x815f16c8, "usb_put_dev" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0xab37f21b, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x216cc777, "netdev_err" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xe8b1a3d2, "netdev_warn" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0x955e6f68, "dev_alloc_name" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0x3b89b540, "skb_dequeue" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xad263612, "consume_skb" },
	{ 0x4cba441d, "iwe_stream_add_event" },
	{ 0xf89bc02c, "skb_put" },
	{ 0xc41bc980, "iwe_stream_add_value" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x5cb6526b, "skb_copy_bits" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0x5c9109de, "release_firmware" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xedb483d8, "usb_alloc_urb" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0BDAp8171d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8173d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8712d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8713d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDApC512d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p8188d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1786d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1791d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp945Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp11F1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0047d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3306d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3306d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p7611d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1740p9603d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E66p0016d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pE034d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pE032d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0789p0167d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB28d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pED16d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0057d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0045d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0059d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p004Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p005Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p005Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0063d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v177Fp0154d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp5077d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1690p0752d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v20F4p646Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApC512d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v25D4p4CA1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v25D4p4CABd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8172d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8192d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB0p9061d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3323d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3311d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3342d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3333d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3334d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3335d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3336d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3309d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp815Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3302d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3303d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p7612d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1740p9605d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pE031d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E66p0015d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3306d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pED18d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019p4901d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0058d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0049d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p004Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p006Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0064d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3301d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3302d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFF2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFF5d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFF6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3339d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3340d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3341d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3310d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3325d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8174d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp845Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0051d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p7622d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0409p02B6d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "4A215E7146B2A6261E01B6D");
