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
	{ 0x3add6788, "fuse_file_poll" },
	{ 0x5ae8a115, "noop_llseek" },
	{ 0x35775925, "misc_deregister" },
	{ 0xb4b1a06b, "class_destroy" },
	{ 0x4b2e0ffe, "misc_register" },
	{ 0x5328374d, "__class_create" },
	{ 0x5ce6898c, "fuse_dev_operations" },
	{ 0x98d39476, "fuse_dev_free" },
	{ 0x85d80942, "fuse_simple_background" },
	{ 0xa52ae5eb, "alloc_pages_current" },
	{ 0x833a5fed, "fuse_dev_alloc_install" },
	{ 0x6bfe1415, "fuse_conn_init" },
	{ 0x5c6fb639, "fuse_dev_fiq_ops" },
	{ 0xc5850110, "printk" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0xaaf8f961, "kobject_uevent" },
	{ 0x5314ccb0, "cdev_add" },
	{ 0x825954a7, "cdev_alloc" },
	{ 0x5fe1c3f, "device_add" },
	{ 0x8e17faf3, "put_device" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xdb2d5c16, "dev_set_name" },
	{ 0x535449e7, "device_initialize" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x77bc13a0, "strim" },
	{ 0x85df9b6c, "strsep" },
	{ 0x754d539c, "strlen" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7ea3fb3a, "__free_pages" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x855d0a8f, "fuse_do_ioctl" },
	{ 0x78045f69, "fuse_do_open" },
	{ 0xd9326c9e, "fuse_conn_get" },
	{ 0xb35be210, "fuse_sync_release" },
	{ 0xacc363cb, "fuse_dev_release" },
	{ 0xe793cffb, "fuse_conn_put" },
	{ 0xad8df8fd, "cdev_del" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x5a4e4713, "device_unregister" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd7feba5, "fuse_abort_conn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x112053ed, "fuse_direct_io" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x37a0cba, "kfree" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D54D422AFBC0525746F56A9");
