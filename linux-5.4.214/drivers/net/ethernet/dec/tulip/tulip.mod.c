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
	{ 0xd0bb4ec1, "pci_write_config_dword" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x3bd23fd8, "dma_direct_sync_single_for_cpu" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3c0222d0, "pci_enable_wake" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x21d3b421, "__dynamic_netdev_dbg" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x63616516, "netif_rx" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x921f329, "pci_restore_state" },
	{ 0x3bffcc92, "pci_iounmap" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5850110, "printk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x2816d12d, "free_netdev" },
	{ 0xc21596aa, "register_netdev" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x5792f848, "strlcpy" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x8e0ddd54, "__dev_kfree_skb_irq" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x24d273d1, "add_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x3145216f, "pci_dev_present" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0xc5f6f445, "netif_device_attach" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x7ad55ce3, "netif_device_detach" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd0c1e622, "pci_read_config_dword" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x74c790d2, "pci_set_power_state" },
	{ 0xe8b1a3d2, "netdev_warn" },
	{ 0x473e7988, "eth_validate_addr" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0xb27ba2a8, "dev_trans_start" },
	{ 0xc1d7d8bf, "dma_direct_sync_single_for_device" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xc5534d64, "ioread16" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x9dc6d8c9, "pci_choose_state" },
	{ 0x5c4e734e, "pci_iomap" },
	{ 0xad263612, "consume_skb" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xf89bc02c, "skb_put" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x820db7ec, "eth_mac_addr" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0xe484e35f, "ioread32" },
	{ 0x915906d7, "device_set_wakeup_enable" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x200dc428, "pci_save_state" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001011d00000009sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001011d00000019sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ADd00000002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010D9d00000512sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010D9d00000531sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000125Bd00001400sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ADd0000C115sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001317d00000981sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001317d00000985sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001317d00001985sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001317d00009511sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013D1d0000AB02sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013D1d0000AB03sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013D1d0000AB08sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000104Ad00000981sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000104Ad00002774sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001259d0000A120sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011F6d00009881sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000039sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001113d00001216sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001113d00001217sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001113d00009511sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00001541sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00001561sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001186d00001591sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00001803sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001626d00008410sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001737d0000AB09sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001737d0000AB08sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017B3d0000AB08sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00009300sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014EAd0000AB08sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001414d00000001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001414d00000002sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "00E881AF6D79913F3565442");
