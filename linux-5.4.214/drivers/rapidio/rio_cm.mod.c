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
	{ 0x765395c3, "param_ops_int" },
	{ 0xac51bbbd, "rio_bus_type" },
	{ 0x3170987e, "rio_mport_class" },
	{ 0x5a4e4713, "device_unregister" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xb4b1a06b, "class_destroy" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x4f4feb31, "class_interface_unregister" },
	{ 0x4d45db58, "subsys_interface_unregister" },
	{ 0xac1a55be, "unregister_reboot_notifier" },
	{ 0xad8df8fd, "cdev_del" },
	{ 0xd267dbfb, "device_create" },
	{ 0x5314ccb0, "cdev_add" },
	{ 0xbec0cf29, "cdev_init" },
	{ 0x3517383e, "register_reboot_notifier" },
	{ 0x31ad2250, "subsys_interface_register" },
	{ 0x4b17f185, "class_interface_register" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x5328374d, "__class_create" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x4005f38c, "try_wait_for_completion" },
	{ 0x5a4896a8, "__put_user_2" },
	{ 0x8f9c199c, "__get_user_2" },
	{ 0x53b954a2, "up_read" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x668b19a1, "down_read" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x91f44510, "idr_alloc_cyclic" },
	{ 0x954f099c, "idr_preload" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7665a95b, "idr_remove" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0xfd94814e, "complete_all" },
	{ 0xc5850110, "printk" },
	{ 0x647771e9, "rio_release_outb_mbox" },
	{ 0x5110091e, "rio_release_inb_mbox" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x7c8c9b2c, "rio_request_inb_mbox" },
	{ 0x528a41, "rio_request_outb_mbox" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x20978fb9, "idr_find" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x29361773, "complete" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x37a0cba, "kfree" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "022962BEF13599E9148A415");
