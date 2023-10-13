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
	{ 0x72fc91c0, "vmbus_driver_unregister" },
	{ 0xa715d2d1, "__vmbus_driver_register" },
	{ 0x8a1d6948, "_dev_notice" },
	{ 0xfac56468, "__uio_register_device" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xd2b1ad9b, "vmbus_establish_gpadl" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xa2c786a5, "vmbus_connection" },
	{ 0xd6e91544, "vmbus_alloc_ring" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xbcc99da1, "vmbus_close" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x74dbd78d, "sysfs_create_bin_file" },
	{ 0x8a4832a3, "vmbus_open" },
	{ 0xf6a7684d, "uio_event_notify" },
	{ 0x4d48b84a, "vmbus_connect_ring" },
	{ 0xe7af1825, "vmbus_set_sc_create_callback" },
	{ 0xa22d14a, "vmbus_set_chn_rescind_callback" },
	{ 0xeee514b9, "vmbus_disconnect_ring" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x8ecb86b0, "vm_iomap_memory" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x37a0cba, "kfree" },
	{ 0xa8565434, "vmbus_free_ring" },
	{ 0xfe4cdef2, "uio_unregister_device" },
	{ 0x999e8297, "vfree" },
	{ 0x7f8f58d1, "vmbus_teardown_gpadl" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hv_vmbus,uio");


MODULE_INFO(srcversion, "0758EA5901CFA2BBF6E4F26");
