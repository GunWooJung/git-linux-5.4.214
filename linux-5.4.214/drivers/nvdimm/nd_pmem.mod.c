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
	{ 0x5cb99970, "nd_btt_probe" },
	{ 0xd5c0779f, "to_nd_pfn" },
	{ 0x27f08ec8, "blk_cleanup_queue" },
	{ 0x84502a47, "blk_status_to_errno" },
	{ 0x77358855, "iomem_resource" },
	{ 0xc154d5a0, "devm_init_badblocks" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xb0e3bc0b, "badblocks_clear" },
	{ 0x1fff58f3, "blk_queue_max_hw_sectors" },
	{ 0x2c635527, "arch_invalidate_pmem" },
	{ 0x365aeed1, "nvdimm_namespace_common_probe" },
	{ 0xe8af5e45, "is_nd_pfn" },
	{ 0xd665786b, "badblocks_check" },
	{ 0x7242d92, "put_dax" },
	{ 0x4b434101, "generic_end_io_acct" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x8135613, "dax_write_cache" },
	{ 0xaf8c82e3, "devm_nsio_disable" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb4de272a, "devm_memremap_pages" },
	{ 0x3b873206, "kernfs_put" },
	{ 0x5d146d64, "blk_freeze_queue_start" },
	{ 0x6ae49723, "is_nvdimm_sync" },
	{ 0x46491539, "nd_dax_probe" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x24977d49, "revalidate_disk" },
	{ 0x37b8a926, "blk_alloc_queue_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb0d0ed3d, "nd_pfn_probe" },
	{ 0x10fb7162, "nvdimm_flush" },
	{ 0x7b1e697e, "is_nd_btt" },
	{ 0x2f61bb6a, "__alloc_disk_node" },
	{ 0x581487f9, "nvdimm_namespace_disk_name" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x30b45553, "devm_nsio_enable" },
	{ 0xf8f61ebc, "wake_up_var" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x68f5b592, "to_nd_btt" },
	{ 0xf0277ded, "pmem_sector_size" },
	{ 0x612bfd89, "errno_to_blk_status" },
	{ 0x9f8af909, "del_gendisk" },
	{ 0xd4dc58bd, "__nd_driver_register" },
	{ 0x86f434e2, "driver_unregister" },
	{ 0xa6ebd9ef, "dax_attribute_group" },
	{ 0x4845610c, "nvdimm_clear_poison" },
	{ 0x23aa1909, "kernfs_find_and_get_ns" },
	{ 0x5f6f1e9e, "dax_get_private" },
	{ 0x328e3354, "__memcpy_flushcache" },
	{ 0xa87fbe97, "_copy_to_iter_mcsafe" },
	{ 0x1bcc82bb, "generic_start_io_acct" },
	{ 0xa6191095, "bio_endio" },
	{ 0xda15e04e, "pmem_should_map_pages" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x1377bf1a, "nvdimm_has_flush" },
	{ 0x33560c9e, "devm_add_action" },
	{ 0xcd3eddef, "__generic_fsdax_supported" },
	{ 0x1e49de5d, "nvdimm_namespace_detach_btt" },
	{ 0x807ef98c, "blk_queue_flag_set" },
	{ 0x165f438e, "blk_queue_make_request" },
	{ 0xd63402fa, "nvdimm_badblocks_populate" },
	{ 0xd107bff3, "blk_queue_physical_block_size" },
	{ 0xe3361259, "nvdimm_namespace_attach_btt" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x74a57e9a, "nvdimm_setup_pfn" },
	{ 0xfad9c827, "kill_dax" },
	{ 0x1b2356e5, "put_disk" },
	{ 0xc7c073b7, "__devm_request_region" },
	{ 0xa285feb, "_copy_from_iter_flushcache" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4753da3f, "kernfs_notify" },
	{ 0xaecba89, "alloc_dax" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x833c3313, "__memcpy_mcsafe" },
	{ 0xb6adb12a, "blk_queue_write_cache" },
	{ 0x69acdf38, "memcpy" },
	{ 0x99c011d8, "mcsafe_key" },
	{ 0xf311784d, "to_nd_region" },
	{ 0x91607d95, "set_memory_wb" },
	{ 0xbcd4149c, "nvdimm_revalidate_disk" },
	{ 0xc9c9fe9a, "device_add_disk" },
	{ 0x1bd20797, "devm_memremap" },
	{ 0xe2a0c87d, "nvdimm_has_cache" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x62104b22, "blk_queue_logical_block_size" },
	{ 0x396ac4b1, "page_endio" },
};

MODULE_INFO(depends, "nd_btt");


MODULE_INFO(srcversion, "45A3C8088DE2EAEB49FDB2F");
