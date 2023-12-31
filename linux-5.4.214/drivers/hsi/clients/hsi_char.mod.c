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
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x86f434e2, "driver_unregister" },
	{ 0x6918e337, "hsi_register_client_driver" },
	{ 0xc5850110, "printk" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x5314ccb0, "cdev_add" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xbec0cf29, "cdev_init" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x6ae0ec27, "hsi_release_port" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x26126725, "hsi_claim_port" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xcd9da09, "hsi_alloc_msg" },
	{ 0x2b764ae7, "hsi_async" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x441a316d, "hsi_free_msg" },
	{ 0x37a0cba, "kfree" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xad8df8fd, "cdev_del" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "hsi");


MODULE_INFO(srcversion, "AA2716C2CB9DAFD0A30FE4E");
