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
	{ 0xa49c73b1, "ath10k_ce_completed_recv_next_nolock" },
	{ 0x38c347cc, "ath10k_htt_txrx_compl_task" },
	{ 0x2d6266e0, "ath10k_core_unregister" },
	{ 0xd0bb4ec1, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x33eabdda, "ath10k_htt_t2h_msg_handler" },
	{ 0xe37407fe, "pci_release_region" },
	{ 0x23a77175, "napi_disable" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xa085cc86, "napi_schedule_prep" },
	{ 0xdc7cbf19, "ath10k_info" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xd24dab52, "ath10k_coredump_new" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0xfb344f5d, "ath10k_core_register" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x47c41649, "ath10k_ce_init_pipe" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xd62fdbad, "ath10k_ce_deinit_pipe" },
	{ 0xde4d2aa5, "ath10k_htc_rx_completion_handler" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x3bd23fd8, "dma_direct_sync_single_for_cpu" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xd3fb56dc, "ath10k_core_destroy" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x50dd77c4, "__tracepoint_ath10k_log_dbg" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0x7e3e8acb, "netif_napi_del" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x7abe24a8, "ath10k_htt_rx_pktlog_completion_handler" },
	{ 0x52e4e7ba, "__ath10k_ce_rx_num_free_bufs" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x15e5db2, "ath10k_debug_mask" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xfb578fc5, "memset" },
	{ 0x3bffcc92, "pci_iounmap" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x66bcecae, "ath10k_core_create" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x276c7bf2, "ath10k_ce_rx_post_buf" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0xb70c27a0, "ath10k_ce_enable_interrupts" },
	{ 0xd523d85d, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xfac6f13b, "ath10k_ce_per_engine_service_any" },
	{ 0xef1c3013, "ath10k_ce_dump_registers" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x71a5d2ee, "ath10k_ce_completed_send_next" },
	{ 0xc61bacc3, "netif_napi_add" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xb68958c0, "ath10k_htc_tx_completion_handler" },
	{ 0xa0dd6d5a, "pci_enable_msi" },
	{ 0x16bfd158, "ath10k_ce_completed_recv_next" },
	{ 0x9d766f4b, "pci_clear_master" },
	{ 0x260b07fa, "ath10k_ce_revoke_recv_next" },
	{ 0x35e3bd69, "ath10k_ce_free_pipe" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x7e70c431, "__ath10k_ce_send_revert" },
	{ 0xb224bb0b, "ath10k_htt_hif_tx_complete" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0xa6250597, "ath10k_ce_rx_update_write_idx" },
	{ 0xf9e91146, "__napi_schedule" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xad263441, "ath10k_ce_num_free_src_entries" },
	{ 0x9e7d0905, "ath10k_print_driver_info" },
	{ 0x1000e51, "schedule" },
	{ 0x3f2e7e43, "ath10k_err" },
	{ 0xf281bc91, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xd0c1e622, "pci_read_config_dword" },
	{ 0x3085b807, "ath10k_coredump_get_mem_layout" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x50bbb31d, "ath10k_ce_send" },
	{ 0x8870dabe, "ath10k_ce_cancel_send_next" },
	{ 0x96a422cf, "ath10k_ce_per_engine_service" },
	{ 0xd009a69c, "ath10k_warn" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x28fe4c90, "pci_disable_msi" },
	{ 0xc1d7d8bf, "dma_direct_sync_single_for_device" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x96848186, "scnprintf" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xdb77c7d8, "ath10k_ce_alloc_pipe" },
	{ 0x5c4e734e, "pci_iomap" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xd7b79311, "ath10k_ce_send_nolock" },
	{ 0xf89bc02c, "skb_put" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x96e57448, "pcie_capability_write_word" },
	{ 0xb23de490, "pci_request_region" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0xe484e35f, "ioread32" },
	{ 0xec734f3a, "pcie_capability_read_word" },
	{ 0x55d4250c, "ath10k_ce_disable_interrupts" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "ath10k_core");

MODULE_ALIAS("pci:v00000777d000011ACsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000003Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000041sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000003Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000040sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000056sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000046sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000042sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000050sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "F348CDEB1C7E49AB3D41E63");
