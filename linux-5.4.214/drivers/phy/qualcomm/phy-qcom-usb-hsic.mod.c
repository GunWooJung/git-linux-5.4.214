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
	{ 0x45885813, "pinctrl_select_state" },
	{ 0x2a456e25, "pinctrl_lookup_state" },
	{ 0xf4c27864, "ulpi_write" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x4d671ba3, "__devm_of_phy_provider_register" },
	{ 0x7d73f13, "of_phy_simple_xlate" },
	{ 0x66340e4a, "devm_phy_create" },
	{ 0x6164d63, "devm_clk_get" },
	{ 0x5850d525, "devm_pinctrl_get" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ulpi");

MODULE_ALIAS("of:N*T*Cqcom,usb-hsic-phy");
MODULE_ALIAS("of:N*T*Cqcom,usb-hsic-phyC*");

MODULE_INFO(srcversion, "79925B2C4A8C0142BDB5479");
