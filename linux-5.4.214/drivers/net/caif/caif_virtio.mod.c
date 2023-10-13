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
	{ 0x580796e, "unregister_virtio_driver" },
	{ 0xba3f45f1, "register_virtio_driver" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xeb1919a4, "netdev_info" },
	{ 0x5743f145, "netif_carrier_on" },
	{ 0x21d3b421, "__dynamic_netdev_dbg" },
	{ 0xbefa51a3, "gen_pool_add_owner" },
	{ 0xced0f4d4, "gen_pool_create" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x2816d12d, "free_netdev" },
	{ 0x57d403e2, "debugfs_create_u32" },
	{ 0x7f3966fa, "debugfs_create_dir" },
	{ 0x349cba85, "strchr" },
	{ 0x958767a4, "register_netdevice" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc61bacc3, "netif_napi_add" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xc6fb8710, "alloc_netdev_mqs" },
	{ 0xd8c6a4dd, "virtqueue_detach_unused_buf" },
	{ 0x23a77175, "napi_disable" },
	{ 0x7f787f6d, "netif_tx_stop_all_queues" },
	{ 0x19c11c2c, "virtqueue_enable_cb" },
	{ 0x49ebd2, "virtqueue_kick" },
	{ 0xf64e2a3d, "virtqueue_add_outbuf" },
	{ 0x7aff77a3, "__cpu_present_mask" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x977beaa3, "virtqueue_disable_cb" },
	{ 0x838e8353, "netif_tx_wake_queue" },
	{ 0xad92de27, "virtqueue_get_vring_size" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x577e0270, "virtqueue_get_buf" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x6c224cda, "gen_pool_destroy" },
	{ 0x60ba97c, "gen_pool_free_owner" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x5cb6526b, "skb_copy_bits" },
	{ 0x2b593aa8, "gen_pool_alloc_algo_owner" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x5b551d6c, "netif_carrier_off" },
	{ 0xe8b1a3d2, "netdev_warn" },
	{ 0x216cc777, "netdev_err" },
	{ 0x4d7e3b8b, "vringh_need_notify_kern" },
	{ 0xf9e91146, "__napi_schedule" },
	{ 0xe42f476d, "vringh_notify_disable_kern" },
	{ 0xa085cc86, "napi_schedule_prep" },
	{ 0x1ad4f052, "vringh_notify_enable_kern" },
	{ 0xf281bc91, "napi_complete_done" },
	{ 0xad263612, "consume_skb" },
	{ 0x120103ea, "__netdev_alloc_skb" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0xdc2d9f94, "vringh_getdesc_kern" },
	{ 0x29cea78, "vringh_complete_kern" },
	{ 0x2899f099, "netif_receive_skb" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x37a0cba, "kfree" },
	{ 0x8acf4ec6, "unregister_netdev" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x5b1c5c13, "debugfs_remove_recursive" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x5561600b, "dev_close" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "vringh");

MODULE_ALIAS("virtio:d0000000Cv*");

MODULE_INFO(srcversion, "A40B9C015C096EA0E090F17");
