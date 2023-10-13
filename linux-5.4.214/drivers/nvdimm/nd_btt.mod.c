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
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x27f08ec8, "blk_cleanup_queue" },
	{ 0x7f3966fa, "debugfs_create_dir" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x1fff58f3, "blk_queue_max_hw_sectors" },
	{ 0x47daa60, "nd_btt_version" },
	{ 0xd665786b, "badblocks_check" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x4b434101, "generic_end_io_acct" },
	{ 0x56470118, "__warn_printk" },
	{ 0x4ee3bd09, "nd_integrity_init" },
	{ 0x1d41b2ec, "nvdimm_namespace_capacity" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xe8830b36, "debugfs_create_x32" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x24977d49, "revalidate_disk" },
	{ 0x5b1c5c13, "debugfs_remove_recursive" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x2f61bb6a, "__alloc_disk_node" },
	{ 0x581487f9, "nvdimm_namespace_disk_name" },
	{ 0x57d403e2, "debugfs_create_u32" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x3aab1a06, "nd_region_acquire_lane" },
	{ 0x60c75e05, "blk_alloc_queue" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x68f5b592, "to_nd_btt" },
	{ 0x612bfd89, "errno_to_blk_status" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x9f8af909, "del_gendisk" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x1bcc82bb, "generic_start_io_acct" },
	{ 0x45df68cb, "nd_region_release_lane" },
	{ 0xa6191095, "bio_endio" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x8b837ff5, "nd_dev_to_uuid" },
	{ 0x807ef98c, "blk_queue_flag_set" },
	{ 0x165f438e, "blk_queue_make_request" },
	{ 0xcb2a3167, "debugfs_create_x64" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x1b2356e5, "put_disk" },
	{ 0x815f2897, "empty_zero_page" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xecadd7c7, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xa0e8a1a4, "nd_btt_arena_is_valid" },
	{ 0x499f0ecf, "nd_sb_checksum" },
	{ 0x37a0cba, "kfree" },
	{ 0xf311784d, "to_nd_region" },
	{ 0xe8febb33, "debugfs_create_u16" },
	{ 0xbcd4149c, "nvdimm_revalidate_disk" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc9c9fe9a, "device_add_disk" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x62104b22, "blk_queue_logical_block_size" },
	{ 0x396ac4b1, "page_endio" },
	{ 0x16b63d0c, "bio_integrity_prep" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F2605550209986A9CB35631");
