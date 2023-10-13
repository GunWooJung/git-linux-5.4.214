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
	{ 0x268455cd, "hdlc_start_xmit" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x63616516, "netif_rx" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x8e0ddd54, "__dev_kfree_skb_irq" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0xeb1919a4, "netdev_info" },
	{ 0xc21596aa, "register_netdev" },
	{ 0x1f0d9e2e, "alloc_hdlcdev" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc5850110, "printk" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x37a0cba, "kfree" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0xedc03953, "iounmap" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x290d4804, "unregister_hdlc_device" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0xad263612, "consume_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xcc3b3c0d, "hdlc_close" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x216cc777, "netdev_err" },
	{ 0x45dd1680, "hdlc_open" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x66f66267, "hdlc_ioctl" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x1000e51, "schedule" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hdlc");

MODULE_ALIAS("pci:v00001176d00000301sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001176d00000302sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001176d00000104sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "995C96DB92004758786E5DF");
