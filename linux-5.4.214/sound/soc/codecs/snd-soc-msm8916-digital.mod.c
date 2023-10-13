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
	{ 0x9a1dfd65, "strpbrk" },
	{ 0x815588a6, "clk_enable" },
	{ 0x37cfb285, "snd_soc_dapm_get_enum_double" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x149bc626, "snd_soc_component_update_bits" },
	{ 0x4209bc59, "snd_soc_put_volsw" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x6973328c, "snd_soc_get_volsw" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x7f00dd01, "snd_soc_info_enum_double" },
	{ 0xc3d84a5, "__devm_regmap_init_mmio_clk" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x32ed740, "snd_soc_info_volsw" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xa71e1311, "snd_soc_get_enum_double" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x3d160fb1, "devm_snd_soc_register_component" },
	{ 0xf5361e58, "snd_soc_component_write" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x6164d63, "devm_clk_get" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xdba17987, "snd_soc_put_enum_double" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe37f87b8, "snd_soc_component_read32" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xc423de90, "devm_platform_ioremap_resource" },
	{ 0x8879827b, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-soc-core");

MODULE_ALIAS("of:N*T*Cqcom,msm8916-wcd-digital-codec");
MODULE_ALIAS("of:N*T*Cqcom,msm8916-wcd-digital-codecC*");

MODULE_INFO(srcversion, "F1A5B1DBFB32921A8030438");
