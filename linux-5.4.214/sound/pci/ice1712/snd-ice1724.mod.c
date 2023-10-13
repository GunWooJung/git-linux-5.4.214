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
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x24a94b26, "snd_info_get_line" },
	{ 0xf9a482f9, "msleep" },
	{ 0x73b83a76, "snd_ac97_read" },
	{ 0xd6980b61, "snd_ak4114_resume" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xecdc746a, "snd_pcm_hw_constraint_step" },
	{ 0x691edb72, "snd_pcm_period_elapsed" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x195717b2, "snd_i2c_device_create" },
	{ 0xa8e6c125, "snd_pcm_hw_constraint_msbits" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x69f5a83a, "snd_ice1712_akm4xxx_build_controls" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0xa162ed6d, "snd_ak4113_create" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xa1637162, "snd_rawmidi_set_ops" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x76cff281, "snd_card_disconnect" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xef0af3db, "snd_rawmidi_new" },
	{ 0x86647f2c, "_snd_ctl_add_slave" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x802ea5ca, "snd_ak4113_external_rate" },
	{ 0x1a7b286a, "snd_ak4113_build" },
	{ 0x131e5561, "param_ops_charp" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x99f86ed6, "snd_device_new" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x2737b538, "snd_pcm_hw_constraint_list" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xeae7f6ca, "snd_pt2258_build_controls" },
	{ 0x585079d2, "snd_pcm_set_ops" },
	{ 0x3433a111, "snd_ctl_boolean_stereo_info" },
	{ 0x904b4af4, "snd_ctl_notify" },
	{ 0xe7b00dfb, "__x86_indirect_thunk_r13" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x827d9797, "snd_akm4xxx_reset" },
	{ 0x486a27d9, "snd_pcm_lib_free_pages" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xdaed65a6, "snd_pcm_lib_ioctl" },
	{ 0x343887f2, "snd_ak4114_build" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xa9fef4ad, "snd_ctl_boolean_mono_info" },
	{ 0xa26bc316, "snd_pt2258_reset" },
	{ 0x521a011a, "snd_pcm_lib_malloc_pages" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xe157cee9, "snd_ac97_suspend" },
	{ 0x26be0b39, "snd_card_new" },
	{ 0x81b69e41, "snd_ctl_enum_info" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x6e844db6, "snd_ice1712_akm4xxx_free" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x58cac682, "snd_i2c_bus_create" },
	{ 0x8bd0ede9, "snd_ctl_make_virtual_master" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xa916b694, "strnlen" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x4d16dbe5, "snd_ctl_new1" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x3ff5e8f0, "snd_pcm_set_sync" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x2078a99d, "snd_ctl_find_id" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x625a9e96, "snd_ac97_bus" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xaab6500d, "snd_ak4114_create" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x97ffda79, "snd_ac97_mixer" },
	{ 0x8a4baec, "snd_card_rw_proc_new" },
	{ 0x73ec66bb, "snd_ak4114_suspend" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0x56493bc7, "snd_ak4114_external_rate" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xf05c7b8, "__x86_indirect_thunk_r15" },
	{ 0x1b0f44d5, "snd_ak4114_reinit" },
	{ 0xf64d3965, "snd_akm4xxx_write" },
	{ 0x2ac0bc7c, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0x3d549164, "snd_card_free" },
	{ 0x2c3bd8c1, "snd_card_register" },
	{ 0xe1f25fb, "snd_pcm_new" },
	{ 0x2e9ea8cb, "snd_ac97_resume" },
	{ 0xff94b8b9, "snd_ctl_add" },
	{ 0xdfb70ce6, "snd_ac97_write_cache" },
	{ 0xe7399ee1, "snd_rawmidi_transmit" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x26b985cf, "snd_rawmidi_transmit_empty" },
	{ 0x443d8c46, "snd_ice1712_akm4xxx_init" },
	{ 0xb2bc72b9, "snd_rawmidi_receive" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "snd,snd-ac97-codec,snd-ak4114,snd-pcm,snd-i2c,snd-ice17xx-ak4xxx,snd-ak4113,snd-rawmidi,snd-pt2258,snd-ak4xxx-adda");

MODULE_ALIAS("pci:v00001412d00001724sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "EBF2F8CDAF6BDBA4C60072A");
