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
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x92a881bb, "kmem_cache_destroy" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x87b013c, "drop_nlink" },
	{ 0x53b954a2, "up_read" },
	{ 0x91fc7183, "generic_file_llseek" },
	{ 0xf97d7de2, "register_sysctl_table" },
	{ 0x517e23fc, "user_path_at_empty" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x87bed25c, "__remove_inode_hash" },
	{ 0x754d539c, "strlen" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0x61390934, "filemap_write_and_wait_range" },
	{ 0x2657f4bc, "iget5_locked" },
	{ 0xc1d8cfaf, "__fdget" },
	{ 0xe0c58509, "kill_anon_super" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xa8181adf, "proc_dointvec" },
	{ 0x4882e3f4, "is_bad_inode" },
	{ 0x9596672c, "touch_atime" },
	{ 0x561501a1, "dput" },
	{ 0x14e23ddd, "device_destroy" },
	{ 0xbce3803, "__register_chrdev" },
	{ 0xd5973e1f, "inc_nlink" },
	{ 0xea7a2654, "d_find_alias" },
	{ 0xd4ce891e, "init_user_ns" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xd92b5797, "vfs_fsync" },
	{ 0x93864551, "generic_read_dir" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xeca6e27a, "super_setup_bdi" },
	{ 0xbd4e4494, "mount_nodev" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x668b19a1, "down_read" },
	{ 0x132d1553, "make_kgid" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x177d7d58, "__insert_inode_hash" },
	{ 0x6a5c8f69, "kernel_read" },
	{ 0x16d93d4d, "vfs_iter_write" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xa5518745, "from_kuid" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x3edcee5d, "from_kgid" },
	{ 0xb566a6c3, "kmem_cache_free" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xd6e37258, "set_nlink" },
	{ 0x5ae8a115, "noop_llseek" },
	{ 0xd267dbfb, "device_create" },
	{ 0xdadbcc69, "unlock_page" },
	{ 0xce807a25, "up_write" },
	{ 0xc0ac08b0, "shrink_dcache_sb" },
	{ 0x57bc19d2, "down_write" },
	{ 0xca669996, "fput" },
	{ 0x4f2054db, "inode_nohighmem" },
	{ 0xa52ed0cd, "__task_pid_nr_ns" },
	{ 0xc7f1ea69, "ilookup5" },
	{ 0x82e06cc0, "inode_init_once" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7ccefd28, "kmem_cache_alloc" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x63f0b710, "truncate_inode_pages_final" },
	{ 0x8de894fe, "make_kuid" },
	{ 0x6be0d38b, "unregister_sysctl_table" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xfb6af58d, "recalc_sigpending" },
	{ 0xd6e7faf0, "vfs_iter_read" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x8e9bb104, "unlock_new_inode" },
	{ 0xb78388f1, "d_drop" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x252c8c46, "d_prune_aliases" },
	{ 0x8648ffe8, "shrink_dcache_parent" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcef451b4, "path_put" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51624e26, "kmem_cache_create" },
	{ 0x552dad9, "register_filesystem" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x54deb792, "init_pid_ns" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0xd5e16552, "iput" },
	{ 0x37a0cba, "kfree" },
	{ 0x25795352, "page_get_link" },
	{ 0x2d800208, "ihold" },
	{ 0x69acdf38, "memcpy" },
	{ 0xc1a20382, "__sb_end_write" },
	{ 0x7db9305a, "current_time" },
	{ 0xb685e073, "d_splice_alias" },
	{ 0x990ae9bf, "sync_filesystem" },
	{ 0xebd6c021, "fget" },
	{ 0x19710dc3, "__sb_start_write" },
	{ 0xb4b1a06b, "class_destroy" },
	{ 0x913fddba, "d_make_root" },
	{ 0xcb24416c, "task_active_pid_ns" },
	{ 0xffea46b5, "unregister_filesystem" },
	{ 0x24e6f887, "init_special_inode" },
	{ 0x3b0173be, "new_inode" },
	{ 0x237dae65, "generic_file_splice_read" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x5328374d, "__class_create" },
	{ 0xb6c38b29, "clear_inode" },
	{ 0x12c48afd, "d_instantiate" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xbeaf53fd, "clear_nlink" },
	{ 0xd43315ac, "generic_fillattr" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "89FDE8A3C13E815D481AB32");
