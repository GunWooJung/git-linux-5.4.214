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
	{ 0x473e7988, "eth_validate_addr" },
	{ 0xc7a6ead9, "ethtool_op_get_link" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xe484e35f, "ioread32" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x8265cfb8, "__dma_request_channel" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x63616516, "netif_rx" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x37a0cba, "kfree" },
	{ 0x70ed50a, "dma_release_channel" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc1d7d8bf, "dma_direct_sync_single_for_device" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x69acdf38, "memcpy" },
	{ 0xad263612, "consume_skb" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc5850110, "printk" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xf10de535, "ioread8" },
	{ 0xc21596aa, "register_netdev" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x7e73a43b, "platform_get_irq" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
	{ 0x85bd1608, "__request_region" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xc5534d64, "ioread16" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x848d372e, "iowrite8" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0x2816d12d, "free_netdev" },
	{ 0xedc03953, "iounmap" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0xd072dc20, "platform_get_resource" },
	{ 0x21d3b421, "__dynamic_netdev_dbg" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "CD82FDD9EC56A08E18C2D2E");
