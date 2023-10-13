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
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x56470118, "__warn_printk" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x28fe4c90, "pci_disable_msi" },
	{ 0x3656c243, "i2c_add_adapter" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0xa0dd6d5a, "pci_enable_msi" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x9ed02ae3, "dmam_alloc_attrs" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x46c5e2e4, "pcim_iomap" },
	{ 0xb23de490, "pci_request_region" },
	{ 0xeab6f4c4, "acpi_check_resource_conflict" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x27dd129b, "pcim_enable_device" },
	{ 0x714da7f6, "set_primary_fwnode" },
	{ 0x15cb5620, "is_acpi_device_node" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x29361773, "complete" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x3afc0e60, "i2c_del_adapter" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00008086d00000C59sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000C5Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000018ACsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000019ACsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001F15sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "4EE3A88B82EA0ED2661B92A");
