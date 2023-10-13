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
	{ 0x2a64cc8f, "fc_linkup" },
	{ 0xa52ae5eb, "alloc_pages_current" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xdc274b8f, "bus_register" },
	{ 0x1c30f94b, "fc_exch_init" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x82de01e, "__put_devmap_managed_page" },
	{ 0x31826297, "fc_rport_create" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x754d539c, "strlen" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xb0ddd5a1, "fc_rport_flush_queue" },
	{ 0xc7ba3d4e, "dev_printk" },
	{ 0xd3a6ffd2, "fc_seq_els_rsp_send" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x30313dd3, "skb_clone" },
	{ 0x5098caed, "dev_get_by_name" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xbe92ed72, "skb_trim" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0xfc3d9863, "fc_fcp_init" },
	{ 0x90a69765, "__pskb_pull_tail" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x2be543d8, "fc_disc_config" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xf89e6197, "skb_queue_purge" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0xfb578fc5, "memset" },
	{ 0xdf16a149, "fc_elsct_init" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xa4c1114d, "fc_vport_id_lookup" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xdeeb6e3e, "device_register" },
	{ 0xaf7d0f48, "current_task" },
	{ 0xfd3d2b80, "__ethtool_get_link_ksettings" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x1a9a433c, "prandom_u32_state" },
	{ 0x61bc102c, "fc_exch_recv" },
	{ 0x2f22f571, "fc_lport_set_local_id" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x9166fada, "strncpy" },
	{ 0xd523d85d, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xbed6138e, "skb_pull" },
	{ 0x721c9d1f, "init_net" },
	{ 0xc94d2bd9, "bus_unregister" },
	{ 0x12f4028, "fc_lport_reset" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xc502ef3, "skb_queue_tail" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xa916b694, "strnlen" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0xd163389d, "fc_linkdown" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb8cd8f3b, "fc_rport_login" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc93cd2d1, "fc_disc_init" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x48ca5d15, "fc_rport_logoff" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b89b540, "skb_dequeue" },
	{ 0x5a4e4713, "device_unregister" },
	{ 0x9d50ed7e, "fc_rport_destroy" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x14c07790, "fc_lport_init" },
	{ 0xad263612, "consume_skb" },
	{ 0xdb2d5c16, "dev_set_name" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xba505b9b, "dev_queue_xmit" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x75942744, "__put_page" },
	{ 0x177cfc88, "dev_get_stats" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x9961ebe9, "fc_rport_lookup" },
};

MODULE_INFO(depends, "libfc");


MODULE_INFO(srcversion, "521171C1707143A004E646E");
