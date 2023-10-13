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
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0x472afdf9, "backlight_device_unregister" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0xaf465642, "platform_device_put" },
	{ 0xe34d9651, "platform_device_del" },
	{ 0x83eb21c, "rfkill_unregister" },
	{ 0xdb68bbad, "rfkill_destroy" },
	{ 0xff282521, "rfkill_register" },
	{ 0xe5b440f1, "rfkill_alloc" },
	{ 0xf14ea0e9, "platform_device_add" },
	{ 0xd73c36a2, "platform_device_alloc" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xdf8165bf, "backlight_device_register" },
	{ 0x6de7f7ff, "acpi_video_get_backlight_type" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x1a45cb6c, "acpi_disabled" },
	{ 0xebdd7402, "power_supply_unregister" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x1418158d, "power_supply_register" },
	{ 0x96848186, "scnprintf" },
	{ 0x983c8c67, "devm_hwmon_device_register_with_groups" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x97999817, "rfkill_set_hw_state" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x3854774b, "kstrtoll" },
	{ 0xd3a6aa10, "power_supply_get_drvdata" },
	{ 0xc5850110, "printk" },
	{ 0xaa00fdc0, "ec_transaction" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc708f1fe, "ec_write" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xfc4152fc, "ec_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "video");

MODULE_ALIAS("dmi*:rn*IFL90*:rvr*IFT00*:");
MODULE_ALIAS("dmi*:rn*IFL90*:rvr*REFERENCE*:");
MODULE_ALIAS("dmi*:rn*IFL91*:rvr*IFT00*:");
MODULE_ALIAS("dmi*:rn*JFL92*:rvr*IFT00*:");
MODULE_ALIAS("dmi*:rn*IFT00*:rvr*IFT00*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:pn*Inspiron910*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:pn*Inspiron1010*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:pn*Inspiron1011*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:pn*Inspiron1012*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:pn*Inspiron1110*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:pn*Inspiron1210*:");
MODULE_ALIAS("dmi*:rn*JHL90*:rvr*REFERENCE*:");
MODULE_ALIAS("dmi*:rn*KHLB2*:rvr*REFERENCE*:");

MODULE_INFO(srcversion, "AB6AA2EAB0A0327EB578839");
