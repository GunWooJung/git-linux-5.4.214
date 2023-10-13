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
	{ 0xcf96bf46, "blkdev_issue_zeroout" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x8a9ae7ff, "sbc_get_write_same_sectors" },
	{ 0x6e03f850, "sg_miter_start" },
	{ 0x87b8798d, "sg_next" },
	{ 0x4fa8bed9, "bio_add_page" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xa7d94eb8, "bioset_integrity_create" },
	{ 0x6980bfa5, "target_configure_unmap_from_queue" },
	{ 0x494eca78, "blkdev_get_by_path" },
	{ 0xf6ae341b, "bioset_init" },
	{ 0x3539f11b, "match_strlcpy" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xacf4d843, "match_strdup" },
	{ 0x44e9a829, "match_token" },
	{ 0x85df9b6c, "strsep" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x6017cc7a, "bdevname" },
	{ 0x45e06ec8, "bioset_exit" },
	{ 0x65e83bab, "blkdev_put" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x90c7e35e, "sg_miter_stop" },
	{ 0x110bc0ac, "bio_integrity_add_page" },
	{ 0x64bfff20, "sg_miter_next" },
	{ 0x7ab8465e, "bio_integrity_alloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf2215f74, "blk_finish_plug" },
	{ 0x7a9b37e8, "blk_start_plug" },
	{ 0xbb440ada, "submit_bio" },
	{ 0x442f5afa, "fs_bio_set" },
	{ 0x59f1c282, "bio_associate_blkg" },
	{ 0x274896ad, "bio_alloc_bioset" },
	{ 0xfced7f24, "target_complete_cmd" },
	{ 0xa239ac16, "bio_put" },
	{ 0xc5850110, "printk" },
	{ 0x6d6b9626, "blkdev_issue_discard" },
	{ 0x48c48470, "target_to_linux_sector" },
	{ 0x37a0cba, "kfree" },
	{ 0xc86b6619, "sbc_parse_cdb" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "target_core_mod");


MODULE_INFO(srcversion, "9A90C28917BC953C4467E04");
