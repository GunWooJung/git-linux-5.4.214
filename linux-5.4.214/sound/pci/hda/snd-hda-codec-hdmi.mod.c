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
	{ 0xefe69d07, "snd_hdac_i915_set_bclk" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x6d00f69e, "pci_bus_type" },
	{ 0xd5fa2366, "snd_hdac_regmap_sync" },
	{ 0x24a94b26, "snd_info_get_line" },
	{ 0xf9a482f9, "msleep" },
	{ 0xe66d4979, "snd_hda_get_num_devices" },
	{ 0xfa88359e, "snd_hda_jack_detect_enable" },
	{ 0x6ae19d29, "snd_hda_multi_out_dig_prepare" },
	{ 0xa15cbbc6, "snd_hdac_codec_read" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x9a8e1877, "snd_array_free" },
	{ 0xecdc746a, "snd_pcm_hw_constraint_step" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x79812631, "snd_device_free" },
	{ 0xe4e07754, "snd_hdac_print_channel_allocation" },
	{ 0xbe7dd7dc, "snd_array_new" },
	{ 0xddb02d73, "snd_info_create_card_entry" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0x470c8d8, "snd_pci_quirk_lookup" },
	{ 0xeda3a721, "snd_print_pcm_bits" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x682e3217, "snd_hdac_get_sub_nodes" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x9e913c1, "snd_pcm_alt_chmaps" },
	{ 0x1cc5db5b, "snd_hda_override_conn_list" },
	{ 0x866d576, "snd_hdac_acomp_exit" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x67bfe791, "snd_hdac_spk_to_chmap" },
	{ 0xea9be417, "snd_hda_spdif_ctls_unassign" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x4b03e00c, "snd_hda_jack_detect_enable_callback" },
	{ 0x9e733baf, "snd_hdac_get_stream_stripe_ctl" },
	{ 0x6b081528, "snd_hdac_check_power_state" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xfc15bf2e, "snd_hdac_acomp_get_eld" },
	{ 0x657043fa, "snd_hda_pin_sense" },
	{ 0x7002e851, "snd_hdac_regmap_write_raw" },
	{ 0x2737b538, "snd_pcm_hw_constraint_list" },
	{ 0xd046a216, "snd_hdac_acomp_init" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x4c7ec4b6, "snd_hdac_get_ch_alloc_from_ca" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x144a4b, "snd_hda_codec_set_power_to_all" },
	{ 0x9e003a68, "snd_hdac_regmap_add_vendor_verb" },
	{ 0x904b4af4, "snd_ctl_notify" },
	{ 0x6beeab1d, "snd_hdac_setup_channel_mapping" },
	{ 0x5792f848, "strlcpy" },
	{ 0x3bd544c2, "snd_hdac_get_active_channels" },
	{ 0x1684f92f, "snd_hda_set_dev_select" },
	{ 0xc2939333, "snd_hdac_power_down_pm" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf840a0f, "snd_jack_new" },
	{ 0x9a70b6e3, "snd_hda_spdif_ctls_assign" },
	{ 0x19d728be, "is_jack_detectable" },
	{ 0xa3aa2984, "snd_hdac_register_chmap_ops" },
	{ 0xeb47c752, "__hda_codec_driver_register" },
	{ 0xebc47d6e, "snd_hda_spdif_out_of_nid" },
	{ 0xbf2fd44e, "snd_hda_jack_tbl_get" },
	{ 0x423b461c, "snd_hdac_acomp_register_notifier" },
	{ 0xcb975990, "snd_hda_sequence_write" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xe7785653, "snd_hda_ctl_add" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x3345f3c3, "snd_hda_multi_out_dig_close" },
	{ 0x219fbb32, "snd_hda_create_dig_out_ctls" },
	{ 0xa916b694, "strnlen" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc1c77ece, "_snd_hdac_read_parm" },
	{ 0x4d16dbe5, "snd_ctl_new1" },
	{ 0x66f02131, "snd_hda_codec_update_widgets" },
	{ 0xfa0f0166, "snd_hda_get_dev_select" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x77c754a8, "snd_hdac_chmap_to_spk_mask" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xf401a50e, "__snd_hda_codec_cleanup_stream" },
	{ 0x79800ff6, "snd_hda_codec_pcm_new" },
	{ 0x88637fcb, "snd_hda_jack_add_kctl" },
	{ 0xa4083554, "snd_hdac_query_supported_pcm" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x25522ab1, "snd_info_free_entry" },
	{ 0x167a1bf6, "snd_hda_multi_out_dig_open" },
	{ 0xa7340216, "snd_hda_jack_tbl_get_from_tag" },
	{ 0x96848186, "scnprintf" },
	{ 0xe0a5916f, "snd_hdac_codec_write" },
	{ 0x9c821b4e, "snd_hda_codec_get_pincfg" },
	{ 0x208f578d, "hda_codec_driver_unregister" },
	{ 0x72455018, "snd_pcm_add_chmap_ctls" },
	{ 0xaae24c8f, "snd_hdac_channel_allocation" },
	{ 0xd99efd37, "snd_hda_codec_setup_stream" },
	{ 0x2082c756, "snd_jack_report" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x75a1d12e, "snd_hda_jack_set_dirty_all" },
	{ 0x961bece, "snd_hdac_add_chmap_ctls" },
	{ 0x7ca8138c, "snd_hda_jack_report_sync" },
	{ 0xc5d385ea, "snd_hdac_sync_audio_rate" },
	{ 0xb55a10a6, "snd_hdac_power_up_pm" },
	{ 0xf57b1971, "snd_hda_get_connections" },
};

MODULE_INFO(depends, "snd-hda-core,snd,snd-hda-codec,snd-pcm");

MODULE_ALIAS("hdaudio:v1002793Cr*a01*");
MODULE_ALIAS("hdaudio:v10027919r*a01*");
MODULE_ALIAS("hdaudio:v1002791Ar*a01*");
MODULE_ALIAS("hdaudio:v1002AA01r*a01*");
MODULE_ALIAS("hdaudio:v10951390r*a01*");
MODULE_ALIAS("hdaudio:v10951392r*a01*");
MODULE_ALIAS("hdaudio:v17E80047r*a01*");
MODULE_ALIAS("hdaudio:v10DE0001r*a01*");
MODULE_ALIAS("hdaudio:v10DE0002r*a01*");
MODULE_ALIAS("hdaudio:v10DE0003r*a01*");
MODULE_ALIAS("hdaudio:v10DE0004r*a01*");
MODULE_ALIAS("hdaudio:v10DE0005r*a01*");
MODULE_ALIAS("hdaudio:v10DE0006r*a01*");
MODULE_ALIAS("hdaudio:v10DE0007r*a01*");
MODULE_ALIAS("hdaudio:v10DE0008r*a01*");
MODULE_ALIAS("hdaudio:v10DE0009r*a01*");
MODULE_ALIAS("hdaudio:v10DE000Ar*a01*");
MODULE_ALIAS("hdaudio:v10DE000Br*a01*");
MODULE_ALIAS("hdaudio:v10DE000Cr*a01*");
MODULE_ALIAS("hdaudio:v10DE000Dr*a01*");
MODULE_ALIAS("hdaudio:v10DE0010r*a01*");
MODULE_ALIAS("hdaudio:v10DE0011r*a01*");
MODULE_ALIAS("hdaudio:v10DE0012r*a01*");
MODULE_ALIAS("hdaudio:v10DE0013r*a01*");
MODULE_ALIAS("hdaudio:v10DE0014r*a01*");
MODULE_ALIAS("hdaudio:v10DE0015r*a01*");
MODULE_ALIAS("hdaudio:v10DE0016r*a01*");
MODULE_ALIAS("hdaudio:v10DE0018r*a01*");
MODULE_ALIAS("hdaudio:v10DE0019r*a01*");
MODULE_ALIAS("hdaudio:v10DE001Ar*a01*");
MODULE_ALIAS("hdaudio:v10DE001Br*a01*");
MODULE_ALIAS("hdaudio:v10DE001Cr*a01*");
MODULE_ALIAS("hdaudio:v10DE0020r*a01*");
MODULE_ALIAS("hdaudio:v10DE0022r*a01*");
MODULE_ALIAS("hdaudio:v10DE0028r*a01*");
MODULE_ALIAS("hdaudio:v10DE0029r*a01*");
MODULE_ALIAS("hdaudio:v10DE002Dr*a01*");
MODULE_ALIAS("hdaudio:v10DE002Er*a01*");
MODULE_ALIAS("hdaudio:v10DE002Fr*a01*");
MODULE_ALIAS("hdaudio:v10DE0030r*a01*");
MODULE_ALIAS("hdaudio:v10DE0040r*a01*");
MODULE_ALIAS("hdaudio:v10DE0041r*a01*");
MODULE_ALIAS("hdaudio:v10DE0042r*a01*");
MODULE_ALIAS("hdaudio:v10DE0043r*a01*");
MODULE_ALIAS("hdaudio:v10DE0044r*a01*");
MODULE_ALIAS("hdaudio:v10DE0045r*a01*");
MODULE_ALIAS("hdaudio:v10DE0050r*a01*");
MODULE_ALIAS("hdaudio:v10DE0051r*a01*");
MODULE_ALIAS("hdaudio:v10DE0052r*a01*");
MODULE_ALIAS("hdaudio:v10DE0060r*a01*");
MODULE_ALIAS("hdaudio:v10DE0061r*a01*");
MODULE_ALIAS("hdaudio:v10DE0062r*a01*");
MODULE_ALIAS("hdaudio:v10DE0067r*a01*");
MODULE_ALIAS("hdaudio:v10DE0070r*a01*");
MODULE_ALIAS("hdaudio:v10DE0071r*a01*");
MODULE_ALIAS("hdaudio:v10DE0072r*a01*");
MODULE_ALIAS("hdaudio:v10DE0073r*a01*");
MODULE_ALIAS("hdaudio:v10DE0074r*a01*");
MODULE_ALIAS("hdaudio:v10DE0076r*a01*");
MODULE_ALIAS("hdaudio:v10DE007Br*a01*");
MODULE_ALIAS("hdaudio:v10DE007Cr*a01*");
MODULE_ALIAS("hdaudio:v10DE007Dr*a01*");
MODULE_ALIAS("hdaudio:v10DE007Er*a01*");
MODULE_ALIAS("hdaudio:v10DE0080r*a01*");
MODULE_ALIAS("hdaudio:v10DE0081r*a01*");
MODULE_ALIAS("hdaudio:v10DE0082r*a01*");
MODULE_ALIAS("hdaudio:v10DE0083r*a01*");
MODULE_ALIAS("hdaudio:v10DE0084r*a01*");
MODULE_ALIAS("hdaudio:v10DE0090r*a01*");
MODULE_ALIAS("hdaudio:v10DE0091r*a01*");
MODULE_ALIAS("hdaudio:v10DE0092r*a01*");
MODULE_ALIAS("hdaudio:v10DE0093r*a01*");
MODULE_ALIAS("hdaudio:v10DE0094r*a01*");
MODULE_ALIAS("hdaudio:v10DE0095r*a01*");
MODULE_ALIAS("hdaudio:v10DE0097r*a01*");
MODULE_ALIAS("hdaudio:v10DE0098r*a01*");
MODULE_ALIAS("hdaudio:v10DE0099r*a01*");
MODULE_ALIAS("hdaudio:v10DE009Ar*a01*");
MODULE_ALIAS("hdaudio:v10DE009Dr*a01*");
MODULE_ALIAS("hdaudio:v10DE009Er*a01*");
MODULE_ALIAS("hdaudio:v10DE009Fr*a01*");
MODULE_ALIAS("hdaudio:v10DE00A0r*a01*");
MODULE_ALIAS("hdaudio:v10DE8001r*a01*");
MODULE_ALIAS("hdaudio:v10DE8067r*a01*");
MODULE_ALIAS("hdaudio:v11069F80r*a01*");
MODULE_ALIAS("hdaudio:v11069F81r*a01*");
MODULE_ALIAS("hdaudio:v11069F84r*a01*");
MODULE_ALIAS("hdaudio:v11069F85r*a01*");
MODULE_ALIAS("hdaudio:v80860054r*a01*");
MODULE_ALIAS("hdaudio:v80862800r*a01*");
MODULE_ALIAS("hdaudio:v80862801r*a01*");
MODULE_ALIAS("hdaudio:v80862802r*a01*");
MODULE_ALIAS("hdaudio:v80862803r*a01*");
MODULE_ALIAS("hdaudio:v80862804r*a01*");
MODULE_ALIAS("hdaudio:v80862805r*a01*");
MODULE_ALIAS("hdaudio:v80862806r*a01*");
MODULE_ALIAS("hdaudio:v80862807r*a01*");
MODULE_ALIAS("hdaudio:v80862808r*a01*");
MODULE_ALIAS("hdaudio:v80862809r*a01*");
MODULE_ALIAS("hdaudio:v8086280Ar*a01*");
MODULE_ALIAS("hdaudio:v8086280Br*a01*");
MODULE_ALIAS("hdaudio:v8086280Cr*a01*");
MODULE_ALIAS("hdaudio:v8086280Dr*a01*");
MODULE_ALIAS("hdaudio:v8086280Fr*a01*");
MODULE_ALIAS("hdaudio:v80862812r*a01*");
MODULE_ALIAS("hdaudio:v80862816r*a01*");
MODULE_ALIAS("hdaudio:v8086281Ar*a01*");
MODULE_ALIAS("hdaudio:v80862880r*a01*");
MODULE_ALIAS("hdaudio:v80862882r*a01*");
MODULE_ALIAS("hdaudio:v80862883r*a01*");
MODULE_ALIAS("hdaudio:v808629FBr*a01*");
MODULE_ALIAS("hdaudio:v00000101r*a01*");

MODULE_INFO(srcversion, "546A7CED5EA63A504D373E2");
