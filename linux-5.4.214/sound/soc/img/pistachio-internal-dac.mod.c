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
	{ 0x4209bc59, "snd_soc_put_volsw" },
	{ 0x6973328c, "snd_soc_get_volsw" },
	{ 0x32ed740, "snd_soc_info_volsw" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x3d160fb1, "devm_snd_soc_register_component" },
	{ 0xe5b6e9e8, "__pm_runtime_idle" },
	{ 0x9962bc44, "pm_runtime_enable" },
	{ 0xb98c9772, "__pm_runtime_set_status" },
	{ 0x4853215d, "regulator_get_voltage" },
	{ 0x868b9359, "devm_regulator_get" },
	{ 0xe944121a, "syscon_regmap_lookup_by_phandle" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xfe543c51, "regulator_enable" },
	{ 0xfb4ec2db, "__pm_runtime_disable" },
	{ 0x1643a127, "regulator_disable" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0xb39e5e4f, "snd_soc_component_init_regmap" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "snd-soc-core");

MODULE_ALIAS("of:N*T*Cimg,pistachio-internal-dac");
MODULE_ALIAS("of:N*T*Cimg,pistachio-internal-dacC*");

MODULE_INFO(srcversion, "2DD70D6A2842CE4FCDAA734");
