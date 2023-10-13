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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xd0bb4ec1, "pci_write_config_dword" },
	{ 0xf9a482f9, "msleep" },
	{ 0x20b167ab, "snd_ac97_write" },
	{ 0xd712aabe, "pci_write_config_word" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x691edb72, "snd_pcm_period_elapsed" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x470c8d8, "snd_pci_quirk_lookup" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0x999e8297, "vfree" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0x66c54ff1, "input_event" },
	{ 0x131e5561, "param_ops_charp" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x99f86ed6, "snd_device_new" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x585079d2, "snd_pcm_set_ops" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0x486a27d9, "snd_pcm_lib_free_pages" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xdaed65a6, "snd_pcm_lib_ioctl" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x521a011a, "snd_pcm_lib_malloc_pages" },
	{ 0xe157cee9, "snd_ac97_suspend" },
	{ 0x26be0b39, "snd_card_new" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x94a09154, "input_register_device" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x4e97c8d9, "input_free_device" },
	{ 0xd0c1e622, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x625a9e96, "snd_ac97_bus" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x97ffda79, "snd_ac97_mixer" },
	{ 0x37a0cba, "kfree" },
	{ 0x2ab40469, "input_unregister_device" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x80500894, "request_firmware" },
	{ 0x2ac0bc7c, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0x3d549164, "snd_card_free" },
	{ 0x2c3bd8c1, "snd_card_register" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xe1f25fb, "snd_pcm_new" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2e9ea8cb, "snd_ac97_resume" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x5c9109de, "release_firmware" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe914e41e, "strcpy" },
	{ 0x4f55cb4, "input_allocate_device" },
};

MODULE_INFO(depends, "snd-pcm,snd-ac97-codec,snd");

MODULE_ALIAS("pci:v0000125Dd00001988sv*sd*bc04sc01i*");
MODULE_ALIAS("pci:v0000125Dd00001989sv*sd*bc04sc01i*");
MODULE_ALIAS("pci:v0000125Dd00001990sv*sd*bc04sc01i*");
MODULE_ALIAS("pci:v0000125Dd00001992sv*sd*bc04sc01i*");
MODULE_ALIAS("pci:v0000125Dd00001998sv*sd*bc04sc01i*");
MODULE_ALIAS("pci:v0000125Dd00001999sv*sd*bc04sc01i*");
MODULE_ALIAS("pci:v0000125Dd0000199Asv*sd*bc04sc01i*");
MODULE_ALIAS("pci:v0000125Dd0000199Bsv*sd*bc04sc01i*");

MODULE_INFO(srcversion, "6E5B8EDA17A98F087FA61AE");
