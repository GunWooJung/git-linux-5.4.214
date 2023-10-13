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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xf9a482f9, "msleep" },
	{ 0x815588a6, "clk_enable" },
	{ 0x37cfb285, "snd_soc_dapm_get_enum_double" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7c127637, "snd_soc_dapm_get_volsw" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xdf4660ac, "dapm_regulator_event" },
	{ 0x149bc626, "snd_soc_component_update_bits" },
	{ 0x4209bc59, "snd_soc_put_volsw" },
	{ 0x6973328c, "snd_soc_get_volsw" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xec688f13, "devm_regulator_bulk_get" },
	{ 0xeb94b6dd, "regulator_bulk_enable" },
	{ 0x7f00dd01, "snd_soc_info_enum_double" },
	{ 0x8be86773, "dev_get_regmap" },
	{ 0xc476bfb9, "snd_soc_dapm_put_volsw" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x32ed740, "snd_soc_info_volsw" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xb39e5e4f, "snd_soc_component_init_regmap" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x5bb6172e, "regulator_bulk_disable" },
	{ 0x12a38747, "usleep_range" },
	{ 0x2b7179da, "platform_get_irq_byname" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x3d160fb1, "devm_snd_soc_register_component" },
	{ 0xf5361e58, "snd_soc_component_write" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6164d63, "devm_clk_get" },
	{ 0x4102c82b, "snd_soc_jack_report" },
	{ 0xe37f87b8, "snd_soc_component_read32" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x8879827b, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-soc-core");

MODULE_ALIAS("of:N*T*Cqcom,pm8916-wcd-analog-codec");
MODULE_ALIAS("of:N*T*Cqcom,pm8916-wcd-analog-codecC*");

MODULE_INFO(srcversion, "E3BA3E3562BE75A9C04ABE6");
