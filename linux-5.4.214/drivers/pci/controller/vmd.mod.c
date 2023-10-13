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
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x38a71b7e, "pci_free_resource_list" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3bffcc92, "pci_iounmap" },
	{ 0x5c4e734e, "pci_iomap" },
	{ 0xd0c1e622, "pci_read_config_dword" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xcfe9b0cc, "sysfs_create_link" },
	{ 0x47cff70, "pci_bus_add_devices" },
	{ 0x3e1556f9, "pcie_bus_configure_settings" },
	{ 0xbe051e1, "pci_assign_unassigned_bus_resources" },
	{ 0xbe15596, "pci_scan_child_bus" },
	{ 0x1f67e55a, "add_dma_domain" },
	{ 0x44d434d6, "pci_create_root_bus" },
	{ 0x218e600b, "pci_add_resource_offset" },
	{ 0x27cdca93, "pci_add_resource" },
	{ 0x85a6512c, "pci_msi_create_irq_domain" },
	{ 0x5b0225a7, "x86_vector_domain" },
	{ 0x3cf3d88d, "__irq_domain_alloc_fwnode" },
	{ 0x8181efa4, "pci_find_next_bus" },
	{ 0x565c8b0a, "init_srcu_struct" },
	{ 0xbf27fdc4, "pci_alloc_irq_vectors_affinity" },
	{ 0xc99ba38a, "pci_msix_vec_count" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x46c5e2e4, "pcim_iomap" },
	{ 0x27dd129b, "pcim_enable_device" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xae4eadfa, "irq_domain_set_info" },
	{ 0x14b7c6d0, "handle_untracked_irq" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xf56a85c9, "msi_desc_to_pci_dev" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x309b8cc9, "dma_mmap_attrs" },
	{ 0xcc50368f, "dma_get_sgtable_attrs" },
	{ 0x6dd853a6, "dma_direct_map_page" },
	{ 0xb526d94f, "dma_direct_unmap_page" },
	{ 0x6a9a5a6c, "dma_direct_map_sg" },
	{ 0x94589e9e, "dma_direct_unmap_sg" },
	{ 0x3bd23fd8, "dma_direct_sync_single_for_cpu" },
	{ 0xc1d7d8bf, "dma_direct_sync_single_for_device" },
	{ 0xf0c121a1, "dma_direct_sync_sg_for_cpu" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x318a8467, "dma_direct_sync_sg_for_device" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x14582675, "dma_supported" },
	{ 0x38b5452a, "dma_get_required_mask" },
	{ 0x37a0cba, "kfree" },
	{ 0xf3954f31, "synchronize_srcu" },
	{ 0xb662a539, "irq_get_irq_data" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0xb45f757f, "irq_domain_free_fwnode" },
	{ 0xf9e5b422, "irq_domain_remove" },
	{ 0xe74d782d, "del_dma_domain" },
	{ 0xf47e020f, "cleanup_srcu_struct" },
	{ 0x8a16935, "pci_remove_root_bus" },
	{ 0x47c5921d, "pci_stop_root_bus" },
	{ 0x70f7f79, "sysfs_remove_link" },
	{ 0x200dc428, "pci_save_state" },
	{ 0x7cf7aeda, "devm_free_irq" },
	{ 0x921f329, "pci_restore_state" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x226f7074, "pci_irq_vector" },
	{ 0x72dbaa7, "__srcu_read_unlock" },
	{ 0x7ceaf0d5, "generic_handle_irq" },
	{ 0x33dd9940, "__srcu_read_lock" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00008086d0000201Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000028C0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009A0Bsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "29576FB15DC9F8343DE6F7F");
