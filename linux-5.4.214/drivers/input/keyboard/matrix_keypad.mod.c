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
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x4e97c8d9, "input_free_device" },
	{ 0x4fc0c5ca, "device_init_wakeup" },
	{ 0x94a09154, "input_register_device" },
	{ 0xdbdb0e8b, "request_any_context_irq" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x7ef2952e, "input_set_capability" },
	{ 0x57ab91cb, "matrix_keypad_build_keymap" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x4f55cb4, "input_allocate_device" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x66c54ff1, "input_event" },
	{ 0x65489876, "gpiod_get_raw_value_cansleep" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xa35e10d1, "gpiod_direction_input" },
	{ 0x727b6403, "gpiod_set_raw_value_cansleep" },
	{ 0xe66f8cb1, "gpiod_direction_output_raw" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x2ab40469, "input_unregister_device" },
	{ 0xfe990052, "gpio_free" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xef3fd222, "gpiod_to_irq" },
	{ 0xf37d2c0b, "gpio_to_desc" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "matrix-keymap");


MODULE_INFO(srcversion, "BEECF11A9AAE07F003A4CAE");
