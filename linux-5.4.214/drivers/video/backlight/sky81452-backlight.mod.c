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
	{ 0x727b6403, "gpiod_set_raw_value_cansleep" },
	{ 0xf37d2c0b, "gpio_to_desc" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x640d43e9, "devm_gpio_request_one" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x41c10d3e, "devm_backlight_device_register" },
	{ 0x904a8908, "regmap_write" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x61651be, "strcat" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x754d539c, "strlen" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "4572BF3F32DFC523F551999");
