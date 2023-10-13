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
	{ 0x68a41536, "param_ops_bool" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x70648c92, "devm_watchdog_register_device" },
	{ 0x4ab741fd, "watchdog_init_timeout" },
	{ 0x127260fc, "gpiod_direction_output" },
	{ 0x2048bf8c, "gpiod_get_value" },
	{ 0xe8d567ba, "gpiod_set_consumer_name" },
	{ 0x222c28da, "devm_gpiod_get_index" },
	{ 0xfef787f1, "gpiod_count" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xe23f1472, "gpiod_set_value" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmen,a021-wdt");
MODULE_ALIAS("of:N*T*Cmen,a021-wdtC*");

MODULE_INFO(srcversion, "DB60F8A578926F50185DE23");
