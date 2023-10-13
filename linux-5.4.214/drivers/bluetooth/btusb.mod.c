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
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0xf9301932, "device_wakeup_disable" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xe0c8b001, "usb_get_from_anchor" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x12d7640b, "usb_enable_autosuspend" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xd335c4a0, "btrtl_shutdown_realtek" },
	{ 0x9a42f48f, "btrtl_setup_realtek" },
	{ 0xddc1c893, "btbcm_setup_apple" },
	{ 0x1079fc0, "usb_ifnum_to_if" },
	{ 0x950480de, "btbcm_set_bdaddr" },
	{ 0x2d4400e9, "btbcm_setup_patchram" },
	{ 0x9863683c, "usb_match_id" },
	{ 0xa4ac9b92, "hci_register_dev" },
	{ 0xb03ebff, "usb_driver_claim_interface" },
	{ 0x93d52e4b, "btintel_set_diag" },
	{ 0xa916389d, "btintel_hw_error" },
	{ 0x8bee9481, "btintel_set_bdaddr" },
	{ 0x260c21bd, "btintel_set_diag_mfg" },
	{ 0x9bfdcbb2, "gpiod_get_optional" },
	{ 0x64f9650a, "hci_alloc_dev" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xb9b32561, "usb_set_interface" },
	{ 0x66bc173e, "hci_recv_diag" },
	{ 0x30313dd3, "skb_clone" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0xf89bc02c, "skb_put" },
	{ 0xfb940914, "btintel_set_event_mask" },
	{ 0x8c099be3, "btintel_load_ddc_config" },
	{ 0xc2678566, "btintel_send_intel_reset" },
	{ 0x408a450f, "btintel_download_firmware" },
	{ 0xcc7bd71a, "btintel_read_boot_params" },
	{ 0x41e53f29, "btintel_version_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x4071b517, "out_of_line_wait_on_bit_timeout" },
	{ 0x44bae227, "bit_wait_timeout" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x7947776b, "__hci_cmd_send" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x56601480, "hci_recv_frame" },
	{ 0x807766ea, "usb_scuttle_anchored_urbs" },
	{ 0xc031e1f1, "usb_autopm_put_interface" },
	{ 0x127f76b4, "usb_autopm_get_interface" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xf5cdbb7e, "btintel_check_bdaddr" },
	{ 0x226bf902, "btintel_set_event_mask_mfg" },
	{ 0x501fb232, "btintel_exit_mfg" },
	{ 0x5c9109de, "release_firmware" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x6e3686f6, "__hci_cmd_sync_ev" },
	{ 0x6a65b233, "btintel_enter_mfg" },
	{ 0x80500894, "request_firmware" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x718b8b7, "bt_info" },
	{ 0x2a8ae770, "btintel_read_version" },
	{ 0x494ba38f, "usb_bulk_msg" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc4fb10cd, "gpiod_set_value_cansleep" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6e9b2166, "__hci_cmd_sync" },
	{ 0x7794ba54, "usb_driver_release_interface" },
	{ 0x4fc0c5ca, "device_init_wakeup" },
	{ 0x8e8b23c5, "hci_free_dev" },
	{ 0xe22cbce1, "gpiod_put" },
	{ 0xc1716c35, "hci_unregister_dev" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x37a0cba, "kfree" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x4f3aab78, "usb_unanchor_urb" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xa322e89a, "usb_anchor_urb" },
	{ 0xedb483d8, "usb_alloc_urb" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "btrtl,btbcm,bluetooth,btintel");

MODULE_ALIAS("of:N*T*Cusb1286,204e");
MODULE_ALIAS("of:N*T*Cusb1286,204eC*");
MODULE_ALIAS("of:N*T*Cusbcf3,e300");
MODULE_ALIAS("of:N*T*Cusbcf3,e300C*");
MODULE_ALIAS("of:N*T*Cusb4ca,301a");
MODULE_ALIAS("of:N*T*Cusb4ca,301aC*");
MODULE_ALIAS("usb:v*p*d*dcE0dsc01dp01ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dcE0dsc01dp04ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icE0isc01ip01in*");
MODULE_ALIAS("usb:v05ACp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0E8Dp763Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5Cp21E1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8213d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8215d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8218d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp821Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp8281d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp3800d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BFp030Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v044Ep3001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v044Ep3002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDBp1002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C10p0000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v413Cp8197d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v19FFp0239d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v105Bp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0BB4p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0489p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v04CAp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0A5Cp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0B05p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v050Dp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v13D3p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v413Cp*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v0930p*d*dc*dsc*dp*icFFisc01ip01in*");
MODULE_ALIAS("usb:v8087p0A5Ad*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "CA1EF955E21FF82890EC564");
