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
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x12a38747, "usleep_range" },
	{ 0x2048bf8c, "gpiod_get_value" },
	{ 0x54d0c27, "input_mt_sync_frame" },
	{ 0x90fade75, "input_mt_report_slot_state" },
	{ 0x66c54ff1, "input_event" },
	{ 0x84aa8e4a, "input_mt_assign_slots" },
	{ 0xcf9b558d, "touchscreen_set_mt_pos" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xcb315f1c, "i2c_smbus_read_i2c_block_data" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x94a09154, "input_register_device" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x2bf355c4, "devm_gpiod_get_optional" },
	{ 0xe8d567ba, "gpiod_set_consumer_name" },
	{ 0xa08d547b, "devm_gpiod_get" },
	{ 0x33560c9e, "devm_add_action" },
	{ 0x868b9359, "devm_regulator_get" },
	{ 0xc32e9ece, "input_mt_init_slots" },
	{ 0x6a0ea99a, "touchscreen_parse_properties" },
	{ 0xd4419732, "input_set_abs_params" },
	{ 0xacdeb71f, "device_property_read_u32_array" },
	{ 0x2cc132c2, "devm_input_allocate_device" },
	{ 0x61853e9a, "device_property_present" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xe23f1472, "gpiod_set_value" },
	{ 0x1643a127, "regulator_disable" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xfe543c51, "regulator_enable" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xf9a482f9, "msleep" },
	{ 0x7931933d, "i2c_smbus_write_byte_data" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:bu21013_tp");

MODULE_INFO(srcversion, "B7F0E14B6767527AF6B965E");
