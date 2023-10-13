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
	{ 0xc9a9e0c3, "get_acl" },
	{ 0x4e9466e, "forget_cached_acl" },
	{ 0xa52ae5eb, "alloc_pages_current" },
	{ 0xb2f6b30a, "nfs_unlink" },
	{ 0x432c39f1, "nfs_symlink" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xaf5bf6ef, "nfs_debug" },
	{ 0x30c06b7a, "xdr_stream_pos" },
	{ 0xd4c1219c, "nfs_access_set_mask" },
	{ 0x605d616, "nfs_refresh_inode" },
	{ 0x63018b0a, "nfs_close_context" },
	{ 0x3dc65a5d, "nfs_free_client" },
	{ 0x754d539c, "strlen" },
	{ 0x766ac742, "nfs_try_mount" },
	{ 0xee2730b2, "from_kuid_munged" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x240539d0, "nfs_add_or_obtain" },
	{ 0x241f9e63, "posix_acl_access_xattr_handler" },
	{ 0xa7dc47f8, "nfs_permission" },
	{ 0x7ab88a45, "system_freezing_cnt" },
	{ 0x80d44ec, "put_nfs_open_context" },
	{ 0xf09cc34, "schedule_timeout_killable" },
	{ 0x561501a1, "dput" },
	{ 0xba300be6, "nfs_link" },
	{ 0x105a89ce, "rpc_restart_call" },
	{ 0xd4ce891e, "init_user_ns" },
	{ 0xef3f7d92, "nfs_sops" },
	{ 0x4a9156f, "nfs_setattr_update_inode" },
	{ 0x1f23db8c, "nfs_async_iocounter_wait" },
	{ 0xcbb15f60, "unregister_nfs_version" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xff9a4409, "nfs_rmdir" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x8ca8d6b3, "xdr_reserve_space" },
	{ 0xfd7adc4f, "nfs_alloc_fattr" },
	{ 0x7e3c9fe2, "from_kgid_munged" },
	{ 0x132d1553, "make_kgid" },
	{ 0x98b0ece8, "nfs_init_timeout_values" },
	{ 0x155cddf1, "rpc_delay" },
	{ 0xc7b743d, "nfs_fattr_init" },
	{ 0x99d8d83f, "xdr_terminate_string" },
	{ 0xab05e71c, "nfs_setattr" },
	{ 0x976f347e, "nfs_fs_type" },
	{ 0xa728bf45, "rpc_prepare_reply_pages" },
	{ 0xab4c99e1, "rpc_call_sync" },
	{ 0x7851cb9a, "rpc_call_start" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x53963c6, "freezing_slow_path" },
	{ 0xc5850110, "printk" },
	{ 0xe3b868fc, "register_nfs_version" },
	{ 0x9465d2b6, "rpc_bind_new_program" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xf7fbd057, "nfs_zap_acl_cache" },
	{ 0xe0c78485, "nfs_getattr" },
	{ 0xc725fb8, "posix_acl_equiv_mode" },
	{ 0x31a96324, "nfs_invalidate_atime" },
	{ 0x97c59e26, "get_nfs_open_context" },
	{ 0x18387799, "posix_acl_create" },
	{ 0x1cd43e80, "nfsacl_encode" },
	{ 0x85f6b116, "nfs_lookup" },
	{ 0x63c143b2, "nfs_rename" },
	{ 0x84db5bce, "nfs_put_lock_context" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xffedb72b, "nfs_file_operations" },
	{ 0x7ea3fb3a, "__free_pages" },
	{ 0xd5fff4e4, "nfs_get_client" },
	{ 0x8de894fe, "make_kuid" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xeefc9944, "nfs_get_lock_context" },
	{ 0x26530f80, "nfs_revalidate_inode" },
	{ 0xc7bcc561, "nfs_mkdir" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6b476c22, "nfs_create" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x1a809853, "posix_acl_from_mode" },
	{ 0xa524feed, "nfsacl_decode" },
	{ 0xb19ff367, "xdr_read_pages" },
	{ 0xe5919cb1, "xdr_encode_opaque" },
	{ 0x1f2a9970, "rpc_ntop" },
	{ 0x199bb48, "nfs_post_op_update_inode" },
	{ 0x37a0cba, "kfree" },
	{ 0xd27b4db0, "nfs_init_client" },
	{ 0x598ec35, "nfs_create_server" },
	{ 0xe0b89cd, "nfs_mknod" },
	{ 0x2ea047ba, "posix_acl_default_xattr_handler" },
	{ 0xa8abcded, "__tracepoint_nfs_xdr_status" },
	{ 0xeac7a684, "nfs_submount" },
	{ 0x1adb6e8d, "forget_all_cached_acls" },
	{ 0x4ed2c05a, "xdr_inline_decode" },
	{ 0x980bad3f, "nfs_access_zap_cache" },
	{ 0x5911f38c, "xdr_write_pages" },
	{ 0x65c27dbb, "nfs_dentry_operations" },
	{ 0x71805cea, "nfs_alloc_client" },
	{ 0xfaa53c06, "nfs_writeback_update_inode" },
	{ 0xa36a125f, "nlmclnt_proc" },
	{ 0xe914e41e, "strcpy" },
	{ 0x5c99edd0, "nfs_clone_server" },
};

MODULE_INFO(depends, "nfs,sunrpc,nfs_acl,lockd");


MODULE_INFO(srcversion, "C853A66E9B9059C36E8472A");
