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
	{ 0xc5850110, "printk" },
	{ 0xba3f45f1, "register_virtio_driver" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xfddb53c8, "device_for_each_child" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x20978fb9, "idr_find" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x254ca682, "virtqueue_notify" },
	{ 0xf3cdabc9, "virtqueue_kick_prepare" },
	{ 0x4a62a2a0, "virtqueue_add_inbuf" },
	{ 0x532b1a31, "dma_alloc_attrs" },
	{ 0xad92de27, "virtqueue_get_vring_size" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x36870044, "rpmsg_unregister_device" },
	{ 0x2409a52c, "rpmsg_register_device" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x8e17faf3, "put_device" },
	{ 0x510d2aee, "rpmsg_find_device" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x9e0fcfcf, "rpmsg_sendto" },
	{ 0x9166fada, "strncpy" },
	{ 0xa7556a63, "virtio_check_driver_offered_feature" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x49ebd2, "virtqueue_kick" },
	{ 0xf64e2a3d, "virtqueue_add_outbuf" },
	{ 0x69acdf38, "memcpy" },
	{ 0x977beaa3, "virtqueue_disable_cb" },
	{ 0x19c11c2c, "virtqueue_enable_cb" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x3e95082d, "vmalloc_to_page" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x531b604e, "__virt_addr_valid" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x577e0270, "virtqueue_get_buf" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x5a4e4713, "device_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rpmsg_core");

MODULE_ALIAS("virtio:d00000007v*");

MODULE_INFO(srcversion, "463736CA78801718C805D6F");
