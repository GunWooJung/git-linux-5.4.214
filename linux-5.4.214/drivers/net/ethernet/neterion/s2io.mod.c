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
	{ 0xc7a6ead9, "ethtool_op_get_link" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0x473e7988, "eth_validate_addr" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x8423aab5, "pci_dev_put" },
	{ 0xa207ea98, "pci_get_device" },
	{ 0xd0c1e622, "pci_read_config_dword" },
	{ 0x928d7386, "pci_write_config_byte" },
	{ 0xc21596aa, "register_netdev" },
	{ 0xc61bacc3, "netif_napi_add" },
	{ 0x33130ff7, "pci_ioremap_bar" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x7ad55ce3, "netif_device_detach" },
	{ 0x37a24b11, "pci_read_config_byte" },
	{ 0xc5f6f445, "netif_device_attach" },
	{ 0x23a77175, "napi_disable" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x8ad5db9f, "pci_enable_msix_range" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xf281bc91, "napi_complete_done" },
	{ 0xf9e91146, "__napi_schedule" },
	{ 0xa085cc86, "napi_schedule_prep" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0xc1d7d8bf, "dma_direct_sync_single_for_device" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0xd523d85d, "skb_push" },
	{ 0x3bd23fd8, "dma_direct_sync_single_for_cpu" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x8e0ddd54, "__dev_kfree_skb_irq" },
	{ 0x8c3253ec, "_raw_spin_trylock" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0x7f787f6d, "netif_tx_stop_all_queues" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xad263612, "consume_skb" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0xd0bb4ec1, "pci_write_config_dword" },
	{ 0x200dc428, "pci_save_state" },
	{ 0x921f329, "pci_restore_state" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x5792f848, "strlcpy" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0xf98f4135, "pci_disable_msix" },
	{ 0x37a0cba, "kfree" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd712aabe, "pci_write_config_word" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0x63616516, "netif_rx" },
	{ 0x2899f099, "netif_receive_skb" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0xbed6138e, "skb_pull" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xfb578fc5, "memset" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xc5850110, "printk" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000017D5d00005731sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D5d00005831sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D5d00005732sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017D5d00005832sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "9A0010511DD7C32C80AC36C");
