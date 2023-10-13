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
	{ 0x85bd1608, "__request_region" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x7f717f65, "snd_pcm_hw_rule_noresample" },
	{ 0xd712aabe, "pci_write_config_word" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x77358855, "iomem_resource" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x37a24b11, "pci_read_config_byte" },
	{ 0x691edb72, "snd_pcm_period_elapsed" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xdb723e44, "snd_dma_alloc_pages" },
	{ 0xa01de691, "snd_opl3_hwdep_new" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x18392016, "snd_mpu401_uart_new" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0x928d7386, "pci_write_config_byte" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x131e5561, "param_ops_charp" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xc0fec227, "snd_mpu401_uart_interrupt" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x99f86ed6, "snd_device_new" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x7aa7db33, "snd_timer_new" },
	{ 0x585079d2, "snd_pcm_set_ops" },
	{ 0x904b4af4, "snd_ctl_notify" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0x486a27d9, "snd_pcm_lib_free_pages" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc5a6d10b, "release_and_free_resource" },
	{ 0xdaed65a6, "snd_pcm_lib_ioctl" },
	{ 0x8c40307b, "__gameport_register_port" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xa9fef4ad, "snd_ctl_boolean_mono_info" },
	{ 0x521a011a, "snd_pcm_lib_malloc_pages" },
	{ 0xe157cee9, "snd_ac97_suspend" },
	{ 0x26be0b39, "snd_card_new" },
	{ 0x81b69e41, "snd_ctl_enum_info" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x4e1b99f, "snd_pcm_std_chmaps" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x4d16dbe5, "snd_ctl_new1" },
	{ 0xb46f899, "gameport_unregister_port" },
	{ 0x5f92956a, "snd_dma_free_pages" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x625a9e96, "snd_ac97_bus" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xba4d7ef, "snd_opl3_create" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x97ffda79, "snd_ac97_mixer" },
	{ 0xfab90cd1, "snd_ac97_update_bits" },
	{ 0x8a4baec, "snd_card_rw_proc_new" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0xad98bdea, "snd_timer_interrupt" },
	{ 0x35a218ab, "param_ops_long" },
	{ 0xa9e1e066, "snd_pcm_hw_constraint_minmax" },
	{ 0xedc03953, "iounmap" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x80500894, "request_firmware" },
	{ 0x2ac0bc7c, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0x3d549164, "snd_card_free" },
	{ 0x2c3bd8c1, "snd_card_register" },
	{ 0x72455018, "snd_pcm_add_chmap_ctls" },
	{ 0xe1f25fb, "snd_pcm_new" },
	{ 0x2e9ea8cb, "snd_ac97_resume" },
	{ 0xff94b8b9, "snd_ctl_add" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x5c9109de, "release_firmware" },
	{ 0xe8b136ae, "gameport_set_phys" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "snd-pcm,snd-opl3-lib,snd-mpu401-uart,snd,snd-timer,gameport,snd-ac97-codec");

MODULE_ALIAS("pci:v00001073d00000004sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001073d0000000Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001073d0000000Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001073d0000000Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001073d00000010sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001073d00000012sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "175B3953FE0C215564E4639");
