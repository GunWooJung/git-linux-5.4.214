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
	{ 0xd111bb59, "_dev_info" },
	{ 0x671b6dd3, "spi_bitbang_start" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x47229b5c, "gpio_request" },
	{ 0xe66f8cb1, "gpiod_direction_output_raw" },
	{ 0x7e73a43b, "platform_get_irq" },
	{ 0xc423de90, "devm_platform_ioremap_resource" },
	{ 0x15051d2b, "__spi_alloc_controller" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xffb817fb, "gpiod_set_raw_value" },
	{ 0xf37d2c0b, "gpio_to_desc" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x29361773, "complete" },
	{ 0x8e17faf3, "put_device" },
	{ 0xfe990052, "gpio_free" },
	{ 0xedd81743, "spi_bitbang_stop" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "spi-bitbang");


MODULE_INFO(srcversion, "7265B217EEE8C0240D1189A");
