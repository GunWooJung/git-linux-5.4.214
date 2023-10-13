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
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0x48f7540c, "__platform_create_bundle" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x45081703, "ec_get_handle" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x472afdf9, "backlight_device_unregister" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xdf8165bf, "backlight_device_register" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("dmi*:svn*Samsung*:pn*SQ10*:");
MODULE_ALIAS("dmi*:svn*SAMSUNGElectronics*:pn*SENSQ20*:");
MODULE_ALIAS("dmi*:svn*SAMSUNGElectronics*:pn*NQ25*:");
MODULE_ALIAS("dmi*:svn*DellComputerCorporation*:pn*X200*:");

MODULE_INFO(srcversion, "2106656DFB6BD3677282640");
