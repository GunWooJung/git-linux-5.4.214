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
	{ 0x2d3385d3, "system_wq" },
	{ 0xeb1919a4, "netdev_info" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xd0bb4ec1, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xd712aabe, "pci_write_config_word" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x23a77175, "napi_disable" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xa085cc86, "napi_schedule_prep" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x3bd23fd8, "dma_direct_sync_single_for_cpu" },
	{ 0xdaceb7a6, "mdio_mii_ioctl" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x564c202f, "skb_realloc_headroom" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x21d3b421, "__dynamic_netdev_dbg" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xc5850110, "printk" },
	{ 0xc7a6ead9, "ethtool_op_get_link" },
	{ 0x8c3253ec, "_raw_spin_trylock" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x2816d12d, "free_netdev" },
	{ 0xc21596aa, "register_netdev" },
	{ 0x2899f099, "netif_receive_skb" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0x5792f848, "strlcpy" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0xd523d85d, "skb_push" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xc61bacc3, "netif_napi_add" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xa0dd6d5a, "pci_enable_msi" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xf9e91146, "__napi_schedule" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x652900ee, "skb_checksum_help" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xf281bc91, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd0c1e622, "pci_read_config_dword" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x473e7988, "eth_validate_addr" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0x28fe4c90, "pci_disable_msi" },
	{ 0xedc03953, "iounmap" },
	{ 0xc1d7d8bf, "dma_direct_sync_single_for_device" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0x53569707, "this_cpu_off" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xad263612, "consume_skb" },
	{ 0x2b72b5ec, "__napi_alloc_skb" },
	{ 0xf89bc02c, "skb_put" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "mdio");

MODULE_ALIAS("pci:v00001425d00000008sv*sd00000000bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00000008sv*sd00000001bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00000007sv*sd00000000bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000000Asv*sd00000001bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000000Bsv*sd00000001bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000000Esv*sd00000001bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00000010sv*sd00000001bc*sc*i*");

MODULE_INFO(srcversion, "FFF79396AE8D9662E1FE757");
