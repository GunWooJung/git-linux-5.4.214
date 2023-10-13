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
	{ 0xa1cb7169, "virtio_transport_recv_pkt" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xea9c1f21, "virtio_transport_set_buffer_size" },
	{ 0x1c95c706, "virtio_transport_destruct" },
	{ 0xed44627c, "vhost_work_flush" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xdf0f75c6, "eventfd_signal" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xb65b68f7, "vhost_dev_check_owner" },
	{ 0xc4fbd873, "virtio_transport_get_max_buffer_size" },
	{ 0x161b904f, "virtio_transport_notify_send_pre_block" },
	{ 0xcdbbcfd9, "virtio_transport_stream_has_space" },
	{ 0xf4b8948, "_copy_from_iter" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x52bf7768, "virtio_transport_notify_poll_in" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x63c68d3, "virtio_transport_do_socket_init" },
	{ 0x7f1f5eaf, "virtio_transport_stream_is_active" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x926606cb, "__vsock_core_init" },
	{ 0x829db6fe, "vhost_dev_cleanup" },
	{ 0x3213a836, "vhost_log_access_ok" },
	{ 0x55ce9eb6, "virtio_transport_deliver_tap_pkt" },
	{ 0xb4dc6efe, "virtio_transport_set_min_buffer_size" },
	{ 0x9005ad18, "vhost_enable_notify" },
	{ 0xbabd30f5, "virtio_transport_dgram_allow" },
	{ 0x5f3fb2f2, "virtio_transport_notify_recv_post_dequeue" },
	{ 0x106d60f3, "virtio_transport_notify_poll_out" },
	{ 0x7770f16f, "vhost_poll_flush" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xf9d14305, "vhost_disable_notify" },
	{ 0x7f730c80, "vsock_core_exit" },
	{ 0x4b2e0ffe, "misc_register" },
	{ 0x904322c2, "vhost_signal" },
	{ 0x23a5b813, "vhost_dev_ioctl" },
	{ 0x1a9a8159, "virtio_transport_stream_dequeue" },
	{ 0xe22ea48d, "virtio_transport_stream_enqueue" },
	{ 0x940da557, "virtio_transport_notify_recv_pre_dequeue" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xe048968d, "vhost_get_vq_desc" },
	{ 0x7d732add, "virtio_transport_notify_send_pre_enqueue" },
	{ 0x5ae8a115, "noop_llseek" },
	{ 0x9ebdd1cc, "vhost_work_queue" },
	{ 0xe5a90f3f, "virtio_transport_notify_send_init" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x3a81e69, "virtio_transport_stream_allow" },
	{ 0xde8bb192, "virtio_transport_get_buffer_size" },
	{ 0xda374c1c, "vhost_poll_queue" },
	{ 0x904ec562, "virtio_transport_dgram_dequeue" },
	{ 0x182f81d8, "virtio_transport_notify_send_post_enqueue" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xeaa844c3, "vhost_exceeds_weight" },
	{ 0x82ff3c86, "virtio_transport_shutdown" },
	{ 0x90455799, "virtio_transport_dgram_enqueue" },
	{ 0xa909cfc5, "vhost_work_init" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc9469630, "vhost_vq_init_access" },
	{ 0xf33fef77, "virtio_transport_notify_recv_pre_block" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xc73f8976, "virtio_transport_free_pkt" },
	{ 0x136e936f, "virtio_transport_dgram_bind" },
	{ 0x5e42703f, "iov_iter_init" },
	{ 0x37a0cba, "kfree" },
	{ 0x9464351a, "virtio_transport_stream_rcvhiwat" },
	{ 0x1ad736d4, "virtio_transport_set_max_buffer_size" },
	{ 0xf6883554, "vhost_dev_init" },
	{ 0x6fe1f30a, "vhost_dev_stop" },
	{ 0xf1aea249, "vhost_vq_access_ok" },
	{ 0xbb72fc0e, "virtio_transport_stream_has_data" },
	{ 0xd8fd2ace, "virtio_transport_connect" },
	{ 0x80a9293a, "vsock_for_each_connected_socket" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x1118ebc5, "vhost_vring_ioctl" },
	{ 0x35775925, "misc_deregister" },
	{ 0x7beb3062, "_copy_to_iter" },
	{ 0x9fab6ddd, "virtio_transport_release" },
	{ 0xc18104c0, "virtio_transport_get_min_buffer_size" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x7dbcdb04, "virtio_transport_notify_recv_init" },
	{ 0xcead3168, "vhost_add_used" },
};

MODULE_INFO(depends, "vmw_vsock_virtio_transport_common,vhost,vsock");


MODULE_INFO(srcversion, "3B10812A1B02E59551EA908");
