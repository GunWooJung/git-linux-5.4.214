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
	{ 0xa120d33c, "tty_unregister_ldisc" },
	{ 0x306af83c, "tty_register_ldisc" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8c039e40, "serio_unregister_port" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xc5850110, "printk" },
	{ 0xc466e83f, "__serio_register_port" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9f557cf7, "tty_name" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xc6cbbc89, "capable" },
	{ 0x37a0cba, "kfree" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x27e60eae, "serio_interrupt" },
	{ 0x6d334118, "__get_user_8" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E1AEAB73453EFB96B5C8594");
