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
	{ 0xbd25aaab, "genphy_loopback" },
	{ 0x68b2f9e4, "genphy_resume" },
	{ 0x1498cb69, "genphy_suspend" },
	{ 0x4437de01, "phy_basic_t1_features" },
	{ 0x740bb1f6, "phy_drivers_unregister" },
	{ 0xbb3beeb1, "phy_drivers_register" },
	{ 0x9b485bd5, "genphy_update_link" },
	{ 0xeb6f24a8, "genphy_soft_reset" },
	{ 0x12a38747, "usleep_range" },
	{ 0x992f9981, "phy_modify" },
	{ 0xd15ff8ae, "devm_hwmon_device_register_with_info" },
	{ 0xb403c66d, "devm_kstrdup" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x9166fada, "strncpy" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xe1cf8262, "mdiobus_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("mdio:0000000110000000110111000100????");
MODULE_ALIAS("mdio:0000000110000000110111010000????");

MODULE_INFO(srcversion, "9E0BCA4F63061AAAD15C779");
