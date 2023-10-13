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
	{ 0xa3ea868f, "ieee80211_rx_napi" },
	{ 0x9987fbc3, "rtl_cam_delete_one_entry" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x6cec3d34, "rtl_fw_cb" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xafa1d49e, "rtl_cam_get_free_entry" },
	{ 0xb85e126e, "rtl92c_phy_set_rfpath_switch" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x9b79cea0, "rtl_usb_disconnect" },
	{ 0x1938495c, "_rtl92c_phy_fw_rf_serial_read" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x37f87ac8, "rtl92c_phy_set_txpower_level" },
	{ 0xef3e5ff1, "rtl92c_set_fw_rsvdpagepkt" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xd61f29f9, "rtl92c_dm_check_txpower_tracking" },
	{ 0x566f539a, "rtl_ps_disable_nic" },
	{ 0x5890444f, "rtl92c_dm_watchdog" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x36dac224, "_rtl92c_phy_init_bb_rf_register_definition" },
	{ 0x292e67c7, "_rtl92c_phy_rf_serial_write" },
	{ 0x53e8757b, "rtl_get_tcb_desc" },
	{ 0xceaacecb, "_rtl92c_phy_rf_serial_read" },
	{ 0x64af4e77, "rtl92c_phy_set_bw_mode" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc0043418, "rtl92c_phy_lc_calibrate" },
	{ 0x2327d91c, "_rtl92c_phy_calculate_bit_shift" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x9e775e5d, "rtl_cam_add_one_entry" },
	{ 0x999e8297, "vfree" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xed7c8cf2, "rtl_evm_db_to_percentage" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2f2c8e0f, "rtl_phy_scan_operation_backup" },
	{ 0xdac7b045, "rtl92c_dm_init_edca_turbo" },
	{ 0x31c02aa1, "rtl92c_phy_iq_calibrate" },
	{ 0xcf8ef13a, "rtl92c_dm_init" },
	{ 0x4f0aa5db, "rtl_usb_probe" },
	{ 0x27d554c4, "rtl92c_phy_set_bb_reg" },
	{ 0x2fb464d6, "rtl_ps_enable_nic" },
	{ 0x12094721, "rtl_get_hwinfo" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0xc5850110, "printk" },
	{ 0xd46b47ae, "rtl92c_dm_rf_saving" },
	{ 0xf95e1147, "rtl92c_set_fw_pwrmode_cmd" },
	{ 0xc517effe, "dm_writepowerindex" },
	{ 0xd523d85d, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x67b0850d, "_rtl92c_phy_fw_rf_serial_write" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x19f63b8d, "_rtl92c_phy_set_rf_sleep" },
	{ 0xaf7ad1b4, "request_firmware_nowait" },
	{ 0x8359a56c, "rtlwifi_rate_mapping" },
	{ 0x55526e41, "rtl92c_set_fw_joinbss_report_cmd" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x43c71b2c, "rtl92c_download_fw" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x83083fdb, "rtl_rfreg_delay" },
	{ 0x75eeb76f, "_rtl92c_store_pwrindex_diffrate_offset" },
	{ 0xe00df76c, "rtl92c_phy_set_io_cmd" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x67876151, "ieee80211_find_sta" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x1d1e61b1, "rtl_cam_mark_invalid" },
	{ 0x100b0938, "rtl92c_phy_rf_config" },
	{ 0x37a0cba, "kfree" },
	{ 0x4451dbc2, "rtl_cam_del_entry" },
	{ 0x5fd6b0b4, "rtl_cam_empty_entry" },
	{ 0xe719a924, "rtl92ce_phy_set_rf_on" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0xbdb198b, "rtl92c_phy_query_bb_reg" },
	{ 0x3b89b540, "skb_dequeue" },
	{ 0x4c0df32a, "rtl_cam_reset_all_entry" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xad263612, "consume_skb" },
	{ 0xbd2910b5, "rtl_process_phyinfo" },
	{ 0xf388c3b0, "dm_restorepowerindex" },
	{ 0x3ae1e3e3, "efuse_read_1byte" },
	{ 0x7426b882, "_rtl92c_phy_bb8192c_config_parafile" },
	{ 0xd95a1fc2, "rtl92c_fill_h2c_cmd" },
	{ 0x71a792fe, "rtl92c_phy_sw_chnl" },
	{ 0x1b945315, "rtl_addr_delay" },
	{ 0xbf367777, "param_ops_ullong" },
};

MODULE_INFO(depends, "mac80211,rtlwifi,rtl8192c-common,rtl_usb");

MODULE_ALIAS("usb:v0BDAp8191d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp018Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8170d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8176d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8177d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp818Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp819Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8754d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8178d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp1102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp11F2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pE033d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p8188d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p8189d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9043d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17BAd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp5088d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0052d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p005Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0070d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0077d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB0p9071d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4856p0091d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v103Cp1629d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3357d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3308d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019p4902d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB2Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB2Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pED17d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v20F4p648Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p7811d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3358d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3359d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4855p0090d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4855p0091d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9846p9041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp317Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFF7d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFF9d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFFAd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFF8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFFBd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFFCd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019p1201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp1004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp2102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp2103d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p341Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0056d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p8178d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9021d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846pF001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17ABd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8186d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0061d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E66p0019d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3307d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3309d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p330Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p330Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB2Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v20F4p624Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p7822d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "FDEC4838CC30F445BE1FEB3");
