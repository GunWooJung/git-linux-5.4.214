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
	{ 0xf281bc91, "napi_complete_done" },
	{ 0x8e0ddd54, "__dev_kfree_skb_irq" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xf9e91146, "__napi_schedule" },
	{ 0xa085cc86, "napi_schedule_prep" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xad263612, "consume_skb" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x216cc777, "netdev_err" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0x2899f099, "netif_receive_skb" },
	{ 0x4d59d915, "eth_type_trans" },
	{ 0xc1d7d8bf, "dma_direct_sync_single_for_device" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3bd23fd8, "dma_direct_sync_single_for_cpu" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x23a77175, "napi_disable" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x75a7763, "mii_ethtool_set_link_ksettings" },
	{ 0xcdb386fa, "mii_ethtool_get_link_ksettings" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xc977aafa, "__skb_pad" },
	{ 0x56470118, "__warn_printk" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xc21596aa, "register_netdev" },
	{ 0xc61bacc3, "netif_napi_add" },
	{ 0xc5850110, "printk" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x5c4e734e, "pci_iomap" },
	{ 0xe3a1262e, "alloc_etherdev_mqs" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0xeb1919a4, "netdev_info" },
	{ 0x24d273d1, "add_timer" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xbf35024e, "generic_mii_ioctl" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x5792f848, "strlcpy" },
	{ 0x3879f32d, "mii_nway_restart" },
	{ 0x942296a4, "mii_link_ok" },
	{ 0xe8b1a3d2, "netdev_warn" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0x3bffcc92, "pci_iounmap" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0xf10de535, "ioread8" },
	{ 0xc5534d64, "ioread16" },
	{ 0x21d3b421, "__dynamic_netdev_dbg" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0xe484e35f, "ioread32" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mii");

MODULE_ALIAS("pci:v000010B8d00000005sv00001092sd00000AB4bc*sc*i*");
MODULE_ALIAS("pci:v000010B8d00000005sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B8d00000006sv*sd*bc02sc00i*");

MODULE_INFO(srcversion, "76D8904FDD706A269743E44");
