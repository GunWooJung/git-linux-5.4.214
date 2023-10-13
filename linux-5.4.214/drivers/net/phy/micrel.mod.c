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
	{ 0x8f9045bb, "genphy_write_mmd_unsupported" },
	{ 0x40b66c33, "genphy_read_mmd_unsupported" },
	{ 0xeb6f24a8, "genphy_soft_reset" },
	{ 0x740bb1f6, "phy_drivers_unregister" },
	{ 0xbb3beeb1, "phy_drivers_register" },
	{ 0x12a38747, "usleep_range" },
	{ 0x68b2f9e4, "genphy_resume" },
	{ 0xeadab72e, "__genphy_config_aneg" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x6960add7, "phy_init_hw" },
	{ 0x7cf340ff, "genphy_read_status" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x6164d63, "devm_clk_get" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x992f9981, "phy_modify" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x5792f848, "strlcpy" },
	{ 0x37ecb163, "genphy_restart_aneg" },
	{ 0xf55aa50c, "phy_write_mmd" },
	{ 0xfbe42f54, "phy_read_mmd" },
	{ 0xcb0642ea, "mdiobus_write" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xe1cf8262, "mdiobus_read" },
	{ 0x1498cb69, "genphy_suspend" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4c414beb, "genphy_read_abilities" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("mdio:????????????0010000101100001000?");
MODULE_ALIAS("mdio:????????00100010000101100010????");
MODULE_ALIAS("mdio:????????00100010000101100100????");
MODULE_ALIAS("mdio:????????0010001000010110000110??");
MODULE_ALIAS("mdio:????????00100010000101110010????");
MODULE_ALIAS("mdio:????????001000100001010101010101");
MODULE_ALIAS("mdio:????????001000100001010101010110");
MODULE_ALIAS("mdio:????????00100010000101010001????");
MODULE_ALIAS("mdio:????????00100010000101010101????");
MODULE_ALIAS("mdio:????????00100010000101010111????");
MODULE_ALIAS("mdio:????????00100010000101010110????");
MODULE_ALIAS("mdio:????????00001110011100100011????");
MODULE_ALIAS("mdio:????????00100010000101000011????");

MODULE_INFO(srcversion, "FDF520F709F0139D18EA0F1");
