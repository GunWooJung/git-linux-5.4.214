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
	{ 0x68a41536, "param_ops_bool" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x473e7988, "eth_validate_addr" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0xbf35024e, "generic_mii_ioctl" },
	{ 0x75a7763, "mii_ethtool_set_link_ksettings" },
	{ 0xcdb386fa, "mii_ethtool_get_link_ksettings" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xf281bc91, "napi_complete_done" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2899f099, "netif_receive_skb" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x69acdf38, "memcpy" },
	{ 0x2b72b5ec, "__napi_alloc_skb" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xeb1919a4, "netdev_info" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x5c4e734e, "pci_iomap" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0xc21596aa, "register_netdev" },
	{ 0xc61bacc3, "netif_napi_add" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x23a77175, "napi_disable" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0xace59822, "skb_copy_and_csum_dev" },
	{ 0xad995dac, "netdev_stats_to_stats64" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x216cc777, "netdev_err" },
	{ 0xd712aabe, "pci_write_config_word" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0xf9e91146, "__napi_schedule" },
	{ 0xa085cc86, "napi_schedule_prep" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x5792f848, "strlcpy" },
	{ 0x3879f32d, "mii_nway_restart" },
	{ 0x942296a4, "mii_link_ok" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc5850110, "printk" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0x3bffcc92, "pci_iounmap" },
	{ 0x7ad55ce3, "netif_device_detach" },
	{ 0x200dc428, "pci_save_state" },
	{ 0xc5f6f445, "netif_device_attach" },
	{ 0x74c790d2, "pci_set_power_state" },
	{ 0x921f329, "pci_restore_state" },
	{ 0x6083fda9, "mii_check_media" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x21d3b421, "__dynamic_netdev_dbg" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc5534d64, "ioread16" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe484e35f, "ioread32" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xf10de535, "ioread8" },
	{ 0x848d372e, "iowrite8" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mii");

MODULE_ALIAS("pci:v000010ECd00008139sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008138sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001113d00001211sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001500d00001360sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00004033d00001360sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00001300sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00001340sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013D1d0000AB06sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001259d0000A117sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001259d0000A11Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014EAd0000AB06sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014EAd0000AB07sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011DBd00001234sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00009130sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000002ACd00001012sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000018Ad00000106sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000126Cd00001211sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001743d00008139sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000021Bd00008139sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000016ECd0000AB06sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008129sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v*d00008139sv000010ECsd00008139bc*sc*i*");
MODULE_ALIAS("pci:v*d00008139sv00001186sd00001300bc*sc*i*");
MODULE_ALIAS("pci:v*d00008139sv000013D1sd0000AB06bc*sc*i*");

MODULE_INFO(srcversion, "AF77EDC83C4ECCF86B5D7DE");
