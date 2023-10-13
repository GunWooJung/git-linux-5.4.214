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
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x63616516, "netif_rx" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x8e0ddd54, "__dev_kfree_skb_irq" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0xad263612, "consume_skb" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xc21596aa, "register_netdev" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5c9109de, "release_firmware" },
	{ 0x80500894, "request_firmware" },
	{ 0xfb578fc5, "memset" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd712aabe, "pci_write_config_word" },
	{ 0x928d7386, "pci_write_config_byte" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x37a24b11, "pci_read_config_byte" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x5792f848, "strlcpy" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0xc5850110, "printk" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xedc03953, "iounmap" },
	{ 0x37a0cba, "kfree" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v000012AEd00000001sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v000012AEd00000002sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v000010B7d00000001sv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00001385d0000620Asv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00001385d0000630Asv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v00001011d0000001Asv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v000012AEd000000FAsv*sd*bc02sc00i*");
MODULE_ALIAS("pci:v000010A9d00000009sv*sd*bc02sc00i*");

MODULE_INFO(srcversion, "9403E74318F8CF10F4CD8D0");
