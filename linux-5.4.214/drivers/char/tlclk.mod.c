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
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x35775925, "misc_deregister" },
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x56cf6cd9, "platform_device_register_full" },
	{ 0x4b2e0ffe, "misc_register" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x85bd1608, "__request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x37a0cba, "kfree" },
	{ 0xbce3803, "__register_chrdev" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0xc5850110, "printk" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xa916b694, "strnlen" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "33DDEBC04F81220C0AE3079");
