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
	{ 0x68a41536, "param_ops_bool" },
	{ 0x378180d9, "dm_unregister_target" },
	{ 0x60f968b2, "dm_register_target" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x907e623, "raid5_set_cache_size" },
	{ 0xaa63dc1, "r5c_journal_mode_set" },
	{ 0xb1425b32, "dm_table_add_target_callbacks" },
	{ 0xa0b77e68, "md_start" },
	{ 0x286991f, "md_run" },
	{ 0xa52ae5eb, "alloc_pages_current" },
	{ 0xa1f8d155, "dm_get_device" },
	{ 0xc66d919f, "dm_table_get_mode" },
	{ 0x4740c60c, "dm_set_target_max_io_len" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x2df515d7, "md_rdev_init" },
	{ 0x5b9b234e, "mddev_init" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x11e0ec41, "dm_read_arg" },
	{ 0x7deff673, "dm_consume_args" },
	{ 0xc7d094b5, "dm_read_arg_group" },
	{ 0x5eb24829, "dm_shift_arg" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x96848186, "scnprintf" },
	{ 0x3fe2ccbe, "memweight" },
	{ 0xfb578fc5, "memset" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x56ba12ab, "mddev_resume" },
	{ 0xe1c81d6e, "md_error" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x88d09bce, "sync_page_io" },
	{ 0xad84bef8, "dm_table_event" },
	{ 0xd7df7289, "mddev_congested" },
	{ 0x23b84cb, "md_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0xfed2e000, "dm_put_device" },
	{ 0x8150b333, "md_rdev_clear" },
	{ 0x268927d8, "md_handle_request" },
	{ 0x3f3664b9, "md_stop_writes" },
	{ 0x196dc876, "mddev_suspend" },
	{ 0xbba5ee18, "md_bitmap_load" },
	{ 0xd43a8401, "md_bitmap_resize" },
	{ 0xb4ef6c07, "mddev_unlock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xaf8a2fd4, "md_update_sb" },
	{ 0x24977d49, "revalidate_disk" },
	{ 0xc1eda733, "dm_disk" },
	{ 0x70987b60, "dm_table_get_md" },
	{ 0xc5850110, "printk" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xa7696816, "md_wakeup_thread" },
	{ 0xbc704542, "md_reap_sync_thread" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x73552eb3, "blk_limits_io_opt" },
	{ 0xcbd2301, "blk_limits_io_min" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "raid456");


MODULE_INFO(srcversion, "69249FAB30635EEFDB63C46");
