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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x815588a6, "clk_enable" },
	{ 0xc61cd092, "snd_soc_dapm_del_routes" },
	{ 0xeccf3faa, "devm_sigmadsp_init_regmap" },
	{ 0x9741de30, "regmap_raw_write" },
	{ 0x37cfb285, "snd_soc_dapm_get_enum_double" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xc1889514, "regmap_update_bits_base" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x50ab54a2, "snd_soc_dapm_new_controls" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x4209bc59, "snd_soc_put_volsw" },
	{ 0x36f1a2b6, "regmap_read" },
	{ 0x6973328c, "snd_soc_get_volsw" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x4900d024, "sigmadsp_attach" },
	{ 0xae620be9, "adau_calc_pll_cfg" },
	{ 0x7f00dd01, "snd_soc_info_enum_double" },
	{ 0x2e284c3, "snd_soc_dapm_kcontrol_dapm" },
	{ 0xf13afacc, "snd_soc_dapm_add_routes" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x68493967, "snd_soc_add_component_controls" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xac0f2c79, "sigmadsp_setup" },
	{ 0xce8b1878, "__x86_indirect_thunk_r14" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x32ed740, "snd_soc_info_volsw" },
	{ 0x657056e6, "sigmadsp_restrict_params" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xa71e1311, "snd_soc_get_enum_double" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x6164d63, "devm_clk_get" },
	{ 0xdba17987, "snd_soc_put_enum_double" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37aa1344, "snd_soc_component_test_bits" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xd7dcf844, "snd_soc_dapm_mux_update_power" },
	{ 0x904a8908, "regmap_write" },
	{ 0x532a4e22, "regcache_sync" },
	{ 0x8879827b, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-pcm,snd-soc-core,snd-soc-sigmadsp-regmap,snd-soc-sigmadsp,snd-soc-adau-utils");


MODULE_INFO(srcversion, "BC8B7DBEA3E9ECDAB434156");
