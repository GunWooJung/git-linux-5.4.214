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
	{ 0x9a4c322, "_dev_err" },
	{ 0x9962bc44, "pm_runtime_enable" },
	{ 0x4f11e4e9, "pm_runtime_no_callbacks" },
	{ 0xb98c9772, "__pm_runtime_set_status" },
	{ 0xf0c5ce57, "ci_hdrc_add_device" },
	{ 0xb2210d64, "reset_control_deassert" },
	{ 0x12a38747, "usleep_range" },
	{ 0x6c4b6684, "reset_control_assert" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x41948231, "devm_reset_controller_register" },
	{ 0xc423de90, "devm_platform_ioremap_resource" },
	{ 0xd019c02a, "devm_clk_get_optional" },
	{ 0x6164d63, "devm_clk_get" },
	{ 0x25ce0c78, "__devm_reset_control_get" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x6275bdb0, "phy_exit" },
	{ 0x4cd53649, "phy_power_off" },
	{ 0xe484e35f, "ioread32" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xe27a5479, "phy_power_on" },
	{ 0x3b57f4f2, "phy_init" },
	{ 0xa16d5c05, "hw_phymode_configure" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x8d7d2ef9, "ci_hdrc_remove_device" },
	{ 0xfb4ec2db, "__pm_runtime_disable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ci_hdrc");

MODULE_ALIAS("of:N*T*Cqcom,ci-hdrc");
MODULE_ALIAS("of:N*T*Cqcom,ci-hdrcC*");

MODULE_INFO(srcversion, "6A1B7E08251D1670176A563");
