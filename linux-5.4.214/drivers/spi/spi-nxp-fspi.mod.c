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
	{ 0xfdb9b629, "ioread32be" },
	{ 0xe484e35f, "ioread32" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xe419bc99, "iowrite32be" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x8e17faf3, "put_device" },
	{ 0x15051d2b, "__spi_alloc_controller" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cnxp,lx2160a-fspi");
MODULE_ALIAS("of:N*T*Cnxp,lx2160a-fspiC*");

MODULE_INFO(srcversion, "76B765ED4BE76B5E521B6CB");
