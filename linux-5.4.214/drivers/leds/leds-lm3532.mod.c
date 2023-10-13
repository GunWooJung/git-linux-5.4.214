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
	{ 0xd111bb59, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xca2ca1f5, "device_property_read_u8_array" },
	{ 0x65e33f30, "fwnode_handle_put" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0x9b9a702f, "devm_led_classdev_register_ext" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x14efa785, "fwnode_property_read_string" },
	{ 0xc70a5bf2, "fwnode_property_present" },
	{ 0x76f87430, "fwnode_property_read_u32_array" },
	{ 0xe8c403, "device_get_next_child_node" },
	{ 0xacdeb71f, "device_property_read_u32_array" },
	{ 0x868b9359, "devm_regulator_get" },
	{ 0x2bf355c4, "devm_gpiod_get_optional" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xb8b5aa45, "__devm_regmap_init_i2c" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xa0e37b89, "device_get_child_node_count" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x904a8908, "regmap_write" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xfe543c51, "regulator_enable" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x1643a127, "regulator_disable" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0x127260fc, "gpiod_direction_output" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:lm3532-led");
MODULE_ALIAS("of:N*T*Cti,lm3532");
MODULE_ALIAS("of:N*T*Cti,lm3532C*");

MODULE_INFO(srcversion, "C36D594631B2C9E5BE2B2F8");
