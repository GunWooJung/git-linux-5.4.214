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
	{ 0xa15b8bbf, "parport_unregister_driver" },
	{ 0xb946a912, "__parport_register_driver" },
	{ 0x2ab40469, "input_unregister_device" },
	{ 0x60d9cb33, "parport_unregister_device" },
	{ 0x4e97c8d9, "input_free_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc5850110, "printk" },
	{ 0x94a09154, "input_register_device" },
	{ 0xd4419732, "input_set_abs_params" },
	{ 0x4f55cb4, "input_allocate_device" },
	{ 0x1ee7d3cd, "hrtimer_init" },
	{ 0xbb77aa55, "parport_negotiate" },
	{ 0xc97796d4, "parport_register_dev_model" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66c54ff1, "input_event" },
	{ 0xfbdfc558, "hrtimer_start_range_ns" },
	{ 0x7c23703, "hrtimer_try_to_cancel" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x16b41dd, "parport_claim" },
	{ 0x1f85bb35, "parport_release" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "parport");


MODULE_INFO(srcversion, "B3DB6B3396D41A54F2275C2");
