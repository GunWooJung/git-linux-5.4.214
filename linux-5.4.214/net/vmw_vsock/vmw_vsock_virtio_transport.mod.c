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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xa1cb7169, "virtio_transport_recv_pkt" },
	{ 0xea9c1f21, "virtio_transport_set_buffer_size" },
	{ 0x1c95c706, "virtio_transport_destruct" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xc4fbd873, "virtio_transport_get_max_buffer_size" },
	{ 0x161b904f, "virtio_transport_notify_send_pre_block" },
	{ 0xcdbbcfd9, "virtio_transport_stream_has_space" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x52bf7768, "virtio_transport_notify_poll_in" },
	{ 0x63c68d3, "virtio_transport_do_socket_init" },
	{ 0x4a62a2a0, "virtqueue_add_inbuf" },
	{ 0x7f1f5eaf, "virtio_transport_stream_is_active" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x49ebd2, "virtqueue_kick" },
	{ 0x926606cb, "__vsock_core_init" },
	{ 0x55ce9eb6, "virtio_transport_deliver_tap_pkt" },
	{ 0xb4dc6efe, "virtio_transport_set_min_buffer_size" },
	{ 0x577e0270, "virtqueue_get_buf" },
	{ 0xbabd30f5, "virtio_transport_dgram_allow" },
	{ 0x5f3fb2f2, "virtio_transport_notify_recv_post_dequeue" },
	{ 0x106d60f3, "virtio_transport_notify_poll_out" },
	{ 0x7f730c80, "vsock_core_exit" },
	{ 0x4dcd739, "virtqueue_add_sgs" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x1a9a8159, "virtio_transport_stream_dequeue" },
	{ 0x977beaa3, "virtqueue_disable_cb" },
	{ 0xe22ea48d, "virtio_transport_stream_enqueue" },
	{ 0x940da557, "virtio_transport_notify_recv_pre_dequeue" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x7d732add, "virtio_transport_notify_send_pre_enqueue" },
	{ 0xe5a90f3f, "virtio_transport_notify_send_init" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xad92de27, "virtqueue_get_vring_size" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x3a81e69, "virtio_transport_stream_allow" },
	{ 0xde8bb192, "virtio_transport_get_buffer_size" },
	{ 0x580796e, "unregister_virtio_driver" },
	{ 0x904ec562, "virtio_transport_dgram_dequeue" },
	{ 0x182f81d8, "virtio_transport_notify_send_post_enqueue" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x82ff3c86, "virtio_transport_shutdown" },
	{ 0x90455799, "virtio_transport_dgram_enqueue" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf33fef77, "virtio_transport_notify_recv_pre_block" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xc73f8976, "virtio_transport_free_pkt" },
	{ 0x136e936f, "virtio_transport_dgram_bind" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x37a0cba, "kfree" },
	{ 0x9464351a, "virtio_transport_stream_rcvhiwat" },
	{ 0x1ad736d4, "virtio_transport_set_max_buffer_size" },
	{ 0xbb72fc0e, "virtio_transport_stream_has_data" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xd8fd2ace, "virtio_transport_connect" },
	{ 0xd8c6a4dd, "virtqueue_detach_unused_buf" },
	{ 0x80a9293a, "vsock_for_each_connected_socket" },
	{ 0x19c11c2c, "virtqueue_enable_cb" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x9fab6ddd, "virtio_transport_release" },
	{ 0xc18104c0, "virtio_transport_get_min_buffer_size" },
	{ 0x7dbcdb04, "virtio_transport_notify_recv_init" },
	{ 0xba3f45f1, "register_virtio_driver" },
};

MODULE_INFO(depends, "vmw_vsock_virtio_transport_common,vsock");

MODULE_ALIAS("virtio:d00000013v*");

MODULE_INFO(srcversion, "73A1C1F9F2A0DB532E1F782");
