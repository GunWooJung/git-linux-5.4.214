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
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xb372d8f7, "led_classdev_register_ext" },
	{ 0x904a8908, "regmap_write" },
	{ 0x14efa785, "fwnode_property_read_string" },
	{ 0x76f87430, "fwnode_property_read_u32_array" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe8c403, "device_get_next_child_node" },
	{ 0xa0e37b89, "device_get_child_node_count" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x6b2998d4, "led_classdev_unregister" },
	{ 0xced72aae, "ti_lmu_common_set_brightness" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "leds-ti-lmu-common");

MODULE_ALIAS("of:N*T*Cti,lm36274-backlight");
MODULE_ALIAS("of:N*T*Cti,lm36274-backlightC*");

MODULE_INFO(srcversion, "A6788D4C1B5CFDE329E4A4D");
