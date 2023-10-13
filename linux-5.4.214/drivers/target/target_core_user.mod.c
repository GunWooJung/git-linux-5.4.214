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
	{ 0xb2bc2fe7, "sbc_get_device_type" },
	{ 0x1ad12840, "target_backend_unregister" },
	{ 0x92a881bb, "kmem_cache_destroy" },
	{ 0x4ff518e, "root_device_unregister" },
	{ 0x818cbb36, "genl_unregister_family" },
	{ 0x474f63a6, "transport_backend_register" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x2e7f42fb, "passthrough_attrib_attrs" },
	{ 0xcea37297, "genl_register_family" },
	{ 0xfaa8197e, "__root_device_register" },
	{ 0x51624e26, "kmem_cache_create" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x7ccefd28, "kmem_cache_alloc" },
	{ 0xf6a7684d, "uio_event_notify" },
	{ 0x6fbc6a00, "radix_tree_insert" },
	{ 0xa52ae5eb, "alloc_pages_current" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0xfb578fc5, "memset" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0x6cd3e7a3, "unmap_mapping_range" },
	{ 0xb6a68816, "find_last_bit" },
	{ 0xab42375e, "target_complete_cmd_with_length" },
	{ 0x18ab4de8, "transport_copy_sense_to_cmd" },
	{ 0xfced7f24, "target_complete_cmd" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xfe4cdef2, "uio_unregister_device" },
	{ 0xfac56468, "__uio_register_device" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x2688ec10, "bitmap_zalloc" },
	{ 0x5792f848, "strlcpy" },
	{ 0x6f18b0e3, "nla_put_64bit" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x754d539c, "strlen" },
	{ 0x8f57e5bf, "genlmsg_put" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xaaec5b39, "genlmsg_multicast_allns" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x50fad434, "round_jiffies_up" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x7429e20c, "kstrtos8" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0xca21ebd3, "bitmap_free" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0xb566a6c3, "kmem_cache_free" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x999e8297, "vfree" },
	{ 0x7ea3fb3a, "__free_pages" },
	{ 0x4e6e4b41, "radix_tree_delete" },
	{ 0xfba7ddd2, "match_u64" },
	{ 0x3539f11b, "match_strlcpy" },
	{ 0x44e9a829, "match_token" },
	{ 0x85df9b6c, "strsep" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x4e3567f7, "match_int" },
	{ 0x95399746, "passthrough_parse_cdb" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x87b8798d, "sg_next" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x3e95082d, "vmalloc_to_page" },
	{ 0x70ad75fb, "radix_tree_lookup" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x37a0cba, "kfree" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x29361773, "complete" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "target_core_mod,uio");


MODULE_INFO(srcversion, "599A3511B29DB5CBF5D8311");
