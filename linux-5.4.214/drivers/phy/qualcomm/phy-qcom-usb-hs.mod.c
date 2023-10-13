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
	{ 0x6d5bd8c7, "ulpi_unregister_driver" },
	{ 0x5c28379e, "__ulpi_register_driver" },
	{ 0xe686f119, "extcon_register_notifier" },
	{ 0x8d9c9375, "extcon_get_state" },
	{ 0x24f39c39, "reset_control_reset" },
	{ 0x72f16fbc, "regulator_set_voltage" },
	{ 0xfe543c51, "regulator_enable" },
	{ 0x75d20c4, "regulator_set_load" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x4d671ba3, "__devm_of_phy_provider_register" },
	{ 0x7d73f13, "of_phy_simple_xlate" },
	{ 0x2799955c, "extcon_get_edev_by_phandle" },
	{ 0x66340e4a, "devm_phy_create" },
	{ 0x25ce0c78, "__devm_reset_control_get" },
	{ 0x868b9359, "devm_regulator_get" },
	{ 0x6164d63, "devm_clk_get" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x1643a127, "regulator_disable" },
	{ 0x5efe2742, "extcon_unregister_notifier" },
	{ 0xf4c27864, "ulpi_write" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ulpi");

MODULE_ALIAS("of:N*T*Cqcom,usb-hs-phy");
MODULE_ALIAS("of:N*T*Cqcom,usb-hs-phyC*");

MODULE_INFO(srcversion, "76A2088D3C1B32B420C4F3E");
