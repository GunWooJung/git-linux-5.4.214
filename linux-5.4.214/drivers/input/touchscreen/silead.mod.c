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
	{ 0xfb4ec2db, "__pm_runtime_disable" },
	{ 0x2b6f0008, "pm_runtime_forbid" },
	{ 0x7c60d490, "__pm_runtime_suspend" },
	{ 0xa453352, "pm_runtime_allow" },
	{ 0x9962bc44, "pm_runtime_enable" },
	{ 0xb98c9772, "__pm_runtime_set_status" },
	{ 0x7ef2952e, "input_set_capability" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x94a09154, "input_register_device" },
	{ 0xc32e9ece, "input_mt_init_slots" },
	{ 0x6a0ea99a, "touchscreen_parse_properties" },
	{ 0xd4419732, "input_set_abs_params" },
	{ 0x2cc132c2, "devm_input_allocate_device" },
	{ 0x61853e9a, "device_property_present" },
	{ 0x2bf355c4, "devm_gpiod_get_optional" },
	{ 0x33560c9e, "devm_add_action" },
	{ 0xeb94b6dd, "regulator_bulk_enable" },
	{ 0xec688f13, "devm_regulator_bulk_get" },
	{ 0x53ea5903, "device_property_read_string" },
	{ 0xacdeb71f, "device_property_read_u32_array" },
	{ 0x754d539c, "strlen" },
	{ 0x11089ac7, "_ctype" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xeee38cc9, "acpi_match_device" },
	{ 0x15cb5620, "is_acpi_device_node" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x54d0c27, "input_mt_sync_frame" },
	{ 0x90fade75, "input_mt_report_slot_state" },
	{ 0x66c54ff1, "input_event" },
	{ 0x84aa8e4a, "input_mt_assign_slots" },
	{ 0xcf9b558d, "touchscreen_set_mt_pos" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x5c9109de, "release_firmware" },
	{ 0x81555aa5, "i2c_smbus_write_i2c_block_data" },
	{ 0x80500894, "request_firmware" },
	{ 0xc4fb10cd, "gpiod_set_value_cansleep" },
	{ 0x5bb6172e, "regulator_bulk_disable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xcb315f1c, "i2c_smbus_read_i2c_block_data" },
	{ 0x12a38747, "usleep_range" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7931933d, "i2c_smbus_write_byte_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:GSL1680:*");
MODULE_ALIAS("acpi*:GSL1688:*");
MODULE_ALIAS("acpi*:GSL3670:*");
MODULE_ALIAS("acpi*:GSL3675:*");
MODULE_ALIAS("acpi*:GSL3692:*");
MODULE_ALIAS("acpi*:MSSL1680:*");
MODULE_ALIAS("acpi*:MSSL0001:*");
MODULE_ALIAS("acpi*:MSSL0002:*");
MODULE_ALIAS("acpi*:MSSL0017:*");
MODULE_ALIAS("i2c:gsl1680");
MODULE_ALIAS("i2c:gsl1688");
MODULE_ALIAS("i2c:gsl3670");
MODULE_ALIAS("i2c:gsl3675");
MODULE_ALIAS("i2c:gsl3692");
MODULE_ALIAS("i2c:mssl1680");

MODULE_INFO(srcversion, "0948671F35D12695DE9EBA9");
