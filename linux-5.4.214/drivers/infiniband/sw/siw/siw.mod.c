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
	{ 0x3b83610f, "cpu_sibling_map" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xa0554d18, "release_sock" },
	{ 0x6b9a57ad, "ib_set_device_ops" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x7d5e1008, "__crc32c_le_shift" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xcc5d22d9, "can_do_mlock" },
	{ 0x53b954a2, "up_read" },
	{ 0xb850330c, "kernel_sendmsg" },
	{ 0x6fc4af2b, "crypto_alloc_shash" },
	{ 0xe652a222, "ib_device_put" },
	{ 0x754d539c, "strlen" },
	{ 0x6ad950b1, "tcp_rate_check_app_limited" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x699ef718, "remap_vmalloc_range" },
	{ 0xc7a1840e, "llist_add_batch" },
	{ 0xdf36914b, "xa_find_after" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x7bbccd05, "nr_node_ids" },
	{ 0x8629086e, "sock_release" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x63993a2, "rdma_link_register" },
	{ 0x56470118, "__warn_printk" },
	{ 0x87b8798d, "sg_next" },
	{ 0x8fa25c24, "xa_find" },
	{ 0xd9491c14, "xa_destroy" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xc3c7d712, "crypto_shash_final" },
	{ 0x8b541133, "__skb_checksum" },
	{ 0x999e8297, "vfree" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xb15b4109, "crc32c" },
	{ 0x5c64889f, "rdma_link_unregister" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x745a981, "xa_erase" },
	{ 0xabaae129, "kthread_create_on_node" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x2bbe4d4c, "__mmdrop" },
	{ 0x668b19a1, "down_read" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0xcf4b6c7d, "ib_dealloc_device" },
	{ 0xeaab968, "kthread_bind" },
	{ 0xfd1022f3, "ib_unregister_device_queued" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x9c5412bb, "kernel_setsockopt" },
	{ 0xc5b31d13, "dma_virt_ops" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xaf7d0f48, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0x85e73dd7, "kthread_stop" },
	{ 0x5c05256a, "lock_sock_nested" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x3439c9a7, "crypto_shash_update" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xb04a43ad, "__xa_alloc_cyclic" },
	{ 0xd827a719, "ib_device_set_netdev" },
	{ 0xa85a3e6d, "xa_load" },
	{ 0x7b56b034, "ib_unregister_driver" },
	{ 0xce807a25, "up_write" },
	{ 0x721c9d1f, "init_net" },
	{ 0x57bc19d2, "down_write" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9114b616, "__xa_alloc" },
	{ 0x9e615457, "ib_dispatch_event" },
	{ 0x8837fcfd, "flush_signals" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xe93ac29d, "ib_device_get_by_netdev" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x618911fc, "numa_node" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x5635a60a, "vmalloc_user" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa242f6b1, "get_user_pages" },
	{ 0x6aff694d, "ib_register_device" },
	{ 0x1000e51, "schedule" },
	{ 0xb1e65e92, "put_user_pages_dirty_lock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7892cbb4, "do_tcp_sendpages" },
	{ 0xf369487d, "crypto_destroy_tfm" },
	{ 0xab37f21b, "wake_up_process" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc3ff38c2, "down_read_trylock" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xd0d2c533, "_ib_alloc_device" },
	{ 0xa15892b8, "kernel_recvmsg" },
	{ 0xd0c2ac7b, "kernel_accept" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x131081e5, "ib_sg_to_pages" },
	{ 0x69acdf38, "memcpy" },
	{ 0xb5679c54, "__dynamic_ibdev_dbg" },
	{ 0xa2730dc8, "sock_create" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0xb352177e, "find_first_bit" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x5cb6526b, "skb_copy_bits" },
	{ 0x74f800cc, "tcp_read_sock" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x88db9f48, "__check_object_size" },
};

MODULE_INFO(depends, "ib_core,libcrc32c");


MODULE_INFO(srcversion, "6F4DC10D500D82DF2324D94");