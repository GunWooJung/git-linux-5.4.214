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
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xc70a5bf2, "fwnode_property_present" },
	{ 0x14efa785, "fwnode_property_read_string" },
	{ 0x76f87430, "fwnode_property_read_u32_array" },
	{ 0x53ea5903, "device_property_read_string" },
	{ 0xacdeb71f, "device_property_read_u32_array" },
	{ 0x61853e9a, "device_property_present" },
	{ 0xa0e37b89, "device_get_child_node_count" },
	{ 0xda08d695, "devm_fwnode_get_index_gpiod_from_child" },
	{ 0xe8c403, "device_get_next_child_node" },
	{ 0x4fb38246, "input_register_polled_device" },
	{ 0x65e33f30, "fwnode_handle_put" },
	{ 0xd4419732, "input_set_abs_params" },
	{ 0x7ef2952e, "input_set_capability" },
	{ 0xf37d2c0b, "gpio_to_desc" },
	{ 0x640d43e9, "devm_gpio_request_one" },
	{ 0xf333f957, "devm_input_allocate_polled_device" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x9e379360, "gpiod_get_value_cansleep" },
	{ 0x66c54ff1, "input_event" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "input-polldev");

MODULE_ALIAS("of:N*T*Cgpio-keys-polled");
MODULE_ALIAS("of:N*T*Cgpio-keys-polledC*");

MODULE_INFO(srcversion, "ADCCFC7978BDDC83FFA2B4C");
