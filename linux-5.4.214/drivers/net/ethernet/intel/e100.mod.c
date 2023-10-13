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
	{ 0x765395c3, "param_ops_int" },
	{ 0xe9244302, "ethtool_op_get_ts_info" },
	{ 0x473e7988, "eth_validate_addr" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xf281bc91, "napi_complete_done" },
	{ 0x2899f099, "netif_receive_skb" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x9f0cc0c1, "mii_ethtool_sset" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x921f329, "pci_restore_state" },
	{ 0xc5f6f445, "netif_device_attach" },
	{ 0x3c0222d0, "pci_enable_wake" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc1d7d8bf, "dma_direct_sync_single_for_device" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0x296e38aa, "skb_tstamp_tx" },
	{ 0xd6c2b127, "skb_clone_tx_timestamp" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x3bd23fd8, "dma_direct_sync_single_for_cpu" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xb326aede, "pci_prepare_to_sleep" },
	{ 0x74c790d2, "pci_set_power_state" },
	{ 0xf7c519d5, "pci_wake_from_d3" },
	{ 0x15af7f4, "system_state" },
	{ 0x9d766f4b, "pci_clear_master" },
	{ 0x200dc428, "pci_save_state" },
	{ 0x7ad55ce3, "netif_device_detach" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x23a77175, "napi_disable" },
	{ 0x37a0cba, "kfree" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0xad263612, "consume_skb" },
	{ 0x80500894, "request_firmware" },
	{ 0x5c9109de, "release_firmware" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x5dfee392, "dma_pool_create" },
	{ 0xc21596aa, "register_netdev" },
	{ 0xf4e8e750, "pci_pme_active" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x5c4e734e, "pci_iomap" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0xc61bacc3, "netif_napi_add" },
	{ 0x9166fada, "strncpy" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
	{ 0xbf35024e, "generic_mii_ioctl" },
	{ 0x5792f848, "strlcpy" },
	{ 0xc5534d64, "ioread16" },
	{ 0x3879f32d, "mii_nway_restart" },
	{ 0xcdb386fa, "mii_ethtool_get_link_ksettings" },
	{ 0x75a7763, "mii_ethtool_set_link_ksettings" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xdc4c3ac5, "mii_check_link" },
	{ 0x4a9cf770, "mii_ethtool_gset" },
	{ 0x942296a4, "mii_link_ok" },
	{ 0x915906d7, "device_set_wakeup_enable" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0x2816d12d, "free_netdev" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x3bffcc92, "pci_iounmap" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0xc5850110, "printk" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xeb1919a4, "netdev_info" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xe484e35f, "ioread32" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xf9a482f9, "msleep" },
	{ 0x216cc777, "netdev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0x69acdf38, "memcpy" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x3fbf1535, "netdev_printk" },
	{ 0xf9e91146, "__napi_schedule" },
	{ 0xa085cc86, "napi_schedule_prep" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xf10de535, "ioread8" },
	{ 0x848d372e, "iowrite8" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mii");

MODULE_ALIAS("pci:v00008086d00001029sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001030sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001031sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001032sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001033sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001034sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001038sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001039sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d0000103Asv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d0000103Bsv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d0000103Csv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d0000103Dsv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d0000103Esv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001050sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001051sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001052sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001053sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001054sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001055sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001056sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001057sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001059sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001064sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001065sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001066sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001067sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001068sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001069sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d0000106Asv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d0000106Bsv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001091sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001092sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001093sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001094sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001095sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d000010FEsv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001209sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00001229sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00002449sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d00002459sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d0000245Dsv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00008086d000027DCsv*sd*bc02sc00i*");

MODULE_INFO(srcversion, "B982EFA97FBC61FCE092448");
