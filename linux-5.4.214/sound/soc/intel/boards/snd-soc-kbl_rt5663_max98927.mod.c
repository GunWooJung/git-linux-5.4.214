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
	{ 0x2d25fadb, "devm_snd_soc_register_card" },
	{ 0x815588a6, "clk_enable" },
	{ 0xa8e6c125, "snd_pcm_hw_constraint_msbits" },
	{ 0xb6f50bc, "snd_soc_pm_ops" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xde39e02b, "snd_soc_dapm_info_pin_switch" },
	{ 0xa169f3fb, "rt5663_sel_asrc_clk_src" },
	{ 0x16147d0e, "snd_soc_dapm_put_pin_switch" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x99aef328, "snd_jack_set_key" },
	{ 0xc2d88d9b, "hdac_hdmi_jack_port_init" },
	{ 0x2737b538, "snd_pcm_hw_constraint_list" },
	{ 0xda1eea08, "snd_soc_dapm_ignore_suspend" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7045953d, "snd_soc_dapm_get_pin_switch" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2f1df46f, "snd_soc_component_set_jack" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x6164d63, "devm_clk_get" },
	{ 0xdcc0751, "snd_soc_dai_set_sysclk" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xe8c76cb3, "snd_soc_card_jack_new" },
	{ 0x7996188b, "hdac_hdmi_jack_init" },
	{ 0x94a7fd48, "snd_soc_dai_set_tdm_slot" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x943b1666, "devm_kmalloc" },
};

MODULE_INFO(depends, "snd-soc-core,snd-pcm,snd-soc-rt5663,snd,snd-soc-hdac-hdmi");


MODULE_INFO(srcversion, "ED20C2A37AE7417CBBE41A4");
