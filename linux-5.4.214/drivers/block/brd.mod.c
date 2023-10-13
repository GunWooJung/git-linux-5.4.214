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
	{ 0xc371bb96, "param_ops_ulong" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x5c4265f6, "blk_unregister_region" },
	{ 0x9f8af909, "del_gendisk" },
	{ 0xb5a459dc, "unregister_blkdev" },
	{ 0xc352bff6, "blk_register_region" },
	{ 0xc5850110, "printk" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x71a50dbc, "register_blkdev" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x56470118, "__warn_printk" },
	{ 0xa6191095, "bio_endio" },
	{ 0x396ac4b1, "page_endio" },
	{ 0xfb578fc5, "memset" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xaf7d0f48, "current_task" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xc9c9fe9a, "device_add_disk" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xd9efd73d, "get_disk_and_module" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3201e4c2, "blk_queue_flag_clear" },
	{ 0x807ef98c, "blk_queue_flag_set" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2f61bb6a, "__alloc_disk_node" },
	{ 0xd107bff3, "blk_queue_physical_block_size" },
	{ 0x1fff58f3, "blk_queue_max_hw_sectors" },
	{ 0x165f438e, "blk_queue_make_request" },
	{ 0x60c75e05, "blk_alloc_queue" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x6fbc6a00, "radix_tree_insert" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x32ce3777, "radix_tree_preload" },
	{ 0xa52ae5eb, "alloc_pages_current" },
	{ 0x70ad75fb, "radix_tree_lookup" },
	{ 0x37a0cba, "kfree" },
	{ 0x27f08ec8, "blk_cleanup_queue" },
	{ 0x1b2356e5, "put_disk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x7ea3fb3a, "__free_pages" },
	{ 0x4e6e4b41, "radix_tree_delete" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x6b27729b, "radix_tree_gang_lookup" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "2C62A31351CEC557C8F228C");
