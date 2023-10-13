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
	{ 0x6eed2630, "param_array_ops" },
	{ 0xa15b8bbf, "parport_unregister_driver" },
	{ 0xb946a912, "__parport_register_driver" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc5850110, "printk" },
	{ 0x4e97c8d9, "input_free_device" },
	{ 0x94a09154, "input_register_device" },
	{ 0xd4419732, "input_set_abs_params" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x4f55cb4, "input_allocate_device" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xc97796d4, "parport_register_dev_model" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66c54ff1, "input_event" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x16b41dd, "parport_claim" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x1f85bb35, "parport_release" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x37a0cba, "kfree" },
	{ 0x60d9cb33, "parport_unregister_device" },
	{ 0x2ab40469, "input_unregister_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "parport");


MODULE_INFO(srcversion, "AD92C1002DBA71D7E7C32B1");
