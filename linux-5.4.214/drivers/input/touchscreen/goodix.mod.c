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
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0xaf7ad1b4, "request_firmware_nowait" },
	{ 0x15f68f5d, "devm_kasprintf" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0x33560c9e, "devm_add_action" },
	{ 0xfe543c51, "regulator_enable" },
	{ 0x2bf355c4, "devm_gpiod_get_optional" },
	{ 0x868b9359, "devm_regulator_get" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xfd94814e, "complete_all" },
	{ 0x5c9109de, "release_firmware" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x94a09154, "input_register_device" },
	{ 0xc32e9ece, "input_mt_init_slots" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x6a0ea99a, "touchscreen_parse_properties" },
	{ 0xd4419732, "input_set_abs_params" },
	{ 0x7ef2952e, "input_set_capability" },
	{ 0x2cc132c2, "devm_input_allocate_device" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xdb7345ba, "input_alloc_absinfo" },
	{ 0x1643a127, "regulator_disable" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x7cf7aeda, "devm_free_irq" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x33e16627, "touchscreen_report_pos" },
	{ 0x90fade75, "input_mt_report_slot_state" },
	{ 0x54d0c27, "input_mt_sync_frame" },
	{ 0x66c54ff1, "input_event" },
	{ 0x12a38747, "usleep_range" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb35586ed, "i2c_transfer" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0xa35e10d1, "gpiod_direction_input" },
	{ 0xf9a482f9, "msleep" },
	{ 0x127260fc, "gpiod_direction_output" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:GDIX1001:*");
MODULE_ALIAS("acpi*:GDIX1002:*");
MODULE_ALIAS("i2c:GDIX1001:00");

MODULE_INFO(srcversion, "48952AB658CFBEEDCCB12CD");
