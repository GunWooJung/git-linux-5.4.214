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
	{ 0x2d3385d3, "system_wq" },
	{ 0xa3a86098, "target_tpg_has_node_acl" },
	{ 0x92a881bb, "kmem_cache_destroy" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xd116ad0, "__sbitmap_queue_get" },
	{ 0x6fc4af2b, "crypto_alloc_shash" },
	{ 0x349cba85, "strchr" },
	{ 0xdd62be38, "target_setup_cmd_from_cdb" },
	{ 0xe613a798, "inet_addr_is_any" },
	{ 0xcf918e9e, "transport_deregister_session" },
	{ 0x742578a5, "wait_for_random_bytes" },
	{ 0xe4d5756b, "target_put_sess_cmd" },
	{ 0x754d539c, "strlen" },
	{ 0x10b34e89, "core_tpg_register" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x2bc21f33, "transport_generic_free_cmd" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xad2b26aa, "send_sig" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x9b31ca90, "crypto_stats_ahash_update" },
	{ 0x46df8b1a, "target_register_template" },
	{ 0x8629086e, "sock_release" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x21b2e7f4, "target_show_dynamic_sessions" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xbeb353df, "__transport_register_session" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0x3dae6721, "core_tpg_deregister" },
	{ 0xfab3a2cc, "sock_recvmsg" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x87b8798d, "sg_next" },
	{ 0x78f9262b, "target_get_sess_cmd" },
	{ 0xdec48bb5, "transport_handle_cdb_direct" },
	{ 0x63a7c28c, "bitmap_find_free_region" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xd45cc6ca, "bin2hex" },
	{ 0x69982545, "transport_wait_for_tasks" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x881f77c7, "crypto_shash_finup" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0xa50335f4, "sbitmap_finish_wait" },
	{ 0xea3c8e4e, "scsilun_to_int" },
	{ 0x999e8297, "vfree" },
	{ 0x2b2b3b0d, "core_tmr_alloc_req" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x97cc579a, "kernel_listen" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xd2804da7, "core_tpg_check_initiator_node_acl" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x56dd36f1, "transport_lookup_cmd_lun" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xabaae129, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb86f74c5, "free_cpumask_var" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x5fa80bd2, "crypto_ahash_final" },
	{ 0xfd94814e, "complete_all" },
	{ 0xcb68ec89, "crypto_ahash_digest" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x9c5412bb, "kernel_setsockopt" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xfb578fc5, "memset" },
	{ 0x7b01aee9, "crypto_ahash_finup" },
	{ 0x11089ac7, "_ctype" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xaf7d0f48, "current_task" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x85e73dd7, "kthread_stop" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x47198866, "core_tpg_set_initiator_node_tag" },
	{ 0x3439c9a7, "crypto_shash_update" },
	{ 0xc882b550, "sock_sendmsg" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x998dfdfc, "inet_pton_with_scope" },
	{ 0x262e823a, "wait_for_completion_interruptible" },
	{ 0xffb7c514, "ida_free" },
	{ 0x87a17f30, "iov_iter_kvec" },
	{ 0xeaad96f9, "sbitmap_queue_clear" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xff80f59, "zalloc_cpumask_var" },
	{ 0x5a921311, "strncmp" },
	{ 0xff8cf5bf, "transport_deregister_session_configfs" },
	{ 0x5792f848, "strlcpy" },
	{ 0x416b50fe, "set_cpus_allowed_ptr" },
	{ 0xb566a6c3, "kmem_cache_free" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x954f099c, "idr_preload" },
	{ 0x1e6d26a8, "strstr" },
	{ 0x3b346986, "config_group_init_type_name" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x721c9d1f, "init_net" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x8837fcfd, "flush_signals" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xdf46d4f1, "module_put" },
	{ 0xc6cbbc89, "capable" },
	{ 0xcddd35cf, "transport_free_session" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x7ccefd28, "kmem_cache_alloc" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xa916b694, "strnlen" },
	{ 0x86ee7057, "transport_send_check_condition_and_sense" },
	{ 0x2ce544af, "target_unregister_template" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x2706669f, "transport_init_se_cmd" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xd32694be, "sbitmap_prepare_to_wait" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x574c2e74, "bitmap_release_region" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0xbab25516, "transport_alloc_session" },
	{ 0x9769ff3c, "transport_alloc_session_tags" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0xf369487d, "crypto_destroy_tfm" },
	{ 0xab37f21b, "wake_up_process" },
	{ 0x50cf7585, "hex2bin" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x296e348, "transport_lookup_tmr_lun" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x622509fb, "transport_generic_handle_tmr" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x7b5ae60a, "core_tpg_set_initiator_node_queue_depth" },
	{ 0x51624e26, "kmem_cache_create" },
	{ 0x9ea53d7f, "vsnprintf" },
	{ 0xd0c2ac7b, "kernel_accept" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x5ed90adc, "int_to_scsilun" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6df1aaf1, "kernel_sigaction" },
	{ 0xa2730dc8, "sock_create" },
	{ 0xcf2a6966, "up" },
	{ 0x9fe57d9, "kernel_bind" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x7a4497db, "kzfree" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xd7bd097a, "target_execute_cmd" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x6101930c, "crypto_stats_get" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x50c81779, "transport_generic_new_cmd" },
	{ 0x6d71399f, "try_module_get" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x4f6ec61e, "core_alua_check_nonop_delay" },
	{ 0xe914e41e, "strcpy" },
	{ 0xb48657a3, "crypto_alloc_ahash" },
};

MODULE_INFO(depends, "target_core_mod");


MODULE_INFO(srcversion, "0C943B3A82B4855DC2A0EB6");
