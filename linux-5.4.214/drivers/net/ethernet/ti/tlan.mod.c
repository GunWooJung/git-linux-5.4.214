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
	{ 0x6eed2630, "param_array_ops" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x473e7988, "eth_validate_addr" },
	{ 0x820db7ec, "eth_mac_addr" },
	{ 0xc7a6ead9, "ethtool_op_get_link" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x85bd1608, "__request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x7413793a, "EISA_bus" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x216cc777, "netdev_err" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc5f6f445, "netif_device_attach" },
	{ 0x3c0222d0, "pci_enable_wake" },
	{ 0x921f329, "pci_restore_state" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x74c790d2, "pci_set_power_state" },
	{ 0xf7c519d5, "pci_wake_from_d3" },
	{ 0x200dc428, "pci_save_state" },
	{ 0x7ad55ce3, "netif_device_detach" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x63616516, "netif_rx" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xc977aafa, "__skb_pad" },
	{ 0x56470118, "__warn_printk" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xc21596aa, "register_netdev" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0x24d273d1, "add_timer" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xc5850110, "printk" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xeb1919a4, "netdev_info" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00000E11d0000AE34sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00000E11d0000AE32sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00000E11d0000AE35sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00000E11d0000F130sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00000E11d0000F150sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00000E11d0000AE43sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00000E11d0000AE40sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00000E11d0000B011sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000108Dd00000013sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000108Dd00000012sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000108Dd00000014sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00000E11d0000B030sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00000E11d0000B012sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "AE0D41B0A3F2FBE2C5861E4");
