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
	{ 0xa24f23d8, "__request_module" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x7f3966fa, "debugfs_create_dir" },
	{ 0x7ee415d5, "single_open" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xc62cb64, "proc_create_single_data" },
	{ 0xa94b8710, "nvmem_register" },
	{ 0x263ed23b, "__x86_indirect_thunk_r12" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x8ce08cc0, "single_release" },
	{ 0xe35ed617, "seq_puts" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x855984bf, "deactivate_locked_super" },
	{ 0xd9b85ef6, "lockref_get" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0xffa827, "sysfs_create_files" },
	{ 0xcbaa4b74, "remove_proc_entry" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x14e23ddd, "device_destroy" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xbce3803, "__register_chrdev" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xd0a46a6a, "debugfs_create_file" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x5b1c5c13, "debugfs_remove_recursive" },
	{ 0x21ba44a5, "seq_read" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xf495631, "lookup_bdev" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0x26f06043, "bdi_alloc_node" },
	{ 0xdeeb6e3e, "device_register" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xc5850110, "printk" },
	{ 0xa191fd37, "class_unregister" },
	{ 0xd0e8300e, "fixed_size_llseek" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xd267dbfb, "device_create" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x5fd264df, "__class_register" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdf46d4f1, "module_put" },
	{ 0xc6cbbc89, "capable" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3fc7bea4, "bdi_put" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x6f395e65, "__module_get" },
	{ 0xdbee0aaf, "sysfs_remove_files" },
	{ 0x3290abba, "logfc" },
	{ 0xda2b5d09, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x69acdf38, "memcpy" },
	{ 0x1c072657, "sget_fc" },
	{ 0x4668125f, "nvmem_unregister" },
	{ 0x5a4e4713, "device_unregister" },
	{ 0x8591d7d5, "ledtrig_mtd_activity" },
	{ 0xcbec6074, "bdi_register" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xdb2d5c16, "dev_set_name" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x20978fb9, "idr_find" },
	{ 0x7f34ad1e, "bdput" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x6d71399f, "try_module_get" },
	{ 0xaf5b0304, "generic_shutdown_super" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "70A4AA21A4391AAAC7C3E4C");
