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
	{ 0x68a41536, "param_ops_bool" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x981f5dd3, "usb_gadget_udc_reset" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xbc477a2, "irq_set_irq_type" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xe6e46e97, "usb_add_gadget_udc" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x5dfee392, "dma_pool_create" },
	{ 0xe549079f, "pci_try_set_mwi" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0xa0dd6d5a, "pci_enable_msi" },
	{ 0xef3fd222, "gpiod_to_irq" },
	{ 0xa35e10d1, "gpiod_direction_input" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x4117e0fc, "pcim_iomap_table" },
	{ 0x5f130ba8, "pcim_iomap_regions" },
	{ 0x27dd129b, "pcim_enable_device" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xf0979a46, "usb_gadget_giveback_request" },
	{ 0x69acdf38, "memcpy" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xc5850110, "printk" },
	{ 0xfe990052, "gpio_free" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0xb3090fe7, "usb_del_gadget_udc" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x37a0cba, "kfree" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x4a2315f5, "usb_ep_set_maxpacket_limit" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xfe88309f, "gpiod_get_raw_value" },
	{ 0xf37d2c0b, "gpio_to_desc" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xe484e35f, "ioread32" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "udc-core");

MODULE_ALIAS("pci:v00008086d00000939sv*sd*bc0Csc03iFE*");
MODULE_ALIAS("pci:v00008086d00008808sv*sd*bc0Csc03iFE*");
MODULE_ALIAS("pci:v000010DBd0000801Dsv*sd*bc0Csc03iFE*");
MODULE_ALIAS("pci:v000010DBd00008808sv*sd*bc0Csc03iFE*");

MODULE_INFO(srcversion, "AF7810F8D7E28C5C647B439");
