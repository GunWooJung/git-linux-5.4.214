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
	{ 0x49612599, "unregister_rpmsg_driver" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xb4b1a06b, "class_destroy" },
	{ 0xc5850110, "printk" },
	{ 0x37e2fcf0, "__register_rpmsg_driver" },
	{ 0x5328374d, "__class_create" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x6a58d2ee, "cdev_device_add" },
	{ 0xdb2d5c16, "dev_set_name" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xbec0cf29, "cdev_init" },
	{ 0x535449e7, "device_initialize" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x4a168d83, "rpmsg_trysend" },
	{ 0x87de5122, "rpmsg_send" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xc4a9f597, "_copy_from_iter_full" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x7beb3062, "_copy_to_iter" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xf5fd3f2c, "rpmsg_poll" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xc502ef3, "skb_queue_tail" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf89bc02c, "skb_put" },
	{ 0x92f8784b, "__alloc_skb" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xa123ef6d, "rpmsg_create_ept" },
	{ 0xd8e6cdd2, "kfree_skb" },
	{ 0x3b89b540, "skb_dequeue" },
	{ 0xe7a7a03f, "get_device" },
	{ 0x37a0cba, "kfree" },
	{ 0xffb7c514, "ida_free" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xf993bb30, "rpmsg_destroy_ept" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x8e17faf3, "put_device" },
	{ 0x93f79281, "cdev_device_del" },
	{ 0xfddb53c8, "device_for_each_child" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rpmsg_core");


MODULE_INFO(srcversion, "BBAEB40C1A8294EC54DC36C");
