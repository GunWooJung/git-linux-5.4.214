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
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x37b5ff04, "p54_register_common" },
	{ 0x6d0373b2, "p54_read_eeprom" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xe2569725, "device_release_driver" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0x30faccb7, "p54_parse_firmware" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xc1d7d8bf, "dma_direct_sync_single_for_device" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0x3bd23fd8, "dma_direct_sync_single_for_cpu" },
	{ 0xd5cf5d35, "p54_rx" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xa6a40b7a, "__dev_kfree_skb_any" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0x23ff4bea, "p54_free_skb" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x8423aab5, "pci_dev_put" },
	{ 0xaf7ad1b4, "request_firmware_nowait" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x14683188, "p54_init_common" },
	{ 0x928d7386, "pci_write_config_byte" },
	{ 0xe549079f, "pci_try_set_mwi" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0xd522f41c, "pci_dev_get" },
	{ 0x29361773, "complete" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x520c7ff4, "p54_free_common" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x5c9109de, "release_firmware" },
	{ 0x7640d350, "p54_unregister_common" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x200dc428, "pci_save_state" },
	{ 0x74c790d2, "pci_set_power_state" },
	{ 0xa0e4e172, "pci_reenable_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "p54common");

MODULE_ALIAS("pci:v00001260d00003890sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B7d00006001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001260d00003877sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001260d00003886sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001260d0000FFFFsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "D179CB8798867FB37DB4691");
