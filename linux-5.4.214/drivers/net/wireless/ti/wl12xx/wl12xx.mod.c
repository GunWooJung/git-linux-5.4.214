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
	{ 0xf85aa10, "wlcore_boot_upload_nvs" },
	{ 0x6d3b27e, "wl12xx_debug_level" },
	{ 0x373ceb30, "wlcore_set_key" },
	{ 0x5ef46fe7, "wl1271_acx_init_mem_config" },
	{ 0x91fc7183, "generic_file_llseek" },
	{ 0x7f3966fa, "debugfs_create_dir" },
	{ 0xff1f8533, "wlcore_event_beacon_loss" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xe1f6f59d, "wlcore_event_dummy_packet" },
	{ 0xb87d53d4, "wlcore_event_inactive_sta" },
	{ 0x56992ad4, "wlcore_event_ba_rx_constraint" },
	{ 0x4135cb93, "wl1271_acx_pm_config" },
	{ 0xe3bfb102, "wlcore_calc_packet_alignment" },
	{ 0xa1c9a37b, "wlcore_event_rssi_trigger" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xac094dd4, "wlcore_cmd_wait_for_event_or_timeout" },
	{ 0x7c0a4774, "wlcore_probe" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xd5a09d15, "wlcore_alloc_hw" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xd0a46a6a, "debugfs_create_file" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x3e0e3611, "wl1271_acx_set_ht_capabilities" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x421e8457, "wl1271_cmd_configure" },
	{ 0x131e5561, "param_ops_charp" },
	{ 0x839aa40d, "wl1271_cmd_data_path" },
	{ 0x7ee12607, "wl12xx_acx_mem_cfg" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x55a4581d, "wlcore_event_sched_scan_completed" },
	{ 0x6925604a, "wlcore_boot_upload_firmware" },
	{ 0x7147dc48, "wl1271_acx_sleep_auth" },
	{ 0xc5850110, "printk" },
	{ 0x8b443f3f, "wlcore_set_partition" },
	{ 0xbd716077, "wlcore_enable_interrupts" },
	{ 0xc3f3d9c1, "wl1271_cmd_test" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x32ee9868, "simple_open" },
	{ 0x8d78a784, "ieee80211_queue_delayed_work" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xed6d5a00, "wlcore_event_channel_switch" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4bbcf54d, "wlcore_disable_interrupts" },
	{ 0xf447190, "wlcore_remove" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4e8f3f36, "wlcore_event_max_tx_failure" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x58bcf463, "wlcore_scan_sched_scan_results" },
	{ 0x2c75c149, "wlcore_event_soft_gemini_sense" },
	{ 0x4f2afdc6, "wlcore_free_hw" },
	{ 0x37a0cba, "kfree" },
	{ 0x3a6f0f7, "wlcore_tx_complete" },
	{ 0x85498cd1, "wl1271_format_buffer" },
	{ 0x69acdf38, "memcpy" },
	{ 0x89c1d621, "wl1271_debugfs_update_stats" },
	{ 0xe8a69d0e, "wlcore_set_scan_chan_params" },
	{ 0x2f655d7f, "wlcore_boot_run_firmware" },
	{ 0x11ab52ea, "wlcore_translate_addr" },
	{ 0xe9339ee3, "wlcore_scan_sched_scan_ssid_list" },
	{ 0xd87d24e8, "wlcore_event_roc_complete" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x15bc920e, "wl1271_cmd_send" },
	{ 0x3cfbd6d8, "wl1271_tx_min_rate_get" },
};

MODULE_INFO(depends, "wlcore,mac80211");

MODULE_ALIAS("platform:wl12xx");

MODULE_INFO(srcversion, "F8535CC476AEA791E59595E");
