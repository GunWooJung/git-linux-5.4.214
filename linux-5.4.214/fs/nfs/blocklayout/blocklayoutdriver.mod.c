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
	{ 0xebbcef82, "pnfs_unregister_layoutdriver" },
	{ 0xa52ae5eb, "alloc_pages_current" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x9d2a922, "pnfs_generic_pg_init_write" },
	{ 0x442f5afa, "fs_bio_set" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xaf5bf6ef, "nfs_debug" },
	{ 0x274896ad, "bio_alloc_bioset" },
	{ 0x82de01e, "__put_devmap_managed_page" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7c9722ba, "nfs_dreq_bytes_left" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xd94ac448, "rpc_unlink" },
	{ 0xe00eba71, "pnfs_ld_write_done" },
	{ 0xd3adbce7, "pnfs_error_mark_layout_for_return" },
	{ 0x561501a1, "dput" },
	{ 0x42821dff, "nfs4_delete_deviceid" },
	{ 0xc3a2be67, "nfs_net_id" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x1fcc0567, "nfs4_mark_deviceid_unavailable" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x1b3ef1de, "rpc_mkpipe_data" },
	{ 0xef3044e2, "rpc_mkpipe_dentry" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe68493f0, "pnfs_generic_pg_test" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xece784c2, "rb_first" },
	{ 0x132836f3, "rpc_get_sb_net" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0xd8bee73a, "pnfs_generic_pg_cleanup" },
	{ 0xe4e87ca2, "pnfs_generic_sync" },
	{ 0xfb578fc5, "memset" },
	{ 0x4d3ac866, "xdr_init_decode_pages" },
	{ 0xaccf54a4, "rpc_queue_upcall" },
	{ 0xc21708cd, "unregister_pernet_subsys" },
	{ 0xd38cd261, "__default_kernel_pte_mask" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x4fa8bed9, "bio_add_page" },
	{ 0xe77aefa3, "nfs4_find_get_deviceid" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x494eca78, "blkdev_get_by_path" },
	{ 0xc5341854, "nfs_pageio_reset_write_mds" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xb0835132, "rpc_d_lookup_sb" },
	{ 0x1ad5f958, "blkdev_get_by_dev" },
	{ 0xa239ac16, "bio_put" },
	{ 0x2c96478a, "nfs4_put_deviceid_node" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdf46d4f1, "module_put" },
	{ 0xdbb80f, "rpc_pipe_generic_upcall" },
	{ 0xbb440ada, "submit_bio" },
	{ 0xf2215f74, "blk_finish_plug" },
	{ 0x387e1639, "rpc_pipefs_notifier_register" },
	{ 0x7ea3fb3a, "__free_pages" },
	{ 0x9c9cc8f0, "rpc_destroy_pipe_data" },
	{ 0x65e83bab, "blkdev_put" },
	{ 0xf82ec573, "rb_prev" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x1709a80e, "register_pernet_subsys" },
	{ 0xb5187aa2, "rpc_put_sb_net" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9961f326, "pnfs_generic_pg_readpages" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x65994f1, "xdr_encode_opaque_fixed" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xe5919cb1, "xdr_encode_opaque" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x243f39d9, "page_cache_next_miss" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xadee368e, "pnfs_generic_pg_writepages" },
	{ 0x7812c047, "__vmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xce471a0f, "pnfs_generic_pg_init_read" },
	{ 0xca9360b5, "rb_next" },
	{ 0xb51a3724, "rpc_pipefs_notifier_unregister" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x4ed2c05a, "xdr_inline_decode" },
	{ 0x3e95082d, "vmalloc_to_page" },
	{ 0xccaf726, "nfs_pageio_reset_read_mds" },
	{ 0x317571cd, "nfs4_init_deviceid_node" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x45e80acb, "pnfs_set_lo_fail" },
	{ 0x7a9b37e8, "blk_start_plug" },
	{ 0x726f45fb, "xdr_set_scratch_buffer" },
	{ 0x618efd96, "pnfs_ld_read_done" },
	{ 0x75942744, "__put_page" },
	{ 0x6d71399f, "try_module_get" },
	{ 0x978bd171, "pnfs_register_layoutdriver" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x59f1c282, "bio_associate_blkg" },
	{ 0x8a35b432, "sme_me_mask" },
};

MODULE_INFO(depends, "nfsv4,sunrpc,nfs");


MODULE_INFO(srcversion, "131139394D0AA9F9D6CF3C4");
