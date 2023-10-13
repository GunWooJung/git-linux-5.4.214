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
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xfd672d72, "watchdog_register_device" },
	{ 0xb5bb1c12, "watchdog_set_restart_priority" },
	{ 0x4ab741fd, "watchdog_init_timeout" },
	{ 0x25ce0c78, "__devm_reset_control_get" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x6164d63, "devm_clk_get" },
	{ 0xc423de90, "devm_platform_ioremap_resource" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xb2210d64, "reset_control_deassert" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x6c4b6684, "reset_control_assert" },
	{ 0x4d290b16, "watchdog_unregister_device" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "DD257F7BC5F1D4FBF173C87");
