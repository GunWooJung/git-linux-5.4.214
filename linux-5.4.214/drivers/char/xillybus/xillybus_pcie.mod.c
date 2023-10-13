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
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x56470118, "__warn_printk" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x33560c9e, "devm_add_action" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x1800ba56, "xillybus_endpoint_discovery" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x25978d50, "xillybus_isr" },
	{ 0xa0dd6d5a, "pci_enable_msi" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x4117e0fc, "pcim_iomap_table" },
	{ 0x5f130ba8, "pcim_iomap_regions" },
	{ 0x87bd903f, "pci_disable_link_state" },
	{ 0x27dd129b, "pcim_enable_device" },
	{ 0x39c1b6bb, "xillybus_init_endpoint" },
	{ 0x3bd23fd8, "dma_direct_sync_single_for_cpu" },
	{ 0xc1d7d8bf, "dma_direct_sync_single_for_device" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa265da1a, "xillybus_endpoint_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "xillybus_core");

MODULE_ALIAS("pci:v000010EEd0000EBEBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001172d0000EBEBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011AAd0000EBEBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001204d0000EBEBsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "6A67F57B7FAB0584DBAA527");
