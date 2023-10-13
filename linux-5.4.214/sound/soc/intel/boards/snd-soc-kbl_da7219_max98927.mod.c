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
	{ 0x2d25fadb, "devm_snd_soc_register_card" },
	{ 0xa8e6c125, "snd_pcm_hw_constraint_msbits" },
	{ 0xb6f50bc, "snd_soc_pm_ops" },
	{ 0xde39e02b, "snd_soc_dapm_info_pin_switch" },
	{ 0x16147d0e, "snd_soc_dapm_put_pin_switch" },
	{ 0xaea9fc1f, "null_dailink_component" },
	{ 0xbc563377, "snd_soc_dai_set_pll" },
	{ 0xc582d6, "da7219_aad_jack_det" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x99aef328, "snd_jack_set_key" },
	{ 0xf13afacc, "snd_soc_dapm_add_routes" },
	{ 0xc2d88d9b, "hdac_hdmi_jack_port_init" },
	{ 0x2737b538, "snd_pcm_hw_constraint_list" },
	{ 0xda1eea08, "snd_soc_dapm_ignore_suspend" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7045953d, "snd_soc_dapm_get_pin_switch" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf9863ee8, "snd_soc_dapm_sync" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xdcc0751, "snd_soc_dai_set_sysclk" },
	{ 0xe8c76cb3, "snd_soc_card_jack_new" },
	{ 0x7996188b, "hdac_hdmi_jack_init" },
	{ 0xf30d78a0, "snd_soc_dapm_disable_pin" },
	{ 0x7a215233, "snd_soc_dapm_enable_pin" },
	{ 0x94a7fd48, "snd_soc_dai_set_tdm_slot" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0x943b1666, "devm_kmalloc" },
};

MODULE_INFO(depends, "snd-soc-core,snd-pcm,snd-soc-da7219,snd,snd-soc-hdac-hdmi");


MODULE_INFO(srcversion, "4E846A5E3C2C9AF5A7F547B");
