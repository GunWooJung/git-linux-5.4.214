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
	{ 0x61b67b60, "wl12xx_cmd_build_probe_req" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x6d3b27e, "wl12xx_debug_level" },
	{ 0x373ceb30, "wlcore_set_key" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x91fc7183, "generic_file_llseek" },
	{ 0x7f3966fa, "debugfs_create_dir" },
	{ 0xff1f8533, "wlcore_event_beacon_loss" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7c60d490, "__pm_runtime_suspend" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xe1f6f59d, "wlcore_event_dummy_packet" },
	{ 0xb87d53d4, "wlcore_event_inactive_sta" },
	{ 0x56992ad4, "wlcore_event_ba_rx_constraint" },
	{ 0xdb1050fc, "ieee80211_radar_detected" },
	{ 0x141e1698, "wlcore_event_fw_logger" },
	{ 0xa1c9a37b, "wlcore_event_rssi_trigger" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x9791d2e6, "ieee80211_channel_to_frequency" },
	{ 0xac094dd4, "wlcore_cmd_wait_for_event_or_timeout" },
	{ 0x7c0a4774, "wlcore_probe" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0xd5a09d15, "wlcore_alloc_hw" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x8bdf333d, "__pm_runtime_resume" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xd0a46a6a, "debugfs_create_file" },
	{ 0x20351125, "wlcore_get_native_channel_type" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x421e8457, "wl1271_cmd_configure" },
	{ 0x131e5561, "param_ops_charp" },
	{ 0xfb578fc5, "memset" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xc2448345, "default_llseek" },
	{ 0x55a4581d, "wlcore_event_sched_scan_completed" },
	{ 0x6925604a, "wlcore_boot_upload_firmware" },
	{ 0xc5850110, "printk" },
	{ 0x8b443f3f, "wlcore_set_partition" },
	{ 0x9166fada, "strncpy" },
	{ 0xbd716077, "wlcore_enable_interrupts" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xb662a539, "irq_get_irq_data" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x32ee9868, "simple_open" },
	{ 0x8d78a784, "ieee80211_queue_delayed_work" },
	{ 0x8c107da0, "__cfg80211_send_event_skb" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xc502ef3, "skb_queue_tail" },
	{ 0xf7d31de9, "kstrtoul_from_user" },
	{ 0xed6d5a00, "wlcore_event_channel_switch" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xca778bf5, "__cfg80211_alloc_event_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4bbcf54d, "wlcore_disable_interrupts" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0xf447190, "wlcore_remove" },
	{ 0x67876151, "ieee80211_find_sta" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdf256037, "kstrtou8_from_user" },
	{ 0x4e8f3f36, "wlcore_event_max_tx_failure" },
	{ 0xb4bdb220, "wl1271_free_tx_id" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x1039de88, "ieee80211_stop_rx_ba_session" },
	{ 0x58bcf463, "wlcore_scan_sched_scan_results" },
	{ 0xbd900a19, "ieee80211_get_hdrlen_from_skb" },
	{ 0x4f2afdc6, "wlcore_free_hw" },
	{ 0x37a0cba, "kfree" },
	{ 0x85498cd1, "wl1271_format_buffer" },
	{ 0x69acdf38, "memcpy" },
	{ 0x89c1d621, "wl1271_debugfs_update_stats" },
	{ 0xe8a69d0e, "wlcore_set_scan_chan_params" },
	{ 0x80500894, "request_firmware" },
	{ 0x2f655d7f, "wlcore_boot_run_firmware" },
	{ 0x11ab52ea, "wlcore_translate_addr" },
	{ 0xe9339ee3, "wlcore_scan_sched_scan_ssid_list" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd87d24e8, "wlcore_event_roc_complete" },
	{ 0xb0e602eb, "memmove" },
	{ 0xf51bb630, "wl12xx_is_dummy_packet" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x15bc920e, "wl1271_cmd_send" },
	{ 0x5c9109de, "release_firmware" },
	{ 0x88088c66, "ieee80211_connection_loss" },
};

MODULE_INFO(depends, "wlcore,mac80211,cfg80211");

MODULE_ALIAS("platform:wl18xx");

MODULE_INFO(srcversion, "7B5CD649474EDF68FBB6590");
