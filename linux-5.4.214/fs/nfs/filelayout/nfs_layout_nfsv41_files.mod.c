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
	{ 0x1f9f5ff9, "nfs4_schedule_session_recovery" },
	{ 0xa52ae5eb, "alloc_pages_current" },
	{ 0xab55b43a, "nfs_request_add_commit_list" },
	{ 0x76886c17, "pnfs_nfs_generic_sync" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xaf5bf6ef, "nfs_debug" },
	{ 0x7fa8e416, "nfs4_pnfs_ds_connect" },
	{ 0xbcdf1389, "pnfs_generic_clear_request_commit" },
	{ 0xf8a58707, "nfs4_setup_sequence" },
	{ 0x9b6c4f2d, "nfs_init_cinfo" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x5c9c4905, "nfs_initiate_commit" },
	{ 0xd3adbce7, "pnfs_error_mark_layout_for_return" },
	{ 0xdb1a1178, "nfs4_pnfs_ds_put" },
	{ 0x1fcc0567, "nfs4_mark_deviceid_unavailable" },
	{ 0xdf05942f, "__tracepoint_nfs4_pnfs_commit_ds" },
	{ 0xcc845fe9, "nfs4_decode_mp_ds_addr" },
	{ 0x6c3f136a, "nfs_initiate_pgio" },
	{ 0x5ee65ab1, "nfs4_set_rw_stateid" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xa926fcd4, "pnfs_generic_commit_pagelist" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xaa2f3da1, "pnfs_generic_recover_commit_reqs" },
	{ 0xe68493f0, "pnfs_generic_pg_test" },
	{ 0xf7453dc1, "pnfs_update_layout" },
	{ 0x93fc5d53, "rpc_exit" },
	{ 0xd8bee73a, "pnfs_generic_pg_cleanup" },
	{ 0xd0270b6e, "pnfs_generic_write_commit_done" },
	{ 0x155cddf1, "rpc_delay" },
	{ 0x4d3ac866, "xdr_init_decode_pages" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xc5850110, "printk" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xe77aefa3, "nfs4_find_get_deviceid" },
	{ 0x12614938, "nfs4_find_or_create_ds_client" },
	{ 0xc5341854, "nfs_pageio_reset_write_mds" },
	{ 0x33163928, "pnfs_layout_mark_request_commit" },
	{ 0x83f20e5, "pnfs_destroy_layout" },
	{ 0x5c863a5, "nfs4_pnfs_ds_add" },
	{ 0xfb328cbc, "pnfs_put_lseg" },
	{ 0x2c96478a, "nfs4_put_deviceid_node" },
	{ 0xed15fb41, "nfs4_print_deviceid" },
	{ 0xb93c6dc3, "pnfs_set_layoutcommit" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xf8d93bb8, "pnfs_generic_scan_commit_lists" },
	{ 0x69d3558d, "pnfs_generic_rw_release" },
	{ 0x7ea3fb3a, "__free_pages" },
	{ 0x6db0e624, "nfs41_sequence_done" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x29d8b113, "nfs4_test_deviceid_unavailable" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xf999267e, "pnfs_generic_commit_release" },
	{ 0x9961f326, "pnfs_generic_pg_readpages" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xf66bdf0c, "pnfs_read_done_resend_to_mds" },
	{ 0xd8ad4748, "rpc_count_iostats" },
	{ 0x136a88ca, "rpc_restart_call_prepare" },
	{ 0xadee368e, "pnfs_generic_pg_writepages" },
	{ 0xa0642671, "pnfs_generic_prepare_to_resend_writes" },
	{ 0x37a0cba, "kfree" },
	{ 0x63960cd8, "pnfs_generic_pg_check_layout" },
	{ 0x69acdf38, "memcpy" },
	{ 0x1cdde079, "__tracepoint_nfs4_pnfs_read" },
	{ 0xbe357fde, "pnfs_write_done_resend_to_mds" },
	{ 0x71bc40e3, "rpc_wake_up" },
	{ 0x4ed2c05a, "xdr_inline_decode" },
	{ 0x163831c3, "__tracepoint_nfs4_pnfs_write" },
	{ 0xccaf726, "nfs_pageio_reset_read_mds" },
	{ 0x317571cd, "nfs4_init_deviceid_node" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x45e80acb, "pnfs_set_lo_fail" },
	{ 0x726f45fb, "xdr_set_scratch_buffer" },
	{ 0xfaa53c06, "nfs_writeback_update_inode" },
	{ 0x978bd171, "pnfs_register_layoutdriver" },
};

MODULE_INFO(depends, "nfsv4,nfs,sunrpc");


MODULE_INFO(srcversion, "7398B9DB19C6B56D669F831");
