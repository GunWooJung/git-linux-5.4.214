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
	{ 0xe7750f8, "kobject_put" },
	{ 0x825954a7, "cdev_alloc" },
	{ 0xad8df8fd, "cdev_del" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xaaf8f961, "kobject_uevent" },
	{ 0xe7d72b83, "kobject_set_name" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x20b41469, "kobject_create_and_add" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x44b8b00a, "generic_access_phys" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xce2f01d5, "device_del" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xa191fd37, "class_unregister" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x419892d3, "fasync_helper" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5ae8a115, "noop_llseek" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x5fe1c3f, "device_add" },
	{ 0x80eea0d7, "kobject_add" },
	{ 0x5fd264df, "__class_register" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x5314ccb0, "cdev_add" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdf46d4f1, "module_put" },
	{ 0xb665f56d, "__cachemode2pte_tbl" },
	{ 0x8e17faf3, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xe7a7a03f, "get_device" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x82c93f75, "remap_pfn_range" },
	{ 0x535449e7, "device_initialize" },
	{ 0x7c914fde, "kobject_init" },
	{ 0xde793eab, "kill_fasync" },
	{ 0x5a4e4713, "device_unregister" },
	{ 0x3e95082d, "vmalloc_to_page" },
	{ 0xdb2d5c16, "dev_set_name" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x20978fb9, "idr_find" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x6d71399f, "try_module_get" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "ED0BE67B5E5615CBF59C08E");
