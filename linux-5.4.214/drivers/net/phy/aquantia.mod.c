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
	{ 0xf9a482f9, "msleep" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xfbe42f54, "phy_read_mmd" },
	{ 0x56470118, "__warn_printk" },
	{ 0xbb3beeb1, "phy_drivers_register" },
	{ 0x249229e4, "genphy_c45_pma_setup_forced" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xdd64e639, "strscpy" },
	{ 0xd15ff8ae, "devm_hwmon_device_register_with_info" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x11089ac7, "_ctype" },
	{ 0x8087503, "phy_modify_mmd_changed" },
	{ 0x7e9d161b, "phy_modify_mmd" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x4346ccde, "genphy_c45_check_and_restart_aneg" },
	{ 0xb403c66d, "devm_kstrdup" },
	{ 0x740bb1f6, "phy_drivers_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xf55aa50c, "phy_write_mmd" },
	{ 0x446a5be8, "genphy_c45_an_config_aneg" },
	{ 0xddcd8934, "genphy_c45_read_status" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x113de0, "phy_set_max_speed" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("mdio:0000001110100001101101000100????");
MODULE_ALIAS("mdio:0000001110100001101101000110????");
MODULE_ALIAS("mdio:0000001110100001101101001010????");
MODULE_ALIAS("mdio:0000001110100001101101001101????");
MODULE_ALIAS("mdio:0000001110100001101101001110????");
MODULE_ALIAS("mdio:0000001110100001101101011100????");
MODULE_ALIAS("mdio:0000001110100001101101001011????");

MODULE_INFO(srcversion, "5803F56B6131CDEBD705466");
