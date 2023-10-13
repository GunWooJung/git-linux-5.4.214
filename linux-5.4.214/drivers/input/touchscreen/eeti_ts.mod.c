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
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x94a09154, "input_register_device" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x2bf355c4, "devm_gpiod_get_optional" },
	{ 0x6a0ea99a, "touchscreen_parse_properties" },
	{ 0xd4419732, "input_set_abs_params" },
	{ 0x7ef2952e, "input_set_capability" },
	{ 0x2cc132c2, "devm_input_allocate_device" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x9e379360, "gpiod_get_value_cansleep" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x66c54ff1, "input_event" },
	{ 0x33e16627, "touchscreen_report_pos" },
	{ 0x4fc58c0c, "i2c_transfer_buffer_flags" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:eeti_ts");

MODULE_INFO(srcversion, "EB98619804FA8C16609FCD7");
