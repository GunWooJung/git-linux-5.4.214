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
	{ 0xe3fde125, "fw_csr_iterator_next" },
	{ 0xc33c7e69, "amdtp_domain_start" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x677a404b, "amdtp_stream_pcm_pointer" },
	{ 0xf9a482f9, "msleep" },
	{ 0x34d3b8d1, "driver_register" },
	{ 0xb5d7eaa9, "amdtp_domain_destroy" },
	{ 0x754d539c, "strlen" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x3888ac3d, "fw_send_request" },
	{ 0x81188c30, "match_string" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x6dc50487, "fw_csr_string" },
	{ 0x2fb51c30, "avc_general_set_sig_fmt" },
	{ 0xddb02d73, "snd_info_create_card_entry" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0xcc1a94ce, "fw_bus_type" },
	{ 0xe80e5087, "fw_csr_iterator_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xa1637162, "snd_rawmidi_set_ops" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xef0af3db, "snd_rawmidi_new" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xfa9e917c, "cmp_connection_destroy" },
	{ 0x1404e1bd, "fcp_avc_transaction" },
	{ 0xb9638db4, "snd_pcm_rate_to_rate_bit" },
	{ 0xe374f14f, "avc_general_get_plug_info" },
	{ 0x77e247bd, "amdtp_stream_get_max_payload" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x2e8d1a6e, "cmp_connection_establish" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x6a645132, "amdtp_domain_add_stream" },
	{ 0x585079d2, "snd_pcm_set_ops" },
	{ 0x86f434e2, "driver_unregister" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xfab7e0a5, "snd_pcm_lib_get_vmalloc_page" },
	{ 0xf153cd95, "amdtp_stream_destroy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xa9225458, "snd_hwdep_new" },
	{ 0xdaed65a6, "snd_pcm_lib_ioctl" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x94098ff8, "snd_interval_list" },
	{ 0x7d725735, "devm_kmemdup" },
	{ 0xa9fef4ad, "snd_ctl_boolean_mono_info" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x26be0b39, "snd_card_new" },
	{ 0x9f149630, "amdtp_domain_stop" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x2c6e5e2c, "snd_pcm_hw_rule_add" },
	{ 0x8e17faf3, "put_device" },
	{ 0x35b57060, "_snd_pcm_lib_alloc_vmalloc_buffer" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x4d16dbe5, "snd_ctl_new1" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xab8175f1, "amdtp_stream_pcm_prepare" },
	{ 0x830adb64, "fw_core_add_address_handler" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x3ff5e8f0, "snd_pcm_set_sync" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xe7a7a03f, "get_device" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x1eb62710, "amdtp_stream_pcm_ack" },
	{ 0x605edf6, "amdtp_domain_init" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x510199b2, "fw_core_remove_address_handler" },
	{ 0x4cda566, "snd_interval_refine" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0xf6bcc233, "amdtp_stream_pcm_abort" },
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
	{ 0x53ca18e8, "amdtp_rate_table" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xdb207b0f, "amdtp_am824_midi_trigger" },
	{ 0xe1f25fb, "snd_pcm_new" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa970e9b, "cmp_connection_check_used" },
	{ 0xb0e602eb, "memmove" },
	{ 0xff3bd408, "snd_pcm_lib_free_vmalloc_buffer" },
	{ 0xff94b8b9, "snd_ctl_add" },
	{ 0x2c720061, "snd_fw_transaction" },
	{ 0xe7399ee1, "snd_rawmidi_transmit" },
	{ 0x2acb7e76, "amdtp_am824_set_parameters" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xaedf84ce, "fw_high_memory_region" },
	{ 0xb2bc72b9, "snd_rawmidi_receive" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xc68d7581, "cmp_connection_reserve" },
	{ 0xe914e41e, "strcpy" },
	{ 0x85f487f5, "fw_send_response" },
};

MODULE_INFO(depends, "firewire-core,snd-firewire-lib,snd,snd-rawmidi,snd-pcm,snd-hwdep");

MODULE_ALIAS("ieee1394:ven00001292mo0000F970sp0000A02Dver00010001*");
MODULE_ALIAS("ieee1394:ven0000D04Bmo0000F970sp0000A02Dver00010001*");
MODULE_ALIAS("ieee1394:ven00001564mo0000FC22sp*ver*");
MODULE_ALIAS("ieee1394:ven00000FF2mo*sp0000A02Dver00010001*");
MODULE_ALIAS("ieee1394:ven0000022Emo00800007sp*ver*");
MODULE_ALIAS("ieee1394:ven00001260mo00001000sp*ver*");
MODULE_ALIAS("ieee1394:ven00001260mo00002000sp*ver*");
MODULE_ALIAS("ieee1394:ven000003DBmo0001DDDDsp*ver*");

MODULE_INFO(srcversion, "111F5B9BA8B9B9534347D1C");
