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
	{ 0x15b4a2e2, "kill_litter_super" },
	{ 0x5ae8a115, "noop_llseek" },
	{ 0xc2448345, "default_llseek" },
	{ 0x75d519a2, "simple_statfs" },
	{ 0xffea46b5, "unregister_filesystem" },
	{ 0x9d6c8e9a, "unregister_binfmt" },
	{ 0x7e115896, "__register_binfmt" },
	{ 0x552dad9, "register_filesystem" },
	{ 0xd5e16552, "iput" },
	{ 0xc5850110, "printk" },
	{ 0x12c48afd, "d_instantiate" },
	{ 0x3c9a7104, "simple_pin_fs" },
	{ 0x7db9305a, "current_time" },
	{ 0xe953b21f, "get_next_ino" },
	{ 0x3b0173be, "new_inode" },
	{ 0xf57d3ba0, "lookup_one_len" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x64bbc288, "string_unescape" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x349cba85, "strchr" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x754d539c, "strlen" },
	{ 0xd45cc6ca, "bin2hex" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xa916b694, "strnlen" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xcab6ad7c, "simple_release_fs" },
	{ 0xb78388f1, "d_drop" },
	{ 0x87b013c, "drop_nlink" },
	{ 0x5a245f6d, "_raw_write_lock" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xaef28232, "filp_close" },
	{ 0x37a0cba, "kfree" },
	{ 0xb6c38b29, "clear_inode" },
	{ 0x58cb6dec, "simple_fill_super" },
	{ 0xb65ab2cc, "get_tree_single" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf2380b3, "prepare_binprm" },
	{ 0x3af3d02e, "open_exec" },
	{ 0xa98496c3, "would_dump" },
	{ 0x12b87679, "fd_install" },
	{ 0xa843805a, "get_unused_fd_flags" },
	{ 0x3b782e7a, "__close_fd" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x1a34344b, "remove_arg_zero" },
	{ 0x561501a1, "dput" },
	{ 0x31f7a088, "search_binary_handler" },
	{ 0x6a5c8f69, "kernel_read" },
	{ 0xdcec45e5, "dentry_open" },
	{ 0xfad94b7f, "bprm_change_interp" },
	{ 0x812723f1, "copy_strings_kernel" },
	{ 0xca669996, "fput" },
	{ 0xd9b85ef6, "lockref_get" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x9f984513, "strrchr" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0x11089ac7, "_ctype" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "73A016D7E06D6ABA269D6BE");
