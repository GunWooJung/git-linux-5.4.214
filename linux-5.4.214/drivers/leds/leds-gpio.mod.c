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
	{ 0xf37d2c0b, "gpio_to_desc" },
	{ 0x640d43e9, "devm_gpio_request_one" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x222c28da, "devm_gpiod_get_index" },
	{ 0x65e33f30, "fwnode_handle_put" },
	{ 0x14efa785, "fwnode_property_read_string" },
	{ 0xda08d695, "devm_fwnode_get_index_gpiod_from_child" },
	{ 0xe8c403, "device_get_next_child_node" },
	{ 0xe8d567ba, "gpiod_set_consumer_name" },
	{ 0xc70a5bf2, "fwnode_property_present" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xa0e37b89, "device_get_child_node_count" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9e379360, "gpiod_get_value_cansleep" },
	{ 0x9b9a702f, "devm_led_classdev_register_ext" },
	{ 0x127260fc, "gpiod_direction_output" },
	{ 0x322c2f92, "gpiod_cansleep" },
	{ 0xe23f1472, "gpiod_set_value" },
	{ 0xc4fb10cd, "gpiod_set_value_cansleep" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cgpio-leds");
MODULE_ALIAS("of:N*T*Cgpio-ledsC*");

MODULE_INFO(srcversion, "0B46879BE05BCD6BAC86B7E");
