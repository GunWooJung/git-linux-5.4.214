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
	{ 0x815588a6, "clk_enable" },
	{ 0x7c127637, "snd_soc_dapm_get_volsw" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x149bc626, "snd_soc_component_update_bits" },
	{ 0x4209bc59, "snd_soc_put_volsw" },
	{ 0x6973328c, "snd_soc_get_volsw" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x6e943f12, "snd_soc_put_volsw_range" },
	{ 0xc3d84a5, "__devm_regmap_init_mmio_clk" },
	{ 0x9a8979bc, "snd_soc_info_volsw_range" },
	{ 0xc476bfb9, "snd_soc_dapm_put_volsw" },
	{ 0x122b5584, "snd_soc_get_volsw_range" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x32ed740, "snd_soc_info_volsw" },
	{ 0xe944121a, "syscon_regmap_lookup_by_phandle" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x3d160fb1, "devm_snd_soc_register_component" },
	{ 0xf5361e58, "snd_soc_component_write" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6164d63, "devm_clk_get" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xed169dc7, "snd_soc_component_read" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x904a8908, "regmap_write" },
	{ 0xc423de90, "devm_platform_ioremap_resource" },
};

MODULE_INFO(depends, "snd-soc-core");

MODULE_ALIAS("of:N*T*Crockchip,rk3036-codec");
MODULE_ALIAS("of:N*T*Crockchip,rk3036-codecC*");

MODULE_INFO(srcversion, "EF767DB8D01B9572A9738BC");
