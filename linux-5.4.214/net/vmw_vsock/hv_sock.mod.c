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
	{ 0xa0554d18, "release_sock" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x9356f48e, "vmbus_hvsock_device_unregister" },
	{ 0xdf6e8946, "__hv_pkt_iter_next" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x9918f0f0, "__vsock_create" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xa715d2d1, "__vmbus_driver_register" },
	{ 0xa22d14a, "vmbus_set_chn_rescind_callback" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x926606cb, "__vsock_core_init" },
	{ 0x91f5647e, "hv_pkt_iter_close" },
	{ 0x7f730c80, "vsock_core_exit" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xcfb288d0, "vsock_stream_has_data" },
	{ 0x46a417ca, "vmbus_proto_version" },
	{ 0x5c05256a, "lock_sock_nested" },
	{ 0x285c8d25, "sk_free" },
	{ 0x8a4832a3, "vmbus_open" },
	{ 0x73879664, "vsock_addr_init" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc4a9f597, "_copy_from_iter_full" },
	{ 0xe2cec605, "vsock_find_bound_socket" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xbcc99da1, "vmbus_close" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x643ab05a, "hv_pkt_iter_first" },
	{ 0x469d6b8b, "vmbus_sendpacket" },
	{ 0x2e584d3, "vsock_remove_sock" },
	{ 0x4b2210b8, "vmbus_send_tl_connect_request" },
	{ 0x321adc62, "vsock_insert_connected" },
	{ 0x7beb3062, "_copy_to_iter" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x3d2ee2bf, "vsock_enqueue_accept" },
	{ 0x72fc91c0, "vmbus_driver_unregister" },
};

MODULE_INFO(depends, "hv_vmbus,vsock");


MODULE_INFO(srcversion, "B5C68A87EE68538D1B4D516");
