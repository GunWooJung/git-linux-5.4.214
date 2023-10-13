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
	{ 0x8bdf333d, "__pm_runtime_resume" },
	{ 0xfe543c51, "regulator_enable" },
	{ 0x1643a127, "regulator_disable" },
	{ 0x8b3e9ab1, "devm_regulator_put" },
	{ 0x9b9a702f, "devm_led_classdev_register_ext" },
	{ 0x868b9359, "devm_regulator_get" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x9962bc44, "pm_runtime_enable" },
	{ 0xa1c2b6d1, "devm_device_add_group" },
	{ 0x94a09154, "input_register_device" },
	{ 0x33560c9e, "devm_add_action" },
	{ 0xeb94b6dd, "regulator_bulk_enable" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x7522f3ba, "irq_modify_status" },
	{ 0xc32e9ece, "input_mt_init_slots" },
	{ 0x61853e9a, "device_property_present" },
	{ 0xd4419732, "input_set_abs_params" },
	{ 0x6a0ea99a, "touchscreen_parse_properties" },
	{ 0x7ef2952e, "input_set_capability" },
	{ 0x2cc132c2, "devm_input_allocate_device" },
	{ 0xec688f13, "devm_regulator_bulk_get" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe5b6e9e8, "__pm_runtime_idle" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x94c51c70, "regulator_is_enabled" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x90fade75, "input_mt_report_slot_state" },
	{ 0x66c54ff1, "input_event" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x29361773, "complete" },
	{ 0xb35586ed, "i2c_transfer" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xcb315f1c, "i2c_smbus_read_i2c_block_data" },
	{ 0x5bb6172e, "regulator_bulk_disable" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xbca0b1e, "i2c_smbus_write_byte" },
	{ 0xfb4ec2db, "__pm_runtime_disable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:stmfts");

MODULE_INFO(srcversion, "5A9C94FF38E43E89237237C");
