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
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x2e056e00, "ieee80211_wake_queue" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xc1d7d8bf, "dma_direct_sync_single_for_device" },
	{ 0x2d0b7a3, "ieee80211_tx_status_irqsafe" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x3bd23fd8, "dma_direct_sync_single_for_cpu" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x282e8498, "ieee80211_rx_irqsafe" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x37a24b11, "pci_read_config_byte" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x319010b4, "pci_set_mwi" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0xad263612, "consume_skb" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xe1f1bcd1, "ieee80211_stop_queue" },
	{ 0xace333ca, "ieee80211_free_txskb" },
	{ 0x56470118, "__warn_printk" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xd523d85d, "skb_push" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7ef39823, "ieee80211_hdrlen" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x926d56bd, "ieee80211_register_hw" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xc5850110, "printk" },
	{ 0xff7a0fdf, "eeprom_93cx6_multiread" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x5c4e734e, "pci_iomap" },
	{ 0x12422e18, "ieee80211_alloc_hw_nm" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0xd0c1e622, "pci_read_config_dword" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc7ba3d4e, "dev_printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xe484e35f, "ioread32" },
	{ 0x510d772f, "ieee80211_free_hw" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0x3bffcc92, "pci_iounmap" },
	{ 0x37a0cba, "kfree" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x50827106, "ieee80211_unregister_hw" },
	{ 0x9dc6d8c9, "pci_choose_state" },
	{ 0x200dc428, "pci_save_state" },
	{ 0x921f329, "pci_restore_state" },
	{ 0x74c790d2, "pci_set_power_state" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mac80211,cfg80211,eeprom_93cx6");

MODULE_ALIAS("pci:v000010B7d00006000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001200d00008201sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001317d00008201sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001317d00008211sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "DCD00665E0871037AD4B5A5");
