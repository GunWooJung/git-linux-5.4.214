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
	{ 0xc33c7e69, "amdtp_domain_start" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x677a404b, "amdtp_stream_pcm_pointer" },
	{ 0xf9a482f9, "msleep" },
	{ 0x34d3b8d1, "driver_register" },
	{ 0xb5d7eaa9, "amdtp_domain_destroy" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x6dc50487, "fw_csr_string" },
	{ 0x2fb51c30, "avc_general_set_sig_fmt" },
	{ 0xddb02d73, "snd_info_create_card_entry" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0xcc1a94ce, "fw_bus_type" },
	{ 0xdc62f55d, "amdtp_am824_set_midi_position" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x12f190e3, "amdtp_am824_set_pcm_position" },
	{ 0xdb63f28, "fw_schedule_bus_reset" },
	{ 0xa1637162, "snd_rawmidi_set_ops" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xef0af3db, "snd_rawmidi_new" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x131e5561, "param_ops_charp" },
	{ 0xfa9e917c, "cmp_connection_destroy" },
	{ 0x1404e1bd, "fcp_avc_transaction" },
	{ 0xb9638db4, "snd_pcm_rate_to_rate_bit" },
	{ 0xe374f14f, "avc_general_get_plug_info" },
	{ 0x77e247bd, "amdtp_stream_get_max_payload" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x2e8d1a6e, "cmp_connection_establish" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xf66db40a, "avc_general_get_sig_fmt" },
	{ 0x6a645132, "amdtp_domain_add_stream" },
	{ 0x585079d2, "snd_pcm_set_ops" },
	{ 0x86f434e2, "driver_unregister" },
	{ 0x904b4af4, "snd_ctl_notify" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xfab7e0a5, "snd_pcm_lib_get_vmalloc_page" },
	{ 0xf153cd95, "amdtp_stream_destroy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xa9225458, "snd_hwdep_new" },
	{ 0xdaed65a6, "snd_pcm_lib_ioctl" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x26be0b39, "snd_card_new" },
	{ 0x81b69e41, "snd_ctl_enum_info" },
	{ 0x9f149630, "amdtp_domain_stop" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x2c6e5e2c, "snd_pcm_hw_rule_add" },
	{ 0xa916b694, "strnlen" },
	{ 0x8e17faf3, "put_device" },
	{ 0x35b57060, "_snd_pcm_lib_alloc_vmalloc_buffer" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x4d16dbe5, "snd_ctl_new1" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xab8175f1, "amdtp_stream_pcm_prepare" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x3ff5e8f0, "snd_pcm_set_sync" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xe7a7a03f, "get_device" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x1eb62710, "amdtp_stream_pcm_ack" },
	{ 0x605edf6, "amdtp_domain_init" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x4cda566, "snd_interval_refine" },
	{ 0x37a0cba, "kfree" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0x87a7c2c0, "fcp_bus_reset" },
	{ 0xc38b9042, "cmp_connection_break" },
	{ 0xb75aacab, "cmp_connection_init" },
	{ 0x579f4634, "snd_fw_schedule_registration" },
	{ 0xee5e7040, "amdtp_am824_add_pcm_hw_constraints" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x3d549164, "snd_card_free" },
	{ 0x2c3bd8c1, "snd_card_register" },
	{ 0xb6c4fbfb, "amdtp_am824_init" },
	{ 0x26fcc9d3, "cmp_connection_release" },
	{ 0xdb207b0f, "amdtp_am824_midi_trigger" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe1f25fb, "snd_pcm_new" },
	{ 0xa970e9b, "cmp_connection_check_used" },
	{ 0xb0e602eb, "memmove" },
	{ 0xff3bd408, "snd_pcm_lib_free_vmalloc_buffer" },
	{ 0xff94b8b9, "snd_ctl_add" },
	{ 0x2c720061, "snd_fw_transaction" },
	{ 0x2acb7e76, "amdtp_am824_set_parameters" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x187828b1, "fw_run_transaction" },
	{ 0xc68d7581, "cmp_connection_reserve" },
};

MODULE_INFO(depends, "snd-firewire-lib,firewire-core,snd,snd-rawmidi,snd-pcm,snd-hwdep");

MODULE_ALIAS("ieee1394:ven000040ABmo00010049sp*ver*");
MODULE_ALIAS("ieee1394:ven000040ABmo00010048sp*ver*");
MODULE_ALIAS("ieee1394:ven00000A92mo00010000sp*ver*");
MODULE_ALIAS("ieee1394:ven00000A92mo00010066sp*ver*");
MODULE_ALIAS("ieee1394:ven00000A92mo00010001sp*ver*");
MODULE_ALIAS("ieee1394:ven000007F5mo00010048sp*ver*");
MODULE_ALIAS("ieee1394:ven000007F5mo00010049sp*ver*");
MODULE_ALIAS("ieee1394:ven00000FF2mo00010065sp*ver*");
MODULE_ALIAS("ieee1394:ven0000000Fmo00010067sp*ver*");
MODULE_ALIAS("ieee1394:ven00001260mo00000001sp*ver*");
MODULE_ALIAS("ieee1394:ven0000022Emo00010067sp*ver*");
MODULE_ALIAS("ieee1394:ven00001564mo00001204sp*ver*");
MODULE_ALIAS("ieee1394:ven00001564mo00001604sp*ver*");
MODULE_ALIAS("ieee1394:ven00001564mo00000006sp*ver*");
MODULE_ALIAS("ieee1394:ven00001564mo00001616sp*ver*");
MODULE_ALIAS("ieee1394:ven00001564mo00000610sp*ver*");
MODULE_ALIAS("ieee1394:ven000003DBmo00010048sp*ver*");
MODULE_ALIAS("ieee1394:ven000003DBmo0001EEEEsp*ver*");
MODULE_ALIAS("ieee1394:ven00000F1Bmo00010064sp*ver*");
MODULE_ALIAS("ieee1394:ven00000002mo00000002sp*ver*");
MODULE_ALIAS("ieee1394:ven0000000Amo00030000sp*ver*");
MODULE_ALIAS("ieee1394:ven00001496mo00050000sp*ver*");
MODULE_ALIAS("ieee1394:ven00001496mo00060000sp*ver*");
MODULE_ALIAS("ieee1394:ven00001496mo00070000sp*ver*");
MODULE_ALIAS("ieee1394:ven00001496mo00000000sp*ver*");
MODULE_ALIAS("ieee1394:ven000019E5mo00000001sp*ver*");
MODULE_ALIAS("ieee1394:ven00001A9Emo00000001sp*ver*");
MODULE_ALIAS("ieee1394:ven00001198mo00010048sp*ver*");
MODULE_ALIAS("ieee1394:ven00001198mo0000ADA8sp*ver*");
MODULE_ALIAS("ieee1394:ven00000AACmo00000003sp*ver*");
MODULE_ALIAS("ieee1394:ven00000AACmo00000004sp*ver*");
MODULE_ALIAS("ieee1394:ven00000AACmo00000007sp*ver*");
MODULE_ALIAS("ieee1394:ven00000AACmo00000005sp*ver*");
MODULE_ALIAS("ieee1394:ven00000AACmo00000002sp*ver*");
MODULE_ALIAS("ieee1394:ven0000A0DEmo0010000Bsp*ver*");
MODULE_ALIAS("ieee1394:ven0000A0DEmo0010000Csp*ver*");
MODULE_ALIAS("ieee1394:ven0000130Emo00000003sp*ver*");
MODULE_ALIAS("ieee1394:ven0000130Emo00000006sp0000A02Dver00010001*");
MODULE_ALIAS("ieee1394:ven0000130Emo00000000sp*ver*");
MODULE_ALIAS("ieee1394:ven000007F5mo00010058sp*ver*");
MODULE_ALIAS("ieee1394:ven000007F5mo00010046sp*ver*");
MODULE_ALIAS("ieee1394:ven00000D6Cmo00010060sp*ver*");
MODULE_ALIAS("ieee1394:ven00000D6Cmo00010062sp*ver*");
MODULE_ALIAS("ieee1394:ven00000D6Cmo0000000Asp*ver*");
MODULE_ALIAS("ieee1394:ven00000D6Cmo00010081sp*ver*");
MODULE_ALIAS("ieee1394:ven00000D6Cmo000100A1sp*ver*");
MODULE_ALIAS("ieee1394:ven00000D6Cmo00010070sp*ver*");
MODULE_ALIAS("ieee1394:ven00000D6Cmo00010071sp*ver*");
MODULE_ALIAS("ieee1394:ven00000D6Cmo00010091sp*ver*");
MODULE_ALIAS("ieee1394:ven0000A07Emo000000A9sp*ver*");
MODULE_ALIAS("ieee1394:ven00002327mo00020002sp*ver*");

MODULE_INFO(srcversion, "0931EF2A0A4B6D439360EF9");
