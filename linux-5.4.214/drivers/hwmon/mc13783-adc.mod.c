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
	{ 0x75ed0899, "__platform_driver_probe" },
	{ 0xd3f5b56e, "hwmon_device_unregister" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xd1c6a314, "hwmon_device_register" },
	{ 0x8e4ad562, "mc13xxx_get_flags" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x349cba85, "strchr" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x23e04ab2, "mc13xxx_adc_do_conversion" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mc13xxx-core");

MODULE_ALIAS("platform:mc13783-adc");
MODULE_ALIAS("platform:mc13892-adc");

MODULE_INFO(srcversion, "D8689B8C401C03E6B44B75C");
