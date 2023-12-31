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
	{ 0x765395c3, "param_ops_int" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0x473e7988, "eth_validate_addr" },
	{ 0x820db7ec, "eth_mac_addr" },
	{ 0x38bd0581, "eisa_driver_unregister" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xfb77cba3, "eisa_driver_register" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x296e38aa, "skb_tstamp_tx" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0xbfc177bc, "iowrite32_rep" },
	{ 0xd6c2b127, "skb_clone_tx_timestamp" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xc1d7d8bf, "dma_direct_sync_single_for_device" },
	{ 0x3bd23fd8, "dma_direct_sync_single_for_cpu" },
	{ 0x8e0ddd54, "__dev_kfree_skb_irq" },
	{ 0x50cbd88e, "netif_schedule_queue" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x63616516, "netif_rx" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0x3f0546a8, "ioread32_rep" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0xad263612, "consume_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0xc5f6f445, "netif_device_attach" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x7ad55ce3, "netif_device_detach" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x4ea25709, "dql_reset" },
	{ 0x594bf15b, "ioport_map" },
	{ 0x85bd1608, "__request_region" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0xc21596aa, "register_netdev" },
	{ 0x200dc428, "pci_save_state" },
	{ 0xcdca3691, "nr_irqs" },
	{ 0x5c4e734e, "pci_iomap" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x928d7386, "pci_write_config_byte" },
	{ 0x37a24b11, "pci_read_config_byte" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
	{ 0x848d372e, "iowrite8" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xbf35024e, "generic_mii_ioctl" },
	{ 0x5792f848, "strlcpy" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xfcc73aec, "eisa_bus_type" },
	{ 0x3879f32d, "mii_nway_restart" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x921f329, "pci_restore_state" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0x3bffcc92, "pci_iounmap" },
	{ 0x74c790d2, "pci_set_power_state" },
	{ 0x3c0222d0, "pci_enable_wake" },
	{ 0x6d00f69e, "pci_bus_type" },
	{ 0x915906d7, "device_set_wakeup_enable" },
	{ 0xf10de535, "ioread8" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc5534d64, "ioread16" },
	{ 0x6083fda9, "mii_check_media" },
	{ 0xe484e35f, "ioread32" },
	{ 0xc5850110, "printk" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xcdb386fa, "mii_ethtool_get_link_ksettings" },
	{ 0x75a7763, "mii_ethtool_set_link_ksettings" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mii");

MODULE_ALIAS("eisa:sTCM5920*");
MODULE_ALIAS("eisa:sTCM5970*");
MODULE_ALIAS("pci:v000010B7d00005900sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00005920sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00005970sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00005950sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00005951sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00005952sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009004sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009005sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009006sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d0000900Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009050sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009051sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009054sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009055sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009058sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d0000905Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009200sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009202sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009800sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009805sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00007646sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00005055sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00006055sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00006056sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00005B57sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00005057sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00005157sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00005257sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00006560sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00006562sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00006564sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00004500sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009201sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00001201sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00001202sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009056sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009210sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "BB607BADDF1730A2B4DE2E8");
