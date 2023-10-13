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
	{ 0xcd57c7b9, "ieee80211_csa_finish" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xd619322, "init_dummy_netdev" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0xc306c3a8, "page_frag_alloc" },
	{ 0x7f3966fa, "debugfs_create_dir" },
	{ 0x98d5d311, "debugfs_create_u8" },
	{ 0xd4fa4dd8, "ieee80211_sta_ps_transition" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x5c3fcfc9, "ieee80211_csa_is_complete" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xe35ed617, "seq_puts" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x5c42b5ca, "no_llseek" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3bd23fd8, "dma_direct_sync_single_for_cpu" },
	{ 0x50827106, "ieee80211_unregister_hw" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x168babb5, "pcie_capability_clear_and_set_word" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x28c7e597, "ieee80211_iterate_active_interfaces_atomic" },
	{ 0x10ad27ea, "trace_event_buffer_reserve" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x4a3b923d, "__page_frag_cache_drain" },
	{ 0x1c780ca5, "bpf_trace_run3" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x7e3e8acb, "netif_napi_del" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe1f1bcd1, "ieee80211_stop_queue" },
	{ 0x19f945ca, "ieee80211_tx_status" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x57d403e2, "debugfs_create_u32" },
	{ 0x7d709b59, "trace_define_field" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xe38c830e, "ieee80211_tx_dequeue" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x12422e18, "ieee80211_alloc_hw_nm" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xb372d8f7, "led_classdev_register_ext" },
	{ 0xace333ca, "ieee80211_free_txskb" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x3801776b, "__ioread32_copy" },
	{ 0xcaf82e1c, "ieee80211_sta_pspoll" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x5ee176e6, "trace_event_reg" },
	{ 0x5792f848, "strlcpy" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0xd523d85d, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xe2b8fcd8, "ieee80211_next_txq" },
	{ 0x44439af6, "ieee80211_find_sta_by_ifaddr" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc61bacc3, "netif_napi_add" },
	{ 0x3f556282, "simple_attr_release" },
	{ 0xdb798d3d, "debugfs_create_file_unsafe" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x91e923db, "perf_trace_run_bpf_submit" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0x7d725735, "devm_kmemdup" },
	{ 0x8d78a784, "ieee80211_queue_delayed_work" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9cf37c44, "__iowrite32_copy" },
	{ 0xebaa60f0, "debugfs_attr_read" },
	{ 0x245054f3, "build_skb" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc502ef3, "skb_queue_tail" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x87bd903f, "pci_disable_link_state" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0x12a38747, "usleep_range" },
	{ 0x189a4736, "trace_event_ignore_this_pid" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x960dee99, "debugfs_create_devm_seqfile" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x35c3df6e, "ieee80211_sta_uapsd_trigger" },
	{ 0x4b740861, "ieee80211_sta_set_buffered" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xe345725f, "ieee80211_get_key_rx_seq" },
	{ 0x88e1d0f0, "page_frag_free" },
	{ 0x2f33510b, "ieee80211_send_bar" },
	{ 0x69f102ce, "ieee80211_get_tx_rates" },
	{ 0xf281bc91, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x79a4237e, "trace_event_buffer_commit" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x2e056e00, "ieee80211_wake_queue" },
	{ 0xdb2f9f5e, "event_triggers_call" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xbd900a19, "ieee80211_get_hdrlen_from_skb" },
	{ 0xd7bf2b88, "ieee80211_sta_eosp" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xcd0850a6, "__ieee80211_create_tpt_led_trigger" },
	{ 0x926d56bd, "ieee80211_register_hw" },
	{ 0x6b2998d4, "led_classdev_unregister" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf603e82d, "trace_event_raw_init" },
	{ 0xef80c44, "debugfs_create_blob" },
	{ 0xd8e9013a, "skb_add_rx_frag" },
	{ 0xc1d7d8bf, "dma_direct_sync_single_for_device" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xccc00b24, "ieee80211_txq_schedule_start" },
	{ 0x510d772f, "ieee80211_free_hw" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x3b89b540, "skb_dequeue" },
	{ 0xf86c3947, "trace_raw_output_prep" },
	{ 0x9ed02ae3, "dmam_alloc_attrs" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x525d0aa3, "trace_seq_printf" },
	{ 0xb0e602eb, "memmove" },
	{ 0xad263612, "consume_skb" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x54d16a13, "debugfs_attr_write" },
	{ 0x97bb529, "__ieee80211_schedule_txq" },
	{ 0x703de441, "simple_attr_open" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0xec734f3a, "pcie_capability_read_word" },
};

MODULE_INFO(depends, "mac80211,cfg80211");


MODULE_INFO(srcversion, "F8261A3C70C48C727DEA25D");
