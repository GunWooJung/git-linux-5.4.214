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
	{ 0xc7a6ead9, "ethtool_op_get_link" },
	{ 0x473e7988, "eth_validate_addr" },
	{ 0xbb9e269f, "ssb_driver_unregister" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x95937efe, "__ssb_driver_register" },
	{ 0xbef49512, "ssb_pcihost_register" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x5fd2de91, "phy_start" },
	{ 0x24d273d1, "add_timer" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x50cbd88e, "netif_schedule_queue" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x2899f099, "netif_receive_skb" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x2b72b5ec, "__napi_alloc_skb" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0x8e0ddd54, "__dev_kfree_skb_irq" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xf281bc91, "napi_complete_done" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0xc5f6f445, "netif_device_attach" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x55e31703, "ethtool_convert_link_mode_to_legacy_u32" },
	{ 0x36c31145, "phy_ethtool_ksettings_set" },
	{ 0x7ad55ce3, "netif_device_detach" },
	{ 0x2fab06b2, "phy_stop" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x23a77175, "napi_disable" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0xbf35024e, "generic_mii_ioctl" },
	{ 0x9eb94f12, "phy_mii_ioctl" },
	{ 0x915906d7, "device_set_wakeup_enable" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x4ea25709, "dql_reset" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x3bd23fd8, "dma_direct_sync_single_for_cpu" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xc1d7d8bf, "dma_direct_sync_single_for_device" },
	{ 0xe8b1a3d2, "netdev_warn" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xc5850110, "printk" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x8d40871c, "device_set_wakeup_capable" },
	{ 0x5196e62, "phy_attached_info" },
	{ 0x39b52d19, "__bitmap_and" },
	{ 0x387b36de, "phy_connect" },
	{ 0xe30d29cd, "mdiobus_is_registered_device" },
	{ 0x47fb0804, "__mdiobus_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xed7a55b6, "mdiobus_alloc_size" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0xc21596aa, "register_netdev" },
	{ 0xfc745fa8, "ssb_dma_translation" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x8c17f24b, "ssb_bus_powerup" },
	{ 0xc61bacc3, "netif_napi_add" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
	{ 0x37a0cba, "kfree" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xd712aabe, "pci_write_config_word" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x342d5f7, "ssb_clockspeed" },
	{ 0x173b1bf4, "ssb_pcicore_dev_irqvecs_enable" },
	{ 0x34cef882, "ssb_device_enable" },
	{ 0x321233ec, "ssb_device_is_enabled" },
	{ 0x216cc777, "netdev_err" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe25caefb, "phy_print_status" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x5792f848, "strlcpy" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x384b475f, "phy_ethtool_ksettings_get" },
	{ 0x74c790d2, "pci_set_power_state" },
	{ 0xe0dc9da2, "mdiobus_free" },
	{ 0x888b323, "mdiobus_unregister" },
	{ 0xd2ce78ea, "phy_disconnect" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x7e3e8acb, "netif_napi_del" },
	{ 0xe6748ad1, "ssb_bus_may_powerdown" },
	{ 0x3a7aab6, "ssb_device_disable" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0xeb1919a4, "netdev_info" },
	{ 0xf9e91146, "__napi_schedule" },
	{ 0xa085cc86, "napi_schedule_prep" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc22cd4dd, "pv_ops" },
};

MODULE_INFO(depends, "ssb,mii");

MODULE_ALIAS("ssb:v4243id0806rev*");
MODULE_ALIAS("pci:v000014E4d00004401sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d00004402sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014E4d0000170Csv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "7C61C16178D22F57E9ED613");
