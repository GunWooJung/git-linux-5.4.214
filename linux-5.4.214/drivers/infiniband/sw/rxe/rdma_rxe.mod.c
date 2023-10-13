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
	{ 0x92a881bb, "kmem_cache_destroy" },
	{ 0x6b9a57ad, "ib_set_device_ops" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x2ebb19fd, "execute_in_process_context" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x6fc4af2b, "crypto_alloc_shash" },
	{ 0x349cba85, "strchr" },
	{ 0xe652a222, "ib_device_put" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x76d8f2be, "dev_get_flags" },
	{ 0x699ef718, "remap_vmalloc_range" },
	{ 0xe25ee9d3, "_raw_write_lock_irqsave" },
	{ 0xc1da4466, "ib_get_eth_speed" },
	{ 0x7433789f, "rdma_get_gid_attr" },
	{ 0x6f4fadf7, "ip_local_out" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xd3a0eec8, "vlan_dev_vlan_id" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xffae8e8b, "nsecs_to_jiffies" },
	{ 0x8629086e, "sock_release" },
	{ 0x73588f11, "dst_release" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x30313dd3, "skb_clone" },
	{ 0x5098caed, "dev_get_by_name" },
	{ 0x2124474, "ip_send_check" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x63993a2, "rdma_link_register" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xccd4c999, "__sg_page_iter_start" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xdbcda658, "sock_create_kern" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x5c64889f, "rdma_link_unregister" },
	{ 0x62333053, "skb_scrub_packet" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x1c1b9f8e, "_raw_write_unlock_irqrestore" },
	{ 0x68920b, "udp_sock_create6" },
	{ 0x7435bb7d, "setup_udp_tunnel_sock" },
	{ 0xcf4b6c7d, "ib_dealloc_device" },
	{ 0x865f6311, "dev_mc_add" },
	{ 0xfd1022f3, "ib_unregister_device_queued" },
	{ 0x90a69765, "__pskb_pull_tail" },
	{ 0x38b5452a, "dma_get_required_mask" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x9bfe7887, "udp_tunnel_sock_release" },
	{ 0xc5b31d13, "dma_virt_ops" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x3439c9a7, "crypto_shash_update" },
	{ 0x479c3c86, "find_next_zero_bit" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xd5e2ee54, "dev_mc_del" },
	{ 0x925b1648, "ib_query_port" },
	{ 0xb566a6c3, "kmem_cache_free" },
	{ 0xd523d85d, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x7c9ca58f, "__sg_page_iter_next" },
	{ 0x5c8750d1, "kernel_sock_shutdown" },
	{ 0x1879c565, "ib_umem_get" },
	{ 0xd827a719, "ib_device_set_netdev" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x38527fa9, "ib_unregister_device_and_put" },
	{ 0xb8781f96, "rdma_put_gid_attr" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x7b56b034, "ib_unregister_driver" },
	{ 0xbed6138e, "skb_pull" },
	{ 0xc2f29a5a, "ipv6_stub" },
	{ 0x721c9d1f, "init_net" },
	{ 0x6d88f1e3, "vlan_dev_real_dev" },
	{ 0x9e615457, "ib_dispatch_event" },
	{ 0xf11543ff, "find_first_zero_bit" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xe93ac29d, "ib_device_get_by_netdev" },
	{ 0xc502ef3, "skb_queue_tail" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x7ccefd28, "kmem_cache_alloc" },
	{ 0x736b5662, "_raw_read_lock_irqsave" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x5635a60a, "vmalloc_user" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6aff694d, "ib_register_device" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x365c262a, "rdma_read_gid_attr_ndev_rcu" },
	{ 0xa16c8613, "_raw_read_unlock_irqrestore" },
	{ 0xf369487d, "crypto_destroy_tfm" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xd0d2c533, "_ib_alloc_device" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x51624e26, "kmem_cache_create" },
	{ 0x31ec3ae6, "ip_route_output_flow" },
	{ 0x37a0cba, "kfree" },
	{ 0x131081e5, "ib_sg_to_pages" },
	{ 0x69acdf38, "memcpy" },
	{ 0x99b23286, "ib_modify_qp_is_ok" },
	{ 0x96848186, "scnprintf" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x3b89b540, "skb_dequeue" },
	{ 0x83d8f38c, "udp_sock_create4" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xbec4c087, "ip6_local_out" },
	{ 0x958c7fe7, "rdma_find_gid_by_port" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x6f661fc4, "ib_device_get_by_name" },
	{ 0x512a75f3, "ib_umem_release" },
	{ 0x58ab6050, "__ip_select_ident" },
};

MODULE_INFO(depends, "ib_core,ip6_udp_tunnel,udp_tunnel,ib_uverbs");


MODULE_INFO(srcversion, "E1CD88813F64A24802DE602");
