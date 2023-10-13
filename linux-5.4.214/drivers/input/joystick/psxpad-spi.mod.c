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
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x66c54ff1, "input_event" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x586583b8, "spi_sync" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x9962bc44, "pm_runtime_enable" },
	{ 0x4fb38246, "input_register_polled_device" },
	{ 0xe21d630c, "spi_setup" },
	{ 0x84f5e5a5, "input_ff_create_memless" },
	{ 0x7ef2952e, "input_set_capability" },
	{ 0xd4419732, "input_set_abs_params" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xf333f957, "devm_input_allocate_polled_device" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x8bdf333d, "__pm_runtime_resume" },
	{ 0xe5b6e9e8, "__pm_runtime_idle" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "input-polldev,ff-memless");

MODULE_ALIAS("spi:psxpad-spi");

MODULE_INFO(srcversion, "31F1D922D1B07BD535886DA");
