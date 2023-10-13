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
	{ 0x131e5561, "param_ops_charp" },
	{ 0x473e7988, "eth_validate_addr" },
	{ 0x820db7ec, "eth_mac_addr" },
	{ 0x38bd0581, "eisa_driver_unregister" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xfb77cba3, "eisa_driver_register" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x63616516, "netif_rx" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xd712aabe, "pci_write_config_word" },
	{ 0x37a24b11, "pci_read_config_byte" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
	{ 0x85bd1608, "__request_region" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0xc21596aa, "register_netdev" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa916b694, "strnlen" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x9166fada, "strncpy" },
	{ 0x754d539c, "strlen" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x69acdf38, "memcpy" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x56470118, "__warn_printk" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x8e0ddd54, "__dev_kfree_skb_irq" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xc5850110, "printk" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0xad263612, "consume_skb" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x928d7386, "pci_write_config_byte" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("eisa:sDEC4250*");

MODULE_INFO(srcversion, "67AE72085E95EA926A79B9F");
