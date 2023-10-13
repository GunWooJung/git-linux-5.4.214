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
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x91fc7183, "generic_file_llseek" },
	{ 0x82de01e, "__put_devmap_managed_page" },
	{ 0x7f3966fa, "debugfs_create_dir" },
	{ 0x7ee415d5, "single_open" },
	{ 0x98d5d311, "debugfs_create_u8" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x496ddac5, "firmware_request_cache" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x8ce08cc0, "single_release" },
	{ 0xe35ed617, "seq_puts" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x50827106, "ieee80211_unregister_hw" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x10ad27ea, "trace_event_buffer_reserve" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xd0a46a6a, "debugfs_create_file" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x21ba44a5, "seq_read" },
	{ 0x1c780ca5, "bpf_trace_run3" },
	{ 0xebff55c1, "__alloc_pages_nodemask" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0xadccbcdc, "ieee80211_stop_queues" },
	{ 0x2a456f5f, "simple_attr_read" },
	{ 0xe1f1bcd1, "ieee80211_stop_queue" },
	{ 0x19f945ca, "ieee80211_tx_status" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x57d403e2, "debugfs_create_u32" },
	{ 0x7d709b59, "trace_define_field" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xf6bf019f, "bpf_trace_run9" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0x12422e18, "ieee80211_alloc_hw_nm" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xace333ca, "ieee80211_free_txskb" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x3724b91d, "ieee80211_wake_queues" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x5ee176e6, "trace_event_reg" },
	{ 0x693a12d4, "usb_poison_urb" },
	{ 0x3885862f, "seq_putc" },
	{ 0x25358e1b, "usb_control_msg" },
	{ 0x5792f848, "strlcpy" },
	{ 0xd523d85d, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x3f556282, "simple_attr_release" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x94c8bc6d, "usb_free_coherent" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x91e923db, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x7d725735, "devm_kmemdup" },
	{ 0x8d78a784, "ieee80211_queue_delayed_work" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x2e30b2c0, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0x7ea3fb3a, "__free_pages" },
	{ 0x618911fc, "numa_node" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0xe3ef08a7, "usb_get_dev" },
	{ 0x12a38747, "usleep_range" },
	{ 0x189a4736, "trace_event_ignore_this_pid" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xcff5573e, "usb_reset_device" },
	{ 0x494ba38f, "usb_bulk_msg" },
	{ 0x815f16c8, "usb_put_dev" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x2f33510b, "ieee80211_send_bar" },
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0x69f102ce, "ieee80211_get_tx_rates" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x79a4237e, "trace_event_buffer_commit" },
	{ 0xcfb5d782, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x2e056e00, "ieee80211_wake_queue" },
	{ 0xdb2f9f5e, "event_triggers_call" },
	{ 0xbd900a19, "ieee80211_get_hdrlen_from_skb" },
	{ 0x68e4245a, "bpf_trace_run2" },
	{ 0x926d56bd, "ieee80211_register_hw" },
	{ 0xda2b5d09, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf603e82d, "trace_event_raw_init" },
	{ 0xe1c7b5f0, "ieee80211_tx_status_ext" },
	{ 0xd8e9013a, "skb_add_rx_frag" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0x80500894, "request_firmware" },
	{ 0x510d772f, "ieee80211_free_hw" },
	{ 0xf86c3947, "trace_raw_output_prep" },
	{ 0x29361773, "complete" },
	{ 0x525d0aa3, "trace_seq_printf" },
	{ 0xb0e602eb, "memmove" },
	{ 0xad263612, "consume_skb" },
	{ 0xe2c54831, "usb_alloc_coherent" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x2ec9f914, "bpf_trace_run4" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x703de441, "simple_attr_open" },
	{ 0x5c9109de, "release_firmware" },
	{ 0x63f0726e, "ieee80211_start_tx_ba_cb_irqsafe" },
	{ 0x75942744, "__put_page" },
	{ 0xa615d9a, "simple_attr_write" },
	{ 0xc977aafa, "__skb_pad" },
	{ 0xedb483d8, "usb_alloc_urb" },
	{ 0x587f22d7, "devmap_managed_key" },
};

MODULE_INFO(depends, "mac80211,cfg80211");

MODULE_ALIAS("usb:v0B05p17D3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp760Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp760Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3431d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3434d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp7601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp760Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp760Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp760Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp760Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3D04d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2717p4106d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2955p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2955p1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2955p1003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2A5Fp1000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p7710d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "F687AA7FE3C2A7746064F2F");
