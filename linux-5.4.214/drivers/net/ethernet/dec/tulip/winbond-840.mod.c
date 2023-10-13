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
	{ 0x6eed2630, "param_array_ops" },
	{ 0x473e7988, "eth_validate_addr" },
	{ 0x820db7ec, "eth_mac_addr" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xc5f6f445, "netif_device_attach" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x7ad55ce3, "netif_device_detach" },
	{ 0x24d273d1, "add_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x848d372e, "iowrite8" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0xc1d7d8bf, "dma_direct_sync_single_for_device" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3bd23fd8, "dma_direct_sync_single_for_cpu" },
	{ 0x8e0ddd54, "__dev_kfree_skb_irq" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x63616516, "netif_rx" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x21d3b421, "__dynamic_netdev_dbg" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x75a7763, "mii_ethtool_set_link_ksettings" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xcdb386fa, "mii_ethtool_get_link_ksettings" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0xad263612, "consume_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc5850110, "printk" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc21596aa, "register_netdev" },
	{ 0x5c4e734e, "pci_iomap" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x27dd129b, "pcim_enable_device" },
	{ 0x5792f848, "strlcpy" },
	{ 0x3879f32d, "mii_nway_restart" },
	{ 0x942296a4, "mii_link_ok" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x3bffcc92, "pci_iounmap" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0xe484e35f, "ioread32" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mii");

MODULE_ALIAS("pci:v00001050d00000840sv*sd00008153bc*sc*i*");
MODULE_ALIAS("pci:v00001050d00000840sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011F6d00002011sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "8625B7CF56631348D7AB34E");
