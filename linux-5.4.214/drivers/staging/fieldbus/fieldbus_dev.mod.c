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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0xad8df8fd, "cdev_del" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xbec0cf29, "cdev_init" },
	{ 0x91fc7183, "generic_file_llseek" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xaaf8f961, "kobject_uevent" },
	{ 0x14e23ddd, "device_destroy" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0xc5850110, "printk" },
	{ 0xa191fd37, "class_unregister" },
	{ 0xffb7c514, "ida_free" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xd267dbfb, "device_create" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x5fd264df, "__class_register" },
	{ 0x5314ccb0, "cdev_add" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x37a0cba, "kfree" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xe7a02573, "ida_alloc_range" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "EE867CBF5C4E9C206112EF0");
