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
	{ 0x87b013c, "drop_nlink" },
	{ 0xbefb1a0e, "put_pid" },
	{ 0x349cba85, "strchr" },
	{ 0x509ab5d7, "get_task_pid" },
	{ 0x754d539c, "strlen" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x3695ec2a, "path_is_mountpoint" },
	{ 0xee2730b2, "from_kuid_munged" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xfa06e85, "pid_vnr" },
	{ 0xe35ed617, "seq_puts" },
	{ 0xd9b85ef6, "lockref_get" },
	{ 0x561501a1, "dput" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x44e9a829, "match_token" },
	{ 0xd5973e1f, "inc_nlink" },
	{ 0xdcec45e5, "dentry_open" },
	{ 0xd4ce891e, "init_user_ns" },
	{ 0xa843805a, "get_unused_fd_flags" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0x7ec78bdd, "rename_lock" },
	{ 0xc8a399bd, "d_add" },
	{ 0x93864551, "generic_read_dir" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xbd4e4494, "mount_nodev" },
	{ 0x5e03e88e, "path_get" },
	{ 0xa87a5804, "may_umount" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7e3c9fe2, "from_kgid_munged" },
	{ 0xfd94814e, "complete_all" },
	{ 0x132d1553, "make_kgid" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x938e2765, "dcache_dir_lseek" },
	{ 0x4b2e0ffe, "misc_register" },
	{ 0xb8e7ce2c, "__put_user_8" },
	{ 0x15b4a2e2, "kill_litter_super" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xaf7d0f48, "current_task" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9166fada, "strncpy" },
	{ 0xd6e37258, "set_nlink" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3b782e7a, "__close_fd" },
	{ 0x5ae8a115, "noop_llseek" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0xa07a37f0, "memchr" },
	{ 0x4e3567f7, "match_int" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xca669996, "fput" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa52ed0cd, "__task_pid_nr_ns" },
	{ 0x8599b7d4, "path_has_submounts" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x8de894fe, "make_kuid" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x6d334118, "__get_user_8" },
	{ 0xfb6af58d, "recalc_sigpending" },
	{ 0xb78388f1, "d_drop" },
	{ 0x2b429bc, "may_umount_tree" },
	{ 0x3f4547a7, "put_unused_fd" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd6eaaea1, "full_name_hash" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xcef451b4, "path_put" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x6731049c, "simple_empty" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x175f3b8f, "dcache_readdir" },
	{ 0x552dad9, "register_filesystem" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x519cd16e, "d_lookup" },
	{ 0x54deb792, "init_pid_ns" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xa563ca13, "find_get_pid" },
	{ 0x560af438, "dcache_dir_open" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0x8f0f5b60, "dcache_dir_close" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0x7a7a22e0, "follow_up" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7db9305a, "current_time" },
	{ 0x12b87679, "fd_install" },
	{ 0xebd6c021, "fget" },
	{ 0x913fddba, "d_make_root" },
	{ 0xf92167cf, "__kernel_write" },
	{ 0x75d519a2, "simple_statfs" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xffea46b5, "unregister_filesystem" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x3b0173be, "new_inode" },
	{ 0x6467b767, "follow_down_one" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xb6c38b29, "clear_inode" },
	{ 0x35775925, "misc_deregister" },
	{ 0xbeaf53fd, "clear_nlink" },
	{ 0xe914e41e, "strcpy" },
	{ 0x16592d1f, "kern_path_mountpoint" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F837A8D53B4A444019D1150");
