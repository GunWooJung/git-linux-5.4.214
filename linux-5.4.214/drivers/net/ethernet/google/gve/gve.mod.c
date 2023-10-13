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
	{ 0xa52ae5eb, "alloc_pages_current" },
	{ 0xeb1919a4, "netdev_info" },
	{ 0xf9a482f9, "msleep" },
	{ 0xd6c2b127, "skb_clone_tx_timestamp" },
	{ 0x82de01e, "__put_devmap_managed_page" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x23a77175, "napi_disable" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xa085cc86, "napi_schedule_prep" },
	{ 0x500ceaac, "__napi_schedule_irqoff" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xf98f4135, "pci_disable_msix" },
	{ 0x4ea25709, "dql_reset" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3bd23fd8, "dma_direct_sync_single_for_cpu" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0x999e8297, "vfree" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0x7e3e8acb, "netif_napi_del" },
	{ 0x21d3b421, "__dynamic_netdev_dbg" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x50cbd88e, "netif_schedule_queue" },
	{ 0xfdb9b629, "ioread32be" },
	{ 0xd38cd261, "__default_kernel_pte_mask" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x3bffcc92, "pci_iounmap" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xc7a6ead9, "ethtool_op_get_link" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0xeade671, "vmap" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0x2816d12d, "free_netdev" },
	{ 0xc21596aa, "register_netdev" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x5792f848, "strlcpy" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xb60081cc, "netif_set_real_num_rx_queues" },
	{ 0xfbb056ac, "netif_set_real_num_tx_queues" },
	{ 0xc61bacc3, "netif_napi_add" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x1c12c32, "cpu_bit_bitmap" },
	{ 0x272147fe, "softnet_data" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0x9d612796, "napi_gro_receive" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xe419bc99, "iowrite32be" },
	{ 0x8ad5db9f, "pci_enable_msix_range" },
	{ 0xf9e91146, "__napi_schedule" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf281bc91, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x216cc777, "netdev_err" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x94961283, "vunmap" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0xd8e9013a, "skb_add_rx_frag" },
	{ 0xc1d7d8bf, "dma_direct_sync_single_for_device" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x88ed8778, "napi_get_frags" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5c4e734e, "pci_iomap" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x2b72b5ec, "__napi_alloc_skb" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x296e38aa, "skb_tstamp_tx" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0xc99ba38a, "pci_msix_vec_count" },
	{ 0x59c6aff4, "irq_set_affinity_hint" },
	{ 0x5cb6526b, "skb_copy_bits" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x75942744, "__put_page" },
	{ 0x30eda017, "napi_gro_frags" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x8a35b432, "sme_me_mask" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001AE0d00000042sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "F2106E789B431D5A5D54931");
