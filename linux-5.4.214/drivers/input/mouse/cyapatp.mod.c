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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xf9a482f9, "msleep" },
	{ 0xfb4ec2db, "__pm_runtime_disable" },
	{ 0x1c7db409, "i2c_smbus_read_byte_data" },
	{ 0x9a34a2b, "crc_itu_t" },
	{ 0x18ed72f8, "__pm_runtime_use_autosuspend" },
	{ 0x754d539c, "strlen" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0xcb315f1c, "i2c_smbus_read_i2c_block_data" },
	{ 0x7c60d490, "__pm_runtime_suspend" },
	{ 0x1643a127, "regulator_disable" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x7931933d, "i2c_smbus_write_byte_data" },
	{ 0xb35586ed, "i2c_transfer" },
	{ 0xdb7345ba, "input_alloc_absinfo" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x8bdf333d, "__pm_runtime_resume" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf21017d9, "mutex_trylock" },
	{ 0xd4419732, "input_set_abs_params" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x66c54ff1, "input_event" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xb5136dc7, "mutex_lock_interruptible" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xfb6eedf9, "power_group_name" },
	{ 0x1e50ff17, "sysfs_merge_group" },
	{ 0xc32e9ece, "input_mt_init_slots" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x3bcc4fb8, "sysfs_unmerge_group" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x33560c9e, "devm_add_action" },
	{ 0x868b9359, "devm_regulator_get" },
	{ 0x53b9230d, "i2c_smbus_xfer" },
	{ 0x43830476, "i2c_smbus_read_block_data" },
	{ 0x12a38747, "usleep_range" },
	{ 0x9962bc44, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x94a09154, "input_register_device" },
	{ 0x30c1302a, "pm_wakeup_dev_event" },
	{ 0x4af6ddf0, "kstrtou16" },
	{ 0xb98c9772, "__pm_runtime_set_status" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x4fc58c0c, "i2c_transfer_buffer_flags" },
	{ 0xa1c2b6d1, "devm_device_add_group" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x69acdf38, "memcpy" },
	{ 0x2ab40469, "input_unregister_device" },
	{ 0x2cc132c2, "devm_input_allocate_device" },
	{ 0x90fade75, "input_mt_report_slot_state" },
	{ 0x96848186, "scnprintf" },
	{ 0x80500894, "request_firmware" },
	{ 0x11c66087, "pm_runtime_set_autosuspend_delay" },
	{ 0x54d0c27, "input_mt_sync_frame" },
	{ 0x222e7ce2, "sysfs_streq" },
	{ 0x81555aa5, "i2c_smbus_write_i2c_block_data" },
	{ 0x29361773, "complete" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x5c9109de, "release_firmware" },
	{ 0xfe543c51, "regulator_enable" },
};

MODULE_INFO(depends, "crc-itu-t");

MODULE_ALIAS("acpi*:CYAP0000:*");
MODULE_ALIAS("acpi*:CYAP0001:*");
MODULE_ALIAS("acpi*:CYAP0002:*");
MODULE_ALIAS("i2c:cyapa");

MODULE_INFO(srcversion, "6CBC64D76CBE42C5F581B5A");
