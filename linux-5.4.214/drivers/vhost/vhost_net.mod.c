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
	{ 0xa52ae5eb, "alloc_pages_current" },
	{ 0xf13be7db, "vhost_vq_avail_empty" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x541c669c, "sockfd_lookup" },
	{ 0x82de01e, "__put_devmap_managed_page" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x765395c3, "param_ops_int" },
	{ 0xdf0f75c6, "eventfd_signal" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xb65b68f7, "vhost_dev_check_owner" },
	{ 0x906f5133, "vq_meta_prefetch" },
	{ 0x15a46c4c, "vhost_poll_start" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x378551e, "vhost_chr_poll" },
	{ 0xa6841fb6, "tun_ptr_to_xdp" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x829db6fe, "vhost_dev_cleanup" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x3213a836, "vhost_log_access_ok" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x4a3b923d, "__page_frag_cache_drain" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xcd95a60, "copy_page_from_iter" },
	{ 0x9005ad18, "vhost_enable_notify" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x960940b8, "vhost_dev_has_owner" },
	{ 0x7770f16f, "vhost_poll_flush" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xf9d14305, "vhost_disable_notify" },
	{ 0x4b2e0ffe, "misc_register" },
	{ 0x23a5b813, "vhost_dev_ioctl" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xcea5e835, "vhost_log_write" },
	{ 0x551b4f7d, "vhost_chr_read_iter" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xe048968d, "vhost_get_vq_desc" },
	{ 0x5ae8a115, "noop_llseek" },
	{ 0xaf6554ce, "vhost_chr_write_iter" },
	{ 0x957057d5, "vhost_dev_set_owner" },
	{ 0x7a5141f3, "vhost_add_used_and_signal_n" },
	{ 0x4b54fc7f, "vhost_dev_reset_owner_prepare" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xca669996, "fput" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x4c13397f, "vhost_add_used_and_signal" },
	{ 0xf5801b13, "vhost_discard_vq_desc" },
	{ 0x28917d79, "tun_get_socket" },
	{ 0xda374c1c, "vhost_poll_queue" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xeaa844c3, "vhost_exceeds_weight" },
	{ 0x1000e51, "schedule" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xfa55dd1d, "tun_get_tx_ring" },
	{ 0x86ba7ea5, "vhost_poll_stop" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc9469630, "vhost_vq_init_access" },
	{ 0x19ffdec8, "vhost_poll_init" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x5e42703f, "iov_iter_init" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0xd11bbd7, "vhost_dev_reset_owner" },
	{ 0xd8602b6a, "tun_is_xdp_frame" },
	{ 0x501e3a06, "vhost_has_work" },
	{ 0xf6883554, "vhost_dev_init" },
	{ 0xebd6c021, "fget" },
	{ 0xfa1d449a, "iov_iter_advance" },
	{ 0x826f9075, "tap_get_socket" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x6fe1f30a, "vhost_dev_stop" },
	{ 0xf1aea249, "vhost_vq_access_ok" },
	{ 0x4099f919, "tun_ptr_free" },
	{ 0x69a93e68, "tap_get_ptr_ring" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x1118ebc5, "vhost_vring_ioctl" },
	{ 0x35775925, "misc_deregister" },
	{ 0x7beb3062, "_copy_to_iter" },
	{ 0x75942744, "__put_page" },
	{ 0x29691595, "vhost_init_device_iotlb" },
	{ 0xceb66bec, "sched_clock_cpu" },
	{ 0x587f22d7, "devmap_managed_key" },
};

MODULE_INFO(depends, "vhost,tap");


MODULE_INFO(srcversion, "81CBA2A7082E885043C7B40");
