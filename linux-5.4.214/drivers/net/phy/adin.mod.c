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
	{ 0x68b2f9e4, "genphy_resume" },
	{ 0x1498cb69, "genphy_suspend" },
	{ 0x740bb1f6, "phy_drivers_unregister" },
	{ 0xbb3beeb1, "phy_drivers_register" },
	{ 0xf9a482f9, "msleep" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x7e9d161b, "phy_modify_mmd" },
	{ 0xf55aa50c, "phy_write_mmd" },
	{ 0xeadab72e, "__genphy_config_aneg" },
	{ 0xcb0642ea, "mdiobus_write" },
	{ 0xa5656f0c, "__mdiobus_read" },
	{ 0x94b43553, "__mdiobus_write" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xfbe42f54, "phy_read_mmd" },
	{ 0x992f9981, "phy_modify" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xacdeb71f, "device_property_read_u32_array" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x7cf340ff, "genphy_read_status" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x5792f848, "strlcpy" },
	{ 0xe1cf8262, "mdiobus_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("mdio:0000001010000011101111000010????");
MODULE_ALIAS("mdio:0000001010000011101111000011????");

MODULE_INFO(srcversion, "5AE159ED110A57944C3EEE0");
