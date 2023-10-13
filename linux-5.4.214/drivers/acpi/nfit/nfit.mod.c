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
	{ 0x56975ed9, "acpi_bus_register_driver" },
	{ 0xbabd6c0f, "nvdimm_cmd_mask" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xba965e2d, "nd_blk_region_provider_data" },
	{ 0x8d770dda, "nd_blk_region_to_dimm" },
	{ 0x1c58427f, "acpi_remove_notify_handler" },
	{ 0x266b4bf6, "nvdimm_bus_attribute_group" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x77358855, "iomem_resource" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x3854774b, "kstrtoll" },
	{ 0xf6a28554, "region_intersects" },
	{ 0xaf076aec, "nd_fletcher64" },
	{ 0x2c635527, "arch_invalidate_pmem" },
	{ 0x170ddf79, "acpi_install_notify_handler" },
	{ 0xdd18a993, "acpi_check_dsm" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x6609feea, "nvdimm_attribute_group" },
	{ 0x8f2703b7, "wbinvd_on_all_cpus" },
	{ 0xb323e7fb, "nd_blk_region_set_provider_data" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xb8b2b1f7, "mce_register_decode_chain" },
	{ 0x56470118, "__warn_printk" },
	{ 0xaeb5932a, "nvdimm_kobj" },
	{ 0x51c6d653, "nvdimm_pmem_region_create" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0xcba4abe3, "list_sort" },
	{ 0x3b873206, "kernfs_put" },
	{ 0xb89b6e6b, "guid_parse" },
	{ 0x3d1960e2, "acpi_bus_unregister_driver" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x1877ca13, "mce_is_memory_error" },
	{ 0xa3abb611, "nd_cmd_in_size" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x16cdc340, "acpi_get_table" },
	{ 0x261b4cf5, "nd_region_dev" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5271bd11, "nvdimm_bus_register" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xd4755f62, "nvdimm_to_bus" },
	{ 0x5d8eec1a, "nd_numa_attribute_group" },
	{ 0x9583ee49, "nvdimm_in_overwrite" },
	{ 0x10fb7162, "nvdimm_flush" },
	{ 0x5f23e3fa, "insert_resource" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x3aab1a06, "nd_region_acquire_lane" },
	{ 0x8e503554, "nvdimm_provider_data" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xfc3f8e71, "nvdimm_volatile_region_create" },
	{ 0x27a96412, "devm_nvdimm_memremap" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa4d924de, "nd_region_attribute_group" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0xfa297415, "acpi_map_pxm_to_node" },
	{ 0x9cf50f7e, "to_nvdimm_bus_dev" },
	{ 0xfde78bc4, "nvdimm_name" },
	{ 0x94a6e9f2, "nd_blk_memremap_flags" },
	{ 0x23aa1909, "kernfs_find_and_get_ns" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x328e3354, "__memcpy_flushcache" },
	{ 0x7e27b84f, "nvdimm_bus_unregister" },
	{ 0xb501b2df, "nd_cmd_dimm_desc" },
	{ 0xe348e1e2, "nd_mapping_attribute_group" },
	{ 0xe3a53f4c, "sort" },
	{ 0x9ee99b7f, "nd_cmd_out_size" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xca944cd, "devm_kfree" },
	{ 0x45df68cb, "nd_region_release_lane" },
	{ 0xae5a04bb, "acpi_evaluate_dsm" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xa63d3f27, "nd_device_attribute_group" },
	{ 0xb8225a32, "to_nd_desc" },
	{ 0x9975dc22, "acpi_get_handle" },
	{ 0x92b99a33, "acpi_put_table" },
	{ 0xc2c5802, "work_busy" },
	{ 0xb2db2d5, "remove_resource" },
	{ 0x1377bf1a, "nvdimm_has_flush" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x33560c9e, "devm_add_action" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9170e150, "acpi_find_child_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xffcfd7d9, "to_nvdimm_bus" },
	{ 0x4753da3f, "kernfs_notify" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x4b1d94aa, "mce_is_correctable" },
	{ 0x8384647a, "acpi_map_pxm_to_online_node" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xbbd08cb3, "nvdimm_bus_check_dimm_count" },
	{ 0xf311784d, "to_nd_region" },
	{ 0x5bb2e5aa, "__nvdimm_create" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xf2d7d87, "mce_unregister_decode_chain" },
	{ 0x823e2f57, "to_nvdimm" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xa01a8d9b, "nd_cmd_bus_desc" },
	{ 0xc371bb96, "param_ops_ulong" },
	{ 0xa06821bd, "nvdimm_bus_add_badrange" },
	{ 0xf5f35273, "nd_region_provider_data" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x174ef6c2, "mce_usable_address" },
	{ 0xcc868fa, "to_nd_blk_region" },
	{ 0xf8ec8d7c, "nvdimm_region_notify" },
	{ 0xb5264a72, "nvdimm_blk_region_create" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:ACPI0012:*");

MODULE_INFO(srcversion, "D4D59CF4A717CD740B3BFC9");
