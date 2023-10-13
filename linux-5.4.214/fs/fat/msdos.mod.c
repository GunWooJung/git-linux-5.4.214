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
	{ 0x535d6058, "fat_detach" },
	{ 0x87b013c, "drop_nlink" },
	{ 0x8d53ad17, "mark_buffer_dirty_inode" },
	{ 0x21c60db8, "__mark_inode_dirty" },
	{ 0x349cba85, "strchr" },
	{ 0x5966eefd, "fat_flush_inodes" },
	{ 0xa0cce491, "fat_truncate_time" },
	{ 0xd5973e1f, "inc_nlink" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xaa5168ae, "mount_bdev" },
	{ 0xba75266e, "fat_sync_inode" },
	{ 0x95ab886a, "fat_add_entries" },
	{ 0xa8ada94e, "fat_remove_entries" },
	{ 0x2e3d3fd6, "fat_alloc_new_dir" },
	{ 0x299f8d2b, "fat_fill_super" },
	{ 0xab4d8187, "fat_build_inode" },
	{ 0x7983d345, "fat_update_time" },
	{ 0xfe6ba602, "fat_attach" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xd6e37258, "set_nlink" },
	{ 0xb487ff58, "sync_dirty_buffer" },
	{ 0x8e7172da, "fat_getattr" },
	{ 0xf96a1685, "__brelse" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x70b7a2cc, "kill_block_super" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd6eaaea1, "full_name_hash" },
	{ 0x390a4289, "fat_scan" },
	{ 0x552dad9, "register_filesystem" },
	{ 0x3a2a2163, "__fat_fs_error" },
	{ 0x7db9305a, "current_time" },
	{ 0xb685e073, "d_splice_alias" },
	{ 0x1eee8142, "fat_setattr" },
	{ 0xb512867b, "fat_free_clusters" },
	{ 0x4aec6b7, "fat_get_dotdot_entry" },
	{ 0xffea46b5, "unregister_filesystem" },
	{ 0x1c60876f, "fat_time_unix2fat" },
	{ 0xa148b201, "fat_dir_empty" },
	{ 0x12c48afd, "d_instantiate" },
	{ 0xbeaf53fd, "clear_nlink" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D01692F7EFF184FED923163");
