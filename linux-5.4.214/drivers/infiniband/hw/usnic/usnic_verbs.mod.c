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
	{ 0xe7750f8, "kobject_put" },
	{ 0x73a5b6a5, "vnic_dev_unregister" },
	{ 0x6b9a57ad, "ib_set_device_ops" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x2491a84f, "kobject_get" },
	{ 0x6d00f69e, "pci_bus_type" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x618b20ef, "iommu_attach_device" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xcc5d22d9, "can_do_mlock" },
	{ 0x53b954a2, "up_read" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x541c669c, "sockfd_lookup" },
	{ 0x7f3966fa, "debugfs_create_dir" },
	{ 0x349cba85, "strchr" },
	{ 0xe652a222, "ib_device_put" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xc1da4466, "ib_get_eth_speed" },
	{ 0xf68285c0, "register_inetaddr_notifier" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x2b5ad792, "iommu_map" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0xfa690589, "netdev_cmd_to_name" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x87b8798d, "sg_next" },
	{ 0xcba4abe3, "list_sort" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xd0a46a6a, "debugfs_create_file" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x5b1c5c13, "debugfs_remove_recursive" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x2bbe4d4c, "__mmdrop" },
	{ 0x668b19a1, "down_read" },
	{ 0x20b41469, "kobject_create_and_add" },
	{ 0xcf4b6c7d, "ib_dealloc_device" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xfb578fc5, "memset" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x64127b67, "bitmap_find_next_zero_area_off" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xcccf7597, "kobject_init_and_add" },
	{ 0x500c4b70, "vnic_dev_get_res" },
	{ 0x6bdfa283, "iommu_set_fault_handler" },
	{ 0x58ae0794, "vnic_dev_register" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0x925b1648, "ib_query_port" },
	{ 0x67ba7ebf, "debugfs_remove" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x120b336a, "__rb_insert_augmented" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xd827a719, "ib_device_set_netdev" },
	{ 0xd9394fda, "iommu_unmap" },
	{ 0x37d3dd7f, "iommu_domain_alloc" },
	{ 0xe3b49188, "vnic_dev_get_pdev" },
	{ 0x32ee9868, "simple_open" },
	{ 0xed98e7a2, "iommu_domain_free" },
	{ 0xca669996, "fput" },
	{ 0xdfb2b98a, "iommu_capable" },
	{ 0x9d766f4b, "pci_clear_master" },
	{ 0xadc5e491, "iommu_detach_device" },
	{ 0x9e615457, "ib_dispatch_event" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xe93ac29d, "ib_device_get_by_netdev" },
	{ 0xc6cbbc89, "capable" },
	{ 0xa6397a, "iommu_present" },
	{ 0xfe029963, "unregister_inetaddr_notifier" },
	{ 0xb665f56d, "__cachemode2pte_tbl" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa242f6b1, "get_user_pages" },
	{ 0x6aff694d, "ib_register_device" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xb1e65e92, "put_user_pages_dirty_lock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x1a8a180a, "ib_unregister_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xd0d2c533, "_ib_alloc_device" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x8b74ab2, "vnic_dev_get_res_count" },
	{ 0x37a0cba, "kfree" },
	{ 0x82c93f75, "remap_pfn_range" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0xedc03953, "iounmap" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x96848186, "scnprintf" },
	{ 0xca9360b5, "rb_next" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5c4e734e, "pci_iomap" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x551bd071, "__rb_erase_color" },
	{ 0x9155be41, "enic_api_devcmd_proxy_by_index" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "enic,ib_core");

MODULE_ALIAS("pci:v00001137d000000CFsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "A01C70047433526921BCE8D");
