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
	{ 0xe9244302, "ethtool_op_get_ts_info" },
	{ 0xc7a6ead9, "ethtool_op_get_link" },
	{ 0x473e7988, "eth_validate_addr" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xd0bb4ec1, "pci_write_config_dword" },
	{ 0xc5f6f445, "netif_device_attach" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0xfb578fc5, "memset" },
	{ 0x74c790d2, "pci_set_power_state" },
	{ 0xf7c519d5, "pci_wake_from_d3" },
	{ 0x15af7f4, "system_state" },
	{ 0x7ad55ce3, "netif_device_detach" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x23a77175, "napi_disable" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x296e38aa, "skb_tstamp_tx" },
	{ 0xd6c2b127, "skb_clone_tx_timestamp" },
	{ 0xc5850110, "printk" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0xc21596aa, "register_netdev" },
	{ 0x915906d7, "device_set_wakeup_enable" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xc61bacc3, "netif_napi_add" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
	{ 0xf281bc91, "napi_complete_done" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x8c3253ec, "_raw_spin_trylock" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xe8b1a3d2, "netdev_warn" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x21d3b421, "__dynamic_netdev_dbg" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x50cbd88e, "netif_schedule_queue" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xad263612, "consume_skb" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x9d612796, "napi_gro_receive" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0xf89bc02c, "skb_put" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x2816d12d, "free_netdev" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x12a38747, "usleep_range" },
	{ 0xf9a482f9, "msleep" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x56470118, "__warn_printk" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x5792f848, "strlcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xa0dd6d5a, "pci_enable_msi" },
	{ 0xeb1919a4, "netdev_info" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8ad5db9f, "pci_enable_msix_range" },
	{ 0x28fe4c90, "pci_disable_msi" },
	{ 0xf98f4135, "pci_disable_msix" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x4ea25709, "dql_reset" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xf9e91146, "__napi_schedule" },
	{ 0xa085cc86, "napi_schedule_prep" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc22cd4dd, "pv_ops" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000010DEd000001C3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000066sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000000D6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000086sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000008Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000000E6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000000DFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000056sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000057sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000037sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000038sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000268sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000269sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000372sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000373sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000003E5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000003E6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000003EEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000003EFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000450sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000451sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000452sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000453sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000054Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000054Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000054Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000054Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000007DCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000007DDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000007DEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000007DFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000760sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000761sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000762sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000763sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000AB0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000AB1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000AB2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000AB3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000D7Dsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "1295C3A550EF1B756C627BA");
