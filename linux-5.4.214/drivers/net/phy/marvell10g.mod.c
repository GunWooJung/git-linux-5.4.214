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
	{ 0x740bb1f6, "phy_drivers_unregister" },
	{ 0xbb3beeb1, "phy_drivers_register" },
	{ 0x61207f26, "genphy_c45_read_mdix" },
	{ 0xb51205b8, "genphy_c45_read_pma" },
	{ 0x3a6484d8, "phy_resolve_aneg_linkmode" },
	{ 0xfe1e9370, "genphy_c45_read_lpa" },
	{ 0x4bcb8e99, "genphy_c45_read_link" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xd15ff8ae, "devm_hwmon_device_register_with_info" },
	{ 0x33560c9e, "devm_add_action" },
	{ 0x11089ac7, "_ctype" },
	{ 0xb403c66d, "devm_kstrdup" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x352886b, "genphy_c45_pma_read_abilities" },
	{ 0x249229e4, "genphy_c45_pma_setup_forced" },
	{ 0x4346ccde, "genphy_c45_check_and_restart_aneg" },
	{ 0x8087503, "phy_modify_mmd_changed" },
	{ 0x446a5be8, "genphy_c45_an_config_aneg" },
	{ 0xf55aa50c, "phy_write_mmd" },
	{ 0x7e9d161b, "phy_modify_mmd" },
	{ 0x73762bdb, "genphy_c45_aneg_done" },
	{ 0xfbe42f54, "phy_read_mmd" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("mdio:0000000000101011000010011010????");
MODULE_ALIAS("mdio:0000000000101011000010011011????");

MODULE_INFO(srcversion, "FC53AFC51E4CBF536EB9A87");
