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
	{ 0xe128fdfc, "target_submit_cmd_map_sgls" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x652126ef, "iov_iter_npages" },
	{ 0xd116ad0, "__sbitmap_queue_get" },
	{ 0x82de01e, "__put_devmap_managed_page" },
	{ 0xed44627c, "vhost_work_flush" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xe4d5756b, "target_put_sess_cmd" },
	{ 0xdf0f75c6, "eventfd_signal" },
	{ 0x754d539c, "strlen" },
	{ 0x10b34e89, "core_tpg_register" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xc7a1840e, "llist_add_batch" },
	{ 0x2bc21f33, "transport_generic_free_cmd" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x46df8b1a, "target_register_template" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0x3dae6721, "core_tpg_deregister" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x829db6fe, "vhost_dev_cleanup" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x3213a836, "vhost_log_access_ok" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x21271fd0, "copy_user_enhanced_fast_string" },
	{ 0x9005ad18, "vhost_enable_notify" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x7770f16f, "vhost_poll_flush" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xf9d14305, "vhost_disable_notify" },
	{ 0x4b2e0ffe, "misc_register" },
	{ 0x904322c2, "vhost_signal" },
	{ 0x23a5b813, "vhost_dev_ioctl" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x334da4e, "scsi_command_size_tbl" },
	{ 0x856099ca, "iov_iter_get_pages" },
	{ 0x1f199d24, "copy_user_generic_string" },
	{ 0xeaad96f9, "sbitmap_queue_clear" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xe048968d, "vhost_get_vq_desc" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x5ae8a115, "noop_llseek" },
	{ 0x3906f88e, "target_remove_session" },
	{ 0x9ebdd1cc, "vhost_work_queue" },
	{ 0xcf353955, "target_undepend_item" },
	{ 0xecdcabd2, "copy_user_generic_unrolled" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x4c13397f, "vhost_add_used_and_signal" },
	{ 0xf1d63e74, "target_setup_session" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0xa916b694, "strnlen" },
	{ 0x86ee7057, "transport_send_check_condition_and_sense" },
	{ 0x2ce544af, "target_unregister_template" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xeaa844c3, "vhost_exceeds_weight" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0xc4a9f597, "_copy_from_iter_full" },
	{ 0xa909cfc5, "vhost_work_init" },
	{ 0xc9469630, "vhost_vq_init_access" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x5e42703f, "iov_iter_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf6883554, "vhost_dev_init" },
	{ 0xfa1d449a, "iov_iter_advance" },
	{ 0x6fe1f30a, "vhost_dev_stop" },
	{ 0xf1aea249, "vhost_vq_access_ok" },
	{ 0xd7bd097a, "target_execute_cmd" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x1118ebc5, "vhost_vring_ioctl" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xa9af9ab4, "target_depend_item" },
	{ 0x35775925, "misc_deregister" },
	{ 0x7beb3062, "_copy_to_iter" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x75942744, "__put_page" },
	{ 0xcead3168, "vhost_add_used" },
	{ 0x587f22d7, "devmap_managed_key" },
};

MODULE_INFO(depends, "target_core_mod,vhost");


MODULE_INFO(srcversion, "BE1CBF5E8210FF5F0232711");
