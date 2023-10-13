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
	{ 0x190aaef4, "serio_unregister_driver" },
	{ 0x6f04f2b0, "__serio_register_driver" },
	{ 0xa1d6c8f1, "i2c_new_device" },
	{ 0x5a921311, "strncmp" },
	{ 0x3656c243, "i2c_add_adapter" },
	{ 0x5792f848, "strlcpy" },
	{ 0x349cba85, "strchr" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xdab91ed4, "serio_open" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x6a6e05bf, "kstrtou8" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x37a0cba, "kfree" },
	{ 0xa80e6ce6, "serio_close" },
	{ 0x3afc0e60, "i2c_del_adapter" },
	{ 0x2b55d71e, "i2c_unregister_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("serio:ty02pr34id*ex*");

MODULE_INFO(srcversion, "3F5A3BBF7246C243ACC1E38");
