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
	{ 0xa1c2b6d1, "devm_device_add_group" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x94a09154, "input_register_device" },
	{ 0xacdeb71f, "device_property_read_u32_array" },
	{ 0xc32e9ece, "input_mt_init_slots" },
	{ 0x6a0ea99a, "touchscreen_parse_properties" },
	{ 0xd4419732, "input_set_abs_params" },
	{ 0x7ef2952e, "input_set_capability" },
	{ 0x2cc132c2, "devm_input_allocate_device" },
	{ 0x33560c9e, "devm_add_action" },
	{ 0x2bf355c4, "devm_gpiod_get_optional" },
	{ 0x868b9359, "devm_regulator_get" },
	{ 0xb8b5aa45, "__devm_regmap_init_i2c" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x37a0cba, "kfree" },
	{ 0x5c9109de, "release_firmware" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x80500894, "request_firmware" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x54d0c27, "input_mt_sync_frame" },
	{ 0x90fade75, "input_mt_report_slot_state" },
	{ 0x66c54ff1, "input_event" },
	{ 0xd9729ca4, "regmap_bulk_read" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x96848186, "scnprintf" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xe2b72930, "regmap_bulk_write" },
	{ 0x69acdf38, "memcpy" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb35586ed, "i2c_transfer" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x1643a127, "regulator_disable" },
	{ 0xe23f1472, "gpiod_set_value" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x904a8908, "regmap_write" },
	{ 0xc4fb10cd, "gpiod_set_value_cansleep" },
	{ 0xf9a482f9, "msleep" },
	{ 0x12a38747, "usleep_range" },
	{ 0xfe543c51, "regulator_enable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:HIDP0001:*");
MODULE_ALIAS("i2c:hideep_ts");

MODULE_INFO(srcversion, "D7667A9DCF24368AE22801A");
