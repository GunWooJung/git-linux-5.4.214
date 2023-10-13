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
	{ 0x5ae8a115, "noop_llseek" },
	{ 0x131e5561, "param_ops_charp" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0xa15b8bbf, "parport_unregister_driver" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0xb4b1a06b, "class_destroy" },
	{ 0xb946a912, "__parport_register_driver" },
	{ 0x5328374d, "__class_create" },
	{ 0xbce3803, "__register_chrdev" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x5a921311, "strncmp" },
	{ 0x977f9389, "parport_read" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x1000e51, "schedule" },
	{ 0x89a18d3b, "parport_write" },
	{ 0xbf908261, "parport_set_timeout" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xd267dbfb, "device_create" },
	{ 0xc97796d4, "parport_register_dev_model" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x593c1bac, "__x86_indirect_thunk_rbx" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xc5850110, "printk" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x37a0cba, "kfree" },
	{ 0xbb77aa55, "parport_negotiate" },
	{ 0x60d9cb33, "parport_unregister_device" },
	{ 0x14e23ddd, "device_destroy" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0x1f85bb35, "parport_release" },
	{ 0x99ef0e71, "parport_claim_or_block" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "parport");


MODULE_INFO(srcversion, "65D223AC29237E9ED531D08");
