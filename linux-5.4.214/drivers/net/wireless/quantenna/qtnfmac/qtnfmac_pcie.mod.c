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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd619322, "init_dummy_netdev" },
	{ 0x7f3966fa, "debugfs_create_dir" },
	{ 0x27dd129b, "pcim_enable_device" },
	{ 0x23a77175, "napi_disable" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xa085cc86, "napi_schedule_prep" },
	{ 0x4117e0fc, "pcim_iomap_table" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x6003ae6e, "qtnf_packet_send_hi_pri" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0x850f6123, "qtnf_update_tx_stats" },
	{ 0x3c0222d0, "pci_enable_wake" },
	{ 0xa68d5818, "qtnf_get_debugfs_dir" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x5b1c5c13, "debugfs_remove_recursive" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0x7e3e8acb, "netif_napi_del" },
	{ 0xfd94814e, "complete_all" },
	{ 0x31fab83c, "qtnf_chipid_to_string" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xdd1bf945, "pcie_get_mps" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xa9369344, "qtnf_trans_handle_rx_ctl_packet" },
	{ 0xfb578fc5, "memset" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x921f329, "pci_restore_state" },
	{ 0x7f787f6d, "netif_tx_stop_all_queues" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x2899f099, "netif_receive_skb" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc61bacc3, "netif_napi_add" },
	{ 0xa0dd6d5a, "pci_enable_msi" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x5f130ba8, "pcim_iomap_regions" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0x9d612796, "napi_gro_receive" },
	{ 0x2cd0adff, "pcie_set_mps" },
	{ 0x12a38747, "usleep_range" },
	{ 0xf9e91146, "__napi_schedule" },
	{ 0x8e17faf3, "put_device" },
	{ 0x960dee99, "debugfs_create_devm_seqfile" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc9aba70, "pci_intx" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x18fcc28f, "qtnf_classify_skb" },
	{ 0xf281bc91, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x9c99cc3a, "qtnf_core_detach" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4ca2934d, "qtnf_wake_all_queues" },
	{ 0xe7a7a03f, "get_device" },
	{ 0xdc67eaad, "param_ops_byte" },
	{ 0x74c790d2, "pci_set_power_state" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x80500894, "request_firmware" },
	{ 0xa8991535, "qtnf_update_rx_stats" },
	{ 0xf8a35bc2, "qtnf_core_attach" },
	{ 0x9ed02ae3, "dmam_alloc_attrs" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x5c9109de, "release_firmware" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x200dc428, "pci_save_state" },
};

MODULE_INFO(depends, "qtnfmac");

MODULE_ALIAS("pci:v00001BB5d00000008sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "4B31F9BA493A49548FBEAEB");
