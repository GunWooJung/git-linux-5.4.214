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
	{ 0x6adf17b3, "irq_chip_ack_parent" },
	{ 0x6f1a95cc, "pci_msi_set_desc" },
	{ 0xa715d2d1, "__vmbus_driver_register" },
	{ 0x90a9d8cc, "hv_is_hyperv_initialized" },
	{ 0xfb921e00, "hvpci_block_ops" },
	{ 0x72fc91c0, "vmbus_driver_unregister" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x4005f38c, "try_wait_for_completion" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x71efd9e1, "vmbus_recvpacket_raw" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x27cdca93, "pci_add_resource" },
	{ 0x47cff70, "pci_bus_add_devices" },
	{ 0x2d397ee6, "pci_bus_assign_resources" },
	{ 0xbe15596, "pci_scan_child_bus" },
	{ 0x44d434d6, "pci_create_root_bus" },
	{ 0x85a6512c, "pci_msi_create_irq_domain" },
	{ 0xc57ca41e, "handle_edge_irq" },
	{ 0x5b0225a7, "x86_vector_domain" },
	{ 0x3cf3d88d, "__irq_domain_alloc_fwnode" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xe554bc72, "vmbus_allocate_mmio" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x8a4832a3, "vmbus_open" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xf09b5d9a, "get_zeroed_page" },
	{ 0x5fbcf226, "irq_domain_get_irq_data" },
	{ 0x8a16935, "pci_remove_root_bus" },
	{ 0x47c5921d, "pci_stop_root_bus" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xb45f757f, "irq_domain_free_fwnode" },
	{ 0xf9e5b422, "irq_domain_remove" },
	{ 0x38a71b7e, "pci_free_resource_list" },
	{ 0xedc03953, "iounmap" },
	{ 0xbcc99da1, "vmbus_close" },
	{ 0x2f37605a, "pci_destroy_slot" },
	{ 0x5790e7a0, "pci_unlock_rescan_remove" },
	{ 0x8423aab5, "pci_dev_put" },
	{ 0x5e2381c7, "pci_stop_and_remove_bus_device" },
	{ 0xddbeeecc, "pci_lock_rescan_remove" },
	{ 0x961509ac, "pci_get_domain_bus_and_slot" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x37a0cba, "kfree" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xb86f74c5, "free_cpumask_var" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0xb9c16f51, "hv_max_vp_index" },
	{ 0x39b52d19, "__bitmap_and" },
	{ 0x211130c1, "alloc_cpumask_var" },
	{ 0x75cad045, "pci_msi_unmask_irq" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0x9bad141d, "hv_hypercall_pg" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xf8386d97, "cpumask_next_and" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x3fae6ab0, "hv_vp_index" },
	{ 0xf56a85c9, "msi_desc_to_pci_dev" },
	{ 0x185c0ce5, "irqd_cfg" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x469d6b8b, "vmbus_sendpacket" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x31e2e77f, "vmbus_free_mmio" },
	{ 0xcd87631a, "pci_msi_mask_irq" },
	{ 0xe51b51fe, "pci_msi_prepare" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x92d9fccf, "pci_create_slot" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x69acdf38, "memcpy" },
	{ 0x29361773, "complete" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hv_vmbus,pci-hyperv-intf");

MODULE_ALIAS("vmbus:1df6c444444400449d52802e27ede19f");

MODULE_INFO(srcversion, "A60BD960F00C60E9EFAC97B");
