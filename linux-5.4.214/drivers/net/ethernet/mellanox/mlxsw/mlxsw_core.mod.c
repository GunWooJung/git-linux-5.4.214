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
	{ 0x37559ef6, "devlink_port_register" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x86090d69, "devlink_reload_enable" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0xb7f990e9, "rht_bucket_nested" },
	{ 0x4c4b17c2, "hwmon_device_register_with_groups" },
	{ 0x55e43c11, "devlink_reload_disable" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xebdd1a34, "thermal_cooling_device_unregister" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xd3f5b56e, "hwmon_device_unregister" },
	{ 0xa3659b5f, "__tracepoint_devlink_hwerr" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x5a955fde, "skb_copy" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc8ef0dff, "devlink_resources_unregister" },
	{ 0xc310b981, "strnstr" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xd5abe2d2, "devlink_alloc" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x1172d487, "rhashtable_insert_slow" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x50a63f93, "__tracepoint_devlink_hwmsg" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x8b17ecb5, "devlink_port_type_ib_set" },
	{ 0x8f801d8d, "rhashtable_destroy" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xcfc15f4b, "rht_bucket_nested_insert" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xc5850110, "printk" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0xdc4bcaf4, "devlink_params_publish" },
	{ 0xc9d174fb, "thermal_zone_device_register" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0xd523d85d, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x8df92f66, "memchr_inv" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xca944cd, "devm_kfree" },
	{ 0x7c96d2a1, "devlink_port_unregister" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x90688bcd, "devlink_info_driver_name_put" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x340e1eb9, "thermal_zone_bind_cooling_device" },
	{ 0x20a059ee, "devlink_is_reload_failed" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xd2b41547, "devlink_params_unpublish" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xb1647fc2, "devlink_info_version_running_put" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x216cc777, "netdev_err" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xe27592e5, "thermal_zone_unbind_cooling_device" },
	{ 0x7abfca43, "rhashtable_init" },
	{ 0xd0828e31, "devlink_free" },
	{ 0x970d5a4a, "thermal_cooling_device_register" },
	{ 0xb94aa16a, "devlink_port_type_clear" },
	{ 0x23686b86, "devlink_register" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x66677a36, "devlink_port_attrs_set" },
	{ 0x797a0345, "thermal_zone_device_update" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x607c4683, "devlink_info_version_fixed_put" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xad263612, "consume_skb" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x7946bcc, "devlink_unregister" },
	{ 0xd0d156e9, "__rht_bucket_nested" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x4aec3028, "devlink_port_type_eth_set" },
	{ 0x92920cb2, "thermal_zone_device_unregister" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "5D36DB41FD4CFBEBCBB78C2");
