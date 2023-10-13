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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x4fc0c5ca, "device_init_wakeup" },
	{ 0x94a09154, "input_register_device" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x6a0ea99a, "touchscreen_parse_properties" },
	{ 0xd4419732, "input_set_abs_params" },
	{ 0x33560c9e, "devm_add_action" },
	{ 0x2bf355c4, "devm_gpiod_get_optional" },
	{ 0x2cc132c2, "devm_input_allocate_device" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3bd1fe4c, "device_get_match_data" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf77d11b6, "dev_pm_qos_remove_request" },
	{ 0x30432c2f, "dev_pm_qos_add_ancestor_request" },
	{ 0x66c54ff1, "input_event" },
	{ 0x33e16627, "touchscreen_report_pos" },
	{ 0xb35586ed, "i2c_transfer" },
	{ 0xc4fb10cd, "gpiod_set_value_cansleep" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Csitronix,st1232");
MODULE_ALIAS("of:N*T*Csitronix,st1232C*");
MODULE_ALIAS("of:N*T*Csitronix,st1633");
MODULE_ALIAS("of:N*T*Csitronix,st1633C*");
MODULE_ALIAS("i2c:st1232-ts");
MODULE_ALIAS("i2c:st1633-ts");

MODULE_INFO(srcversion, "AE986437452ED39F3C529B6");
