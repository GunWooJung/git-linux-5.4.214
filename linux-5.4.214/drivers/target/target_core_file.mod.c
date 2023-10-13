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
	{ 0x5e7ae909, "sbc_attrib_attrs" },
	{ 0xb2bc2fe7, "sbc_get_device_type" },
	{ 0x1ad12840, "target_backend_unregister" },
	{ 0x474f63a6, "transport_backend_register" },
	{ 0x8a9ae7ff, "sbc_get_write_same_sectors" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xb6767c33, "sbc_dif_verify" },
	{ 0x6d7db1c8, "iov_iter_zero" },
	{ 0xd6e7faf0, "vfs_iter_read" },
	{ 0x16d93d4d, "vfs_iter_write" },
	{ 0x2bf9bc77, "iov_iter_bvec" },
	{ 0x87b8798d, "sg_next" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x6980bfa5, "target_configure_unmap_from_queue" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x3539f11b, "match_strlcpy" },
	{ 0x4e3567f7, "match_int" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xacf4d843, "match_strdup" },
	{ 0x44e9a829, "match_token" },
	{ 0x85df9b6c, "strsep" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x33a997dd, "vfs_fsync_range" },
	{ 0x37a0cba, "kfree" },
	{ 0xfced7f24, "target_complete_cmd" },
	{ 0x6d6b9626, "blkdev_issue_discard" },
	{ 0x48c48470, "target_to_linux_sector" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xc86b6619, "sbc_parse_cdb" },
	{ 0xdd887c35, "filp_open" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x999e8297, "vfree" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xfb578fc5, "memset" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x541932b5, "kernel_write" },
	{ 0xaef28232, "filp_close" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "target_core_mod");


MODULE_INFO(srcversion, "B27B0459F288EEBD3748221");
