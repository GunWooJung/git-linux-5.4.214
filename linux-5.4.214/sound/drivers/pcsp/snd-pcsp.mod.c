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
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xdc21e866, "hrtimer_forward" },
	{ 0x691edb72, "snd_pcm_period_elapsed" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x75943e25, "i8253_lock" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x1d027e4b, "snd_pcm_format_signed" },
	{ 0x131e5561, "param_ops_charp" },
	{ 0xfbdfc558, "hrtimer_start_range_ns" },
	{ 0x99f86ed6, "snd_device_new" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xc5850110, "printk" },
	{ 0x585079d2, "snd_pcm_set_ops" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x486a27d9, "snd_pcm_lib_free_pages" },
	{ 0xdaed65a6, "snd_pcm_lib_ioctl" },
	{ 0x521a011a, "snd_pcm_lib_malloc_pages" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x26be0b39, "snd_card_new" },
	{ 0x406c4cb1, "hrtimer_resolution" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x94a09154, "input_register_device" },
	{ 0x4d16dbe5, "snd_ctl_new1" },
	{ 0x4e97c8d9, "input_free_device" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0xba497f13, "loops_per_jiffy" },
	{ 0x2ab40469, "input_unregister_device" },
	{ 0x1ee7d3cd, "hrtimer_init" },
	{ 0x2ac0bc7c, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0x3d549164, "snd_card_free" },
	{ 0x2c3bd8c1, "snd_card_register" },
	{ 0xe1f25fb, "snd_pcm_new" },
	{ 0xff94b8b9, "snd_ctl_add" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x4f55cb4, "input_allocate_device" },
};

MODULE_INFO(depends, "snd-pcm,snd");


MODULE_INFO(srcversion, "00541B5F47E452FD67D9F0F");
