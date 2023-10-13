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
	{ 0x2d3385d3, "system_wq" },
	{ 0xeb1919a4, "netdev_info" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe9244302, "ethtool_op_get_ts_info" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xd6c2b127, "skb_clone_tx_timestamp" },
	{ 0xad995dac, "netdev_stats_to_stats64" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0xe0c8b001, "usb_get_from_anchor" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0x807766ea, "usb_scuttle_anchored_urbs" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x127f76b4, "usb_autopm_get_interface" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x28c2e85c, "usb_get_urb" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xbe08b227, "usb_unlink_urb" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x21d3b421, "__dynamic_netdev_dbg" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x63616516, "netif_rx" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xf89e6197, "skb_queue_purge" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x4c448223, "usb_string" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x3879f32d, "mii_nway_restart" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc7a6ead9, "ethtool_op_get_link" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xb9b32561, "usb_set_interface" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x3a5e48cf, "usb_autopm_put_interface_async" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xc21596aa, "register_netdev" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0x75a7763, "mii_ethtool_set_link_ksettings" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc502ef3, "skb_queue_tail" },
	{ 0xc5f6f445, "netif_device_attach" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x7ad55ce3, "netif_device_detach" },
	{ 0xf32be640, "usb_autopm_get_interface_async" },
	{ 0x9962bc44, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xe5a397f6, "usb_clear_halt" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0x50cf7585, "hex2bin" },
	{ 0xc1ed54a2, "skb_defer_rx_timestamp" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x216cc777, "netdev_err" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xcdb386fa, "mii_ethtool_get_link_ksettings" },
	{ 0xd8749720, "usb_autopm_get_interface_no_resume" },
	{ 0x473e7988, "eth_validate_addr" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x3b89b540, "skb_dequeue" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x942296a4, "mii_link_ok" },
	{ 0xad263612, "consume_skb" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x296e38aa, "skb_tstamp_tx" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x820db7ec, "eth_mac_addr" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0xc031e1f1, "usb_autopm_put_interface" },
	{ 0xa322e89a, "usb_anchor_urb" },
	{ 0xedb483d8, "usb_alloc_urb" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "mii");


MODULE_INFO(srcversion, "94B3476593CEA620779FEC0");
