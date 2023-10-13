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
	{ 0x9a4c322, "_dev_err" },
	{ 0x94a09154, "input_register_device" },
	{ 0xd4419732, "input_set_abs_params" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x2cc132c2, "devm_input_allocate_device" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xa41a2f24, "pm860x_reg_write" },
	{ 0x7e73a43b, "platform_get_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x66c54ff1, "input_event" },
	{ 0xc5915462, "pm860x_bulk_read" },
	{ 0xcb045c8, "pm860x_set_bits" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "60B686924D2D48E9C04A6A8");
