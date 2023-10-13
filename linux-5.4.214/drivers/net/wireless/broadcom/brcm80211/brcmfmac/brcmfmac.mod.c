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
	{ 0x958767a4, "register_netdevice" },
	{ 0x406e189e, "sdio_writeb" },
	{ 0x225ecbd1, "sdio_readb" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x6a9466ef, "skb_queue_head" },
	{ 0xd6217d91, "brcmu_d11_attach" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xd0bb4ec1, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x50877b9, "dmi_first_match" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x70d3ebc4, "wiphy_free" },
	{ 0x7381287f, "trace_handle_return" },
	{ 0x7410aba2, "strreplace" },
	{ 0xa20bfaa8, "cfg80211_connect_done" },
	{ 0x349cba85, "strchr" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0xe2569725, "device_release_driver" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xea124bd1, "gcd" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0x75ad7f34, "cfg80211_inform_bss_data" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xad2b26aa, "send_sig" },
	{ 0xf5596d89, "cfg80211_get_p2p_attr" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xecf02f95, "sdio_enable_func" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x815de1fb, "cfg80211_report_wowlan_wakeup" },
	{ 0x43dff967, "sdio_claim_irq" },
	{ 0x5c42b5ca, "no_llseek" },
	{ 0xf7c005f, "sdio_retune_release" },
	{ 0x63dc4e88, "brcmu_pkt_buf_get_skb" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xd36dc10c, "get_random_u32" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x53590eb7, "usb_kill_urb" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x60352082, "register_inet6addr_notifier" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x18f90612, "cfg80211_rx_mgmt" },
	{ 0x9791d2e6, "ieee80211_channel_to_frequency" },
	{ 0x87b8798d, "sg_next" },
	{ 0xc310b981, "strnstr" },
	{ 0x4e367da1, "driver_for_each_device" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x5cf21397, "brcmu_pktq_pdeq_tail" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0x10ad27ea, "trace_event_buffer_reserve" },
	{ 0x75ed0899, "__platform_driver_probe" },
	{ 0x999e8297, "vfree" },
	{ 0xa453352, "pm_runtime_allow" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x68135aca, "brcmu_pktq_penq" },
	{ 0xe97309c3, "pci_pme_capable" },
	{ 0xbfc03cbf, "cfg80211_unregister_wdev" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xeb65bd17, "brcmu_pktq_mdeq" },
	{ 0xd0a46a6a, "debugfs_create_file" },
	{ 0x2b6f0008, "pm_runtime_forbid" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xdd64e639, "strscpy" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1c780ca5, "bpf_trace_run3" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xabaae129, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe4327949, "sdio_get_host_pm_caps" },
	{ 0xe677827a, "skb_unlink" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9d1b8678, "cfg80211_mgmt_tx_status" },
	{ 0xc9d8b484, "param_ops_string" },
	{ 0xfd94814e, "complete_all" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x63616516, "netif_rx" },
	{ 0x90a69765, "__pskb_pull_tail" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x7a6dfa27, "mmc_wait_for_req" },
	{ 0x2fe252cc, "unregister_inet6addr_notifier" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x41d69a39, "sdio_writel" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x7d709b59, "trace_define_field" },
	{ 0xaaacd34a, "cfg80211_vendor_cmd_reply" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x83c31348, "brcmu_pktq_pdeq_match" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x50087170, "netif_rx_ni" },
	{ 0xf10de535, "ioread8" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x3d9313cd, "bpf_trace_run1" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xb95a6e6d, "usb_deregister" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x85e73dd7, "kthread_stop" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x262e823a, "wait_for_completion_interruptible" },
	{ 0x99a5f205, "efivar_entry_size" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x2dc36513, "wiphy_unregister" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9166fada, "strncpy" },
	{ 0x5ee176e6, "trace_event_reg" },
	{ 0xc21596aa, "register_netdev" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x4c166988, "mmc_set_data_timeout" },
	{ 0x2a6949d2, "sdio_readl" },
	{ 0xd48ea5a, "cfg80211_del_sta_sinfo" },
	{ 0xe1cbcc8e, "ieee80211_get_channel" },
	{ 0x5a921311, "strncmp" },
	{ 0x5792f848, "strlcpy" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x3ddad50, "brcmu_pktq_peek_tail" },
	{ 0x4bba1843, "brcmu_pktq_flush" },
	{ 0x4e6eb914, "sdio_retune_crc_enable" },
	{ 0xd523d85d, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x395ad404, "cfg80211_michael_mic_failure" },
	{ 0x52b4d74f, "wiphy_apply_custom_regulatory" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x24d273d1, "add_timer" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x32ee9868, "simple_open" },
	{ 0xaf7ad1b4, "request_firmware_nowait" },
	{ 0xfcd35dae, "cfg80211_ibss_joined" },
	{ 0xd9996d5a, "device_wakeup_enable" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x91e923db, "perf_trace_run_bpf_submit" },
	{ 0xa0dd6d5a, "pci_enable_msi" },
	{ 0xad5f0017, "perf_trace_buf_alloc" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9042e7c3, "sdio_readsb" },
	{ 0xd8f46d1d, "sdio_unregister_driver" },
	{ 0x3a2f6702, "sg_alloc_table" },
	{ 0x93583205, "sdio_f0_writeb" },
	{ 0xfe66fe5a, "sdio_set_host_pm_flags" },
	{ 0xdb395e7a, "cfg80211_check_combinations" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc502ef3, "skb_queue_tail" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0x9f984513, "strrchr" },
	{ 0x8a2611eb, "usb_submit_urb" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xc036439e, "cfg80211_roamed" },
	{ 0x124c821, "cfg80211_put_bss" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0xa916b694, "strnlen" },
	{ 0x12a38747, "usleep_range" },
	{ 0x4f7fd406, "__cfg80211_alloc_reply_skb" },
	{ 0xd7cddb7c, "wiphy_register" },
	{ 0x189a4736, "trace_event_ignore_this_pid" },
	{ 0x3fe2e2ef, "cfg80211_crit_proto_stopped" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x1f7b01bc, "sdio_release_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x4e3660a1, "cfg80211_classify8021d" },
	{ 0xa579b855, "efivar_entry_get" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0xeb6553bc, "cfg80211_ready_on_channel" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0xc722e194, "wiphy_new_nm" },
	{ 0xc6fb8710, "alloc_netdev_mqs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd0c1e622, "pci_read_config_dword" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0xdf256037, "kstrtou8_from_user" },
	{ 0xeca9c700, "sdio_f0_readb" },
	{ 0x79a4237e, "trace_event_buffer_commit" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0xab37f21b, "wake_up_process" },
	{ 0xcfb5d782, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf0fa7dc3, "ether_setup" },
	{ 0x6b93f45f, "cfg80211_disconnected" },
	{ 0xa17c0ccf, "brcmu_dotrev_str" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4aebfc6b, "unregister_netdevice_queue" },
	{ 0x9ea53d7f, "vsnprintf" },
	{ 0xe42bf468, "cfg80211_new_sta" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xdb2f9f5e, "event_triggers_call" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x6961b9f2, "sdio_memcpy_toio" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x68e4245a, "bpf_trace_run2" },
	{ 0x898c75fe, "brcmu_pktq_penq_head" },
	{ 0xe77a7be2, "brcmu_pktq_init" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf603e82d, "trace_event_raw_init" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0x28fe4c90, "pci_disable_msi" },
	{ 0xedc03953, "iounmap" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x96848186, "scnprintf" },
	{ 0xaf37d977, "usb_register_driver" },
	{ 0x80500894, "request_firmware" },
	{ 0xc5534d64, "ioread16" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x3b89b540, "skb_dequeue" },
	{ 0x7839647d, "cfg80211_remain_on_channel_expired" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0x7f5b4fe4, "sg_free_table" },
	{ 0xf86c3947, "trace_raw_output_prep" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x525d0aa3, "trace_seq_printf" },
	{ 0x43919251, "sdio_register_driver" },
	{ 0xad263612, "consume_skb" },
	{ 0xa5d565a3, "sdio_memcpy_fromio" },
	{ 0x422eac59, "cfg80211_sched_scan_stopped" },
	{ 0xfc5d3d0c, "sdio_claim_host" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x599074f3, "firmware_request_nowarn" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x9c53d3db, "cfg80211_scan_done" },
	{ 0x760a0b96, "sdio_retune_crc_disable" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x3a0fde7, "brcmu_pkt_buf_free_skb" },
	{ 0xf89bc02c, "skb_put" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x3273e28d, "usb_free_urb" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x15cb5620, "is_acpi_device_node" },
	{ 0x98d0a1f5, "sdio_set_block_size" },
	{ 0x5c9109de, "release_firmware" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0xe484e35f, "ioread32" },
	{ 0x915906d7, "device_set_wakeup_enable" },
	{ 0xb63ef191, "sdio_disable_func" },
	{ 0xedb483d8, "usb_alloc_urb" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x56d3d127, "sdio_release_host" },
	{ 0xe914e41e, "strcpy" },
	{ 0x3a139716, "sdio_retune_hold_now" },
	{ 0xdcc34c59, "cfg80211_sched_scan_results" },
	{ 0x7cfbe637, "brcmu_pktq_mlen" },
	{ 0x81e6b37f, "dmi_get_system_info" },
};

MODULE_INFO(depends, "brcmutil,cfg80211");

MODULE_ALIAS("sdio:c*v02D0dA887*");
MODULE_ALIAS("sdio:c*v02D0d4324*");
MODULE_ALIAS("sdio:c*v02D0d4329*");
MODULE_ALIAS("sdio:c*v02D0d4330*");
MODULE_ALIAS("sdio:c*v02D0d4334*");
MODULE_ALIAS("sdio:c*v02D0dA94C*");
MODULE_ALIAS("sdio:c*v02D0dA94D*");
MODULE_ALIAS("sdio:c*v02D0dA962*");
MODULE_ALIAS("sdio:c*v02D0dA9A4*");
MODULE_ALIAS("sdio:c*v02D0d4335*");
MODULE_ALIAS("sdio:c*v02D0d4339*");
MODULE_ALIAS("sdio:c*v02D0dA9A6*");
MODULE_ALIAS("sdio:c*v02D0d4345*");
MODULE_ALIAS("sdio:c*v02D0dA9BF*");
MODULE_ALIAS("sdio:c*v02D0d4354*");
MODULE_ALIAS("sdio:c*v02D0d4356*");
MODULE_ALIAS("sdio:c*v02D0d4373*");
MODULE_ALIAS("sdio:c*v02D0dA804*");
MODULE_ALIAS("pci:v000014E4d000043A3sv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d00004355sv000014E4sd00004355bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d00004354sv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043ECsv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043D3sv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043D9sv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043E9sv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043EFsv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043BAsv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043BBsv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043BCsv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d0000AA52sv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043CAsv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043CBsv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043CCsv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d00004365sv000014E4sd00004365bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043C3sv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043C4sv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d000043C5sv*sd*bc02sc80i*");
MODULE_ALIAS("pci:v000014E4d0000440Dsv*sd*bc02sc80i*");
MODULE_ALIAS("usb:v0A5CpBD1Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5CpBD17d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5CpBD1Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5CpBD27d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4pBD29d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v043Ep3101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A5Cp0BDCd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p0BDCd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "285BAFFAB2C10182FE513D7");
