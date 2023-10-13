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
	{ 0xdc274b8f, "bus_register" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe5b6e9e8, "__pm_runtime_idle" },
	{ 0x34d3b8d1, "driver_register" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xce2f01d5, "device_del" },
	{ 0xdeeb6e3e, "device_register" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xa191fd37, "class_unregister" },
	{ 0x86f434e2, "driver_unregister" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x954f099c, "idr_preload" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x5fe1c3f, "device_add" },
	{ 0x5fd264df, "__class_register" },
	{ 0xc94d2bd9, "bus_unregister" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x8e17faf3, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xe7a7a03f, "get_device" },
	{ 0x37a0cba, "kfree" },
	{ 0x535449e7, "device_initialize" },
	{ 0x5a4e4713, "device_unregister" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0xdb2d5c16, "dev_set_name" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x719e0e44, "add_uevent_var" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "B6B4629B71287FC222DBE09");
