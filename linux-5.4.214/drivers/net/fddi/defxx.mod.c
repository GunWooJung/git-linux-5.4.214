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
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x38bd0581, "eisa_driver_unregister" },
	{ 0xfb77cba3, "eisa_driver_register" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xd523d85d, "skb_push" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x63616516, "netif_rx" },
	{ 0x5e5a7358, "fddi_type_trans" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x3bd23fd8, "dma_direct_sync_single_for_cpu" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x8e0ddd54, "__dev_kfree_skb_irq" },
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
	{ 0xe7a7a03f, "get_device" },
	{ 0x928d7386, "pci_write_config_byte" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x37a24b11, "pci_read_config_byte" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0xc21596aa, "register_netdev" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0xc5850110, "printk" },
	{ 0x85bd1608, "__request_region" },
	{ 0xf42ca7f1, "alloc_fddidev" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0xad263612, "consume_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x8e17faf3, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0xfcc73aec, "eisa_bus_type" },
	{ 0x6d00f69e, "pci_bus_type" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("eisa:sDEC3001*");
MODULE_ALIAS("eisa:sDEC3002*");
MODULE_ALIAS("eisa:sDEC3003*");
MODULE_ALIAS("eisa:sDEC3004*");
MODULE_ALIAS("pci:v00001011d0000000Fsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "6CB544E86EC0421E44120D0");
