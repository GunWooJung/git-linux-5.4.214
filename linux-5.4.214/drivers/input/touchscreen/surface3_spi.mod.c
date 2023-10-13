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
	{ 0x86f434e2, "driver_unregister" },
	{ 0xf6dd8fef, "__spi_register_driver" },
	{ 0x54d0c27, "input_mt_sync_frame" },
	{ 0x90fade75, "input_mt_report_slot_state" },
	{ 0x20a18f36, "input_mt_get_slot_by_key" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x66c54ff1, "input_event" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x586583b8, "spi_sync" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x7ef2952e, "input_set_capability" },
	{ 0x94a09154, "input_register_device" },
	{ 0xc32e9ece, "input_mt_init_slots" },
	{ 0xdb7345ba, "input_alloc_absinfo" },
	{ 0xd4419732, "input_set_abs_params" },
	{ 0x2cc132c2, "devm_input_allocate_device" },
	{ 0x222c28da, "devm_gpiod_get_index" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xe21d630c, "spi_setup" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe23f1472, "gpiod_set_value" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:MSHW0037:*");

MODULE_INFO(srcversion, "C757A726CE279D1A15A9663");
