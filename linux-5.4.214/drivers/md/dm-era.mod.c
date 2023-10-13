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
	{ 0x7551b46e, "dm_tm_open_with_sm" },
	{ 0x87c934be, "dm_tm_inc" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x48e323be, "dm_bm_unlock" },
	{ 0x49081644, "dm_btree_remove" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xa1f8d155, "dm_get_device" },
	{ 0x23ebd5fb, "dm_bitset_set_bit" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x73552eb3, "blk_limits_io_opt" },
	{ 0x688d422d, "dm_bm_block_size" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x88295b96, "dm_tm_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x60f968b2, "dm_register_target" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xcbd2301, "blk_limits_io_min" },
	{ 0xd163cade, "dm_tm_commit" },
	{ 0x63b0c22d, "dm_bitset_flush" },
	{ 0x2417c5c4, "dm_btree_empty" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x97263968, "dm_bitset_resize" },
	{ 0x36b84cda, "dm_array_del" },
	{ 0xfb578fc5, "memset" },
	{ 0x4740c60c, "dm_set_target_max_io_len" },
	{ 0x4f477261, "dm_bm_checksum" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xa2ea5542, "dm_bitset_del" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x72289260, "dm_block_manager_destroy" },
	{ 0x9e98460e, "dm_bitset_empty" },
	{ 0x378180d9, "dm_unregister_target" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x48d1c7dc, "dm_btree_find_lowest_key" },
	{ 0xb36102c, "dm_array_empty" },
	{ 0x5375ca71, "dm_bm_write_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4f556428, "generic_make_request" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x4557b425, "dm_bitset_test_bit" },
	{ 0x16af9071, "dm_array_set_value" },
	{ 0xa6191095, "bio_endio" },
	{ 0x7ade1071, "dm_tm_destroy" },
	{ 0x7485935a, "dm_btree_lookup" },
	{ 0xc248bde2, "dm_disk_bitset_init" },
	{ 0x30c37cc0, "dm_bm_write_lock_zero" },
	{ 0xf2215f74, "blk_finish_plug" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xb25f6bc, "dm_array_resize" },
	{ 0x5cf0d0bb, "dm_tm_create_with_sm" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7b6b3af5, "dm_bm_read_lock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x54f69d, "dm_tm_pre_commit" },
	{ 0x5475ba9e, "dm_block_location" },
	{ 0x37a0cba, "kfree" },
	{ 0x932a6ffc, "dm_tm_shadow_block" },
	{ 0x3a797d19, "dm_btree_del" },
	{ 0x96848186, "scnprintf" },
	{ 0x172b3519, "dm_block_manager_create" },
	{ 0xfed2e000, "dm_put_device" },
	{ 0x1e3f728d, "dm_block_data" },
	{ 0x9290e07a, "dm_tm_read_lock" },
	{ 0x6af8a872, "dm_array_info_init" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0xe198232, "dm_btree_insert" },
	{ 0xb1425b32, "dm_table_add_target_callbacks" },
	{ 0xa38602cd, "drain_workqueue" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x7a9b37e8, "blk_start_plug" },
	{ 0x59f1c282, "bio_associate_blkg" },
};

MODULE_INFO(depends, "dm-persistent-data");


MODULE_INFO(srcversion, "ABD5B4D75D2AF06C054D903");
