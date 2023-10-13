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
	{ 0x2d3385d3, "system_wq" },
	{ 0xab1c1230, "snd_soc_dapm_kcontrol_widget" },
	{ 0xe5b6e9e8, "__pm_runtime_idle" },
	{ 0xe54f5faf, "pm_runtime_force_suspend" },
	{ 0x35386327, "hdac_get_device_id" },
	{ 0xda9d1160, "device_link_add" },
	{ 0xfb4ec2db, "__pm_runtime_disable" },
	{ 0xa15cbbc6, "snd_hdac_codec_read" },
	{ 0x37cfb285, "snd_soc_dapm_get_enum_double" },
	{ 0x6e28206b, "snd_hdac_ext_bus_get_link" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x7c60d490, "__pm_runtime_suspend" },
	{ 0x2d55b5ef, "snd_soc_add_card_controls" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xe464db0d, "snd_hdac_ext_bus_link_put" },
	{ 0xde39e02b, "snd_soc_dapm_info_pin_switch" },
	{ 0x16147d0e, "snd_soc_dapm_put_pin_switch" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xb2400ab0, "pm_runtime_force_resume" },
	{ 0x682e3217, "snd_hdac_get_sub_nodes" },
	{ 0x50ab54a2, "snd_soc_dapm_new_controls" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x94f22fca, "snd_hda_ext_driver_unregister" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc216d5c2, "snd_pcm_hw_constraint_eld" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x6b081528, "snd_hdac_check_power_state" },
	{ 0x7f00dd01, "snd_soc_info_enum_double" },
	{ 0xf13afacc, "snd_soc_dapm_add_routes" },
	{ 0xc5067544, "snd_pcm_hw_constraint_mask64" },
	{ 0x9dbced68, "snd_hda_ext_driver_register" },
	{ 0xc10f34e1, "snd_hdac_display_power" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xfc15bf2e, "snd_hdac_acomp_get_eld" },
	{ 0x89239358, "dapm_kcontrol_get_value" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x6beeab1d, "snd_hdac_setup_channel_mapping" },
	{ 0x3bd544c2, "snd_hdac_get_active_channels" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xe472f119, "snd_hdac_ext_bus_link_get" },
	{ 0xa3aa2984, "snd_hdac_register_chmap_ops" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x70bc6c82, "snd_hdac_read_parm_uncached" },
	{ 0x5c07cb49, "snd_hdac_calc_stream_format" },
	{ 0x7d725735, "devm_kmemdup" },
	{ 0x423b461c, "snd_hdac_acomp_register_notifier" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x7045953d, "snd_soc_dapm_get_pin_switch" },
	{ 0x9962bc44, "pm_runtime_enable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc1c77ece, "_snd_hdac_read_parm" },
	{ 0xb403c66d, "devm_kstrdup" },
	{ 0xa1d619fb, "snd_soc_dapm_new_widgets" },
	{ 0x29e1e204, "hdmi_audio_infoframe_pack" },
	{ 0x3d160fb1, "devm_snd_soc_register_component" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf9863ee8, "snd_soc_dapm_sync" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x400f970b, "snd_hdac_refresh_widgets" },
	{ 0xa4083554, "snd_hdac_query_supported_pcm" },
	{ 0xf30d78a0, "snd_soc_dapm_disable_pin" },
	{ 0x7a215233, "snd_soc_dapm_enable_pin" },
	{ 0xe0a5916f, "snd_hdac_codec_write" },
	{ 0xb14ab1ef, "hdmi_audio_infoframe_init" },
	{ 0xaae24c8f, "snd_hdac_channel_allocation" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x4102c82b, "snd_soc_jack_report" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x961bece, "snd_hdac_add_chmap_ctls" },
	{ 0x45ab4fd2, "snd_hdac_sync_power_state" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x7e8d148, "snd_hdac_get_connections" },
	{ 0x8879827b, "snd_soc_dapm_put_enum_double" },
};

MODULE_INFO(depends, "snd-soc-core,snd-hda-core,snd-hda-ext-core,snd-pcm");

MODULE_ALIAS("hdaudio:v80862809r00100000a02*");
MODULE_ALIAS("hdaudio:v8086280Ar00100000a02*");
MODULE_ALIAS("hdaudio:v8086280Br00100000a02*");
MODULE_ALIAS("hdaudio:v8086280Cr00100000a02*");
MODULE_ALIAS("hdaudio:v8086280Dr00100000a02*");
MODULE_ALIAS("hdaudio:v8086280Fr00100000a02*");

MODULE_INFO(srcversion, "754B1FB7B26A2630D8B73E8");
