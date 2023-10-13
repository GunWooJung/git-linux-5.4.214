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
	{ 0xb93f6cd8, "most_stop_channel" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0x360781c, "most_deregister_configfs_subsys" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0xfd5e86d2, "most_register_component" },
	{ 0xaaf8f961, "kobject_uevent" },
	{ 0x14e23ddd, "device_destroy" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x3cb62fff, "most_put_mbo" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x317db7ec, "channel_has_mbo" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe125010, "most_deregister_component" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xffb7c514, "ida_free" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xd267dbfb, "device_create" },
	{ 0x7c36a9e6, "most_submit_mbo" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x5314ccb0, "cdev_add" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x2282fbaf, "most_get_mbo" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x4978ff76, "most_start_channel" },
	{ 0xb4b1a06b, "class_destroy" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x5328374d, "__class_create" },
	{ 0xa7d5f92e, "ida_destroy" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0x8392fb44, "most_register_configfs_subsys" },
};

MODULE_INFO(depends, "most_core");


MODULE_INFO(srcversion, "120C6F675E823CBBD012A12");
