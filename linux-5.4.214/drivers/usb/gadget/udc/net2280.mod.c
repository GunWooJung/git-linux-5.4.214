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
	{ 0xcce57a7f, "param_ops_ushort" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x77ae495d, "usb_speed_string" },
	{ 0x981f5dd3, "usb_gadget_udc_reset" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc5f8bce8, "usb_gadget_map_request" },
	{ 0xa0dd6d5a, "pci_enable_msi" },
	{ 0x8f261499, "usb_add_gadget_udc_release" },
	{ 0xe549079f, "pci_try_set_mwi" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x5dfee392, "dma_pool_create" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x85bd1608, "__request_region" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xf0979a46, "usb_gadget_giveback_request" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x710ef7fc, "usb_gadget_unmap_request" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xc5850110, "printk" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x4a2315f5, "usb_ep_set_maxpacket_limit" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x28fe4c90, "pci_disable_msi" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xedc03953, "iounmap" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0xb3090fe7, "usb_del_gadget_udc" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9424a91, "usb_gadget_ep_match_desc" },
	{ 0x9f73829b, "gadget_find_ep_by_name" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "udc-core");

MODULE_ALIAS("pci:v000017CCd00002280sv*sd*bc0Csc03iFE*");
MODULE_ALIAS("pci:v000017CCd00002282sv*sd*bc0Csc03iFE*");
MODULE_ALIAS("pci:v000010B5d00002380sv*sd*bc0Csc03iFE*");
MODULE_ALIAS("pci:v000010B5d00003380sv*sd*bc0Csc03iFE*");
MODULE_ALIAS("pci:v000010B5d00003382sv*sd*bc0Csc03iFE*");

MODULE_INFO(srcversion, "1CDFAB71534FA3F88AA4822");
