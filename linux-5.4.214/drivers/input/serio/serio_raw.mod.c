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
	{ 0x190aaef4, "serio_unregister_driver" },
	{ 0x6f04f2b0, "__serio_register_driver" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x35775925, "misc_deregister" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xc3aaf0a9, "__put_user_1" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x4b2e0ffe, "misc_register" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xa80e6ce6, "serio_close" },
	{ 0xbdff3e7d, "mutex_lock_killable" },
	{ 0xdab91ed4, "serio_open" },
	{ 0xe7a7a03f, "get_device" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x167e7f9d, "__get_user_1" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x419892d3, "fasync_helper" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xde793eab, "kill_fasync" },
	{ 0x37a0cba, "kfree" },
	{ 0x8e17faf3, "put_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("serio:ty01pr*id*ex*");
MODULE_ALIAS("serio:ty06pr*id*ex*");

MODULE_INFO(srcversion, "EA688D9AD5AEE3436CE2D22");
