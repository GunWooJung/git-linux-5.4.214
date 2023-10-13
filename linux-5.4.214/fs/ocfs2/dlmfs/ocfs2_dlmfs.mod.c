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
	{ 0x92a881bb, "kmem_cache_destroy" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x21c60db8, "__mark_inode_dirty" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x9507547f, "ocfs2_cluster_disconnect" },
	{ 0x178e0fa6, "simple_lookup" },
	{ 0x1027f50f, "generic_delete_inode" },
	{ 0xd9b85ef6, "lockref_get" },
	{ 0xd5973e1f, "inc_nlink" },
	{ 0x76f40744, "ocfs2_dlm_lvb" },
	{ 0x94f526f9, "igrab" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xbd4e4494, "mount_nodev" },
	{ 0x21271fd0, "copy_user_enhanced_fast_string" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x15b4a2e2, "kill_litter_super" },
	{ 0xc2448345, "default_llseek" },
	{ 0xaf7d0f48, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0x1f199d24, "copy_user_generic_string" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb566a6c3, "kmem_cache_free" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xe92bc7da, "setattr_copy" },
	{ 0xc5196999, "ocfs2_dlm_unlock" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x1475f64b, "ocfs2_dlm_lvb_valid" },
	{ 0xaf969565, "ocfs2_dlm_lock" },
	{ 0x82e06cc0, "inode_init_once" },
	{ 0xecdcabd2, "copy_user_generic_unrolled" },
	{ 0xa8d27822, "simple_getattr" },
	{ 0x6a0c3847, "__mlog_printk" },
	{ 0x7ccefd28, "kmem_cache_alloc" },
	{ 0xd344e4ee, "ocfs2_stack_glue_set_max_proto_version" },
	{ 0x27e42c3, "simple_unlink" },
	{ 0x658e845, "simple_dir_operations" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51624e26, "kmem_cache_create" },
	{ 0x552dad9, "register_filesystem" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0xd5e16552, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0x7db9305a, "current_time" },
	{ 0xcafdd707, "ocfs2_dlm_lock_status" },
	{ 0x913fddba, "d_make_root" },
	{ 0x75d519a2, "simple_statfs" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xffea46b5, "unregister_filesystem" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xcfd3fc5, "ocfs2_cluster_connect_agnostic" },
	{ 0x3b0173be, "new_inode" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xb6c38b29, "clear_inode" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x12c48afd, "d_instantiate" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x612d966c, "simple_rmdir" },
	{ 0x8c564d59, "setattr_prepare" },
	{ 0x81af08fb, "inode_init_owner" },
};

MODULE_INFO(depends, "ocfs2_stackglue,ocfs2_nodemanager");


MODULE_INFO(srcversion, "943D15F5D67EAE098A613D8");
