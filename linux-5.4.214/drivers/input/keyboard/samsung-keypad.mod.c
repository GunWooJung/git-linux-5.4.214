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
	{ 0x9a4c322, "_dev_err" },
	{ 0xca944cd, "devm_kfree" },
	{ 0x94a09154, "input_register_device" },
	{ 0x9962bc44, "pm_runtime_enable" },
	{ 0x4fc0c5ca, "device_init_wakeup" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x7e73a43b, "platform_get_irq" },
	{ 0x7ef2952e, "input_set_capability" },
	{ 0x57ab91cb, "matrix_keypad_build_keymap" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x6164d63, "devm_clk_get" },
	{ 0x8281b36, "devm_ioremap" },
	{ 0xd072dc20, "platform_get_resource" },
	{ 0x2cc132c2, "devm_input_allocate_device" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x66c54ff1, "input_event" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x2ab40469, "input_unregister_device" },
	{ 0xfb4ec2db, "__pm_runtime_disable" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xe5b6e9e8, "__pm_runtime_idle" },
	{ 0x8bdf333d, "__pm_runtime_resume" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x815588a6, "clk_enable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "matrix-keymap");

MODULE_ALIAS("platform:samsung-keypad");
MODULE_ALIAS("platform:s5pv210-keypad");

MODULE_INFO(srcversion, "7B4A5C84D6C53B47884AD4C");
