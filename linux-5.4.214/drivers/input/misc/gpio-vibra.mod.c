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
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x1643a127, "regulator_disable" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xc4fb10cd, "gpiod_set_value_cansleep" },
	{ 0xfe543c51, "regulator_enable" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x94a09154, "input_register_device" },
	{ 0x84f5e5a5, "input_ff_create_memless" },
	{ 0x7ef2952e, "input_set_capability" },
	{ 0xa08d547b, "devm_gpiod_get" },
	{ 0x868b9359, "devm_regulator_get" },
	{ 0x2cc132c2, "devm_input_allocate_device" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ff-memless");


MODULE_INFO(srcversion, "26F3243B941D19655257690");
