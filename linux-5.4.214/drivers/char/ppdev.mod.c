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
	{ 0x5c42b5ca, "no_llseek" },
	{ 0xa15b8bbf, "parport_unregister_driver" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0xb4b1a06b, "class_destroy" },
	{ 0xb946a912, "__parport_register_driver" },
	{ 0x5328374d, "__class_create" },
	{ 0xbce3803, "__register_chrdev" },
	{ 0x977f9389, "parport_read" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x89a18d3b, "parport_write" },
	{ 0xaf7d0f48, "current_task" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x188ea314, "jiffies_to_timespec64" },
	{ 0xbf908261, "parport_set_timeout" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x83df46f6, "parport_put_port" },
	{ 0xc97796d4, "parport_register_dev_model" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xc575cf3f, "parport_find_number" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x99ef0e71, "parport_claim_or_block" },
	{ 0x37a0cba, "kfree" },
	{ 0xffb7c514, "ida_free" },
	{ 0x60d9cb33, "parport_unregister_device" },
	{ 0x1f85bb35, "parport_release" },
	{ 0xbb77aa55, "parport_negotiate" },
	{ 0xc5850110, "printk" },
	{ 0xd267dbfb, "device_create" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x14e23ddd, "device_destroy" },
	{ 0x5a921311, "strncmp" },
	{ 0x754d539c, "strlen" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "parport");


MODULE_INFO(srcversion, "2BA05E7C2A45BC03D2B46ED");
