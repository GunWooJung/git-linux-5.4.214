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
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xc32e9ece, "input_mt_init_slots" },
	{ 0x94a09154, "input_register_device" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa916b694, "strnlen" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xdb7345ba, "input_alloc_absinfo" },
	{ 0xd4419732, "input_set_abs_params" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4e97c8d9, "input_free_device" },
	{ 0xdab91ed4, "serio_open" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x4f55cb4, "input_allocate_device" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x29361773, "complete" },
	{ 0xa94ccfc0, "input_mt_report_pointer_emulation" },
	{ 0x90fade75, "input_mt_report_slot_state" },
	{ 0x66c54ff1, "input_event" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x37a0cba, "kfree" },
	{ 0x2ab40469, "input_unregister_device" },
	{ 0xa80e6ce6, "serio_close" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("serio:ty02pr39id*ex*");

MODULE_INFO(srcversion, "9195C828E91CBC467A96D99");
