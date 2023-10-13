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
	{ 0x65e33f30, "fwnode_handle_put" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x4fb38246, "input_register_polled_device" },
	{ 0x61853e9a, "device_property_present" },
	{ 0xf333f957, "devm_input_allocate_polled_device" },
	{ 0x76f87430, "fwnode_property_read_u32_array" },
	{ 0xe8c403, "device_get_next_child_node" },
	{ 0xa0e37b89, "device_get_child_node_count" },
	{ 0xacdeb71f, "device_property_read_u32_array" },
	{ 0x552385d9, "iio_get_channel_type" },
	{ 0xde6c92a5, "devm_iio_channel_get" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x66c54ff1, "input_event" },
	{ 0x5bfbdd92, "iio_read_channel_processed" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "input-polldev,industrialio");


MODULE_INFO(srcversion, "C4B8EBAC856BA933DFDE3EA");
