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
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x73b83a76, "snd_ac97_read" },
	{ 0x20b167ab, "snd_ac97_write" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x77358855, "iomem_resource" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x37a24b11, "pci_read_config_byte" },
	{ 0x691edb72, "snd_pcm_period_elapsed" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xdb723e44, "snd_dma_alloc_pages" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x342a2354, "copy_to_user_fromio" },
	{ 0x4f816e9b, "snd_pcm_format_big_endian" },
	{ 0xddb02d73, "snd_info_create_card_entry" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xa1637162, "snd_rawmidi_set_ops" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xef0af3db, "snd_rawmidi_new" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x131e5561, "param_ops_charp" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x99f86ed6, "snd_device_new" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x2737b538, "snd_pcm_hw_constraint_list" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x585079d2, "snd_pcm_set_ops" },
	{ 0x904b4af4, "snd_ctl_notify" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0x2ab7989d, "mutex_lock" },
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
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x4d16dbe5, "snd_ctl_new1" },
	{ 0xb46f899, "gameport_unregister_port" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x5f92956a, "snd_dma_free_pages" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x2078a99d, "snd_ctl_find_id" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x625a9e96, "snd_ac97_bus" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x97ffda79, "snd_ac97_mixer" },
	{ 0xfab90cd1, "snd_ac97_update_bits" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xa61aa028, "snd_pcm_format_unsigned" },
	{ 0x25522ab1, "snd_info_free_entry" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0xedc03953, "iounmap" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x80500894, "request_firmware" },
	{ 0xa207ea98, "pci_get_device" },
	{ 0x2ac0bc7c, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0x3d549164, "snd_card_free" },
	{ 0x2c3bd8c1, "snd_card_register" },
	{ 0x8423aab5, "pci_dev_put" },
	{ 0xe1f25fb, "snd_pcm_new" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2e9ea8cb, "snd_ac97_resume" },
	{ 0xff94b8b9, "snd_ctl_add" },
	{ 0xdfb70ce6, "snd_ac97_write_cache" },
	{ 0xe7399ee1, "snd_rawmidi_transmit" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x5c9109de, "release_firmware" },
	{ 0xb2bc72b9, "snd_rawmidi_receive" },
	{ 0xe8b136ae, "gameport_set_phys" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "snd-pcm,snd-ac97-codec,snd,snd-rawmidi,gameport");

MODULE_ALIAS("pci:v00001013d00006001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001013d00006003sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001013d00006004sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "11FF4360F4C97088F132FB1");
