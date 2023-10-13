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
	{ 0x85bd1608, "__request_region" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x24a94b26, "snd_info_get_line" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xecdc746a, "snd_pcm_hw_constraint_step" },
	{ 0x691edb72, "snd_pcm_period_elapsed" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xdb723e44, "snd_dma_alloc_pages" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0xa1637162, "snd_rawmidi_set_ops" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x8a0fbe36, "snd_pcm_hw_constraint_integer" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0xef0af3db, "snd_rawmidi_new" },
	{ 0x131e5561, "param_ops_charp" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x99f86ed6, "snd_device_new" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x585079d2, "snd_pcm_set_ops" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0x486a27d9, "snd_pcm_lib_free_pages" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc5a6d10b, "release_and_free_resource" },
	{ 0xdaed65a6, "snd_pcm_lib_ioctl" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xa9fef4ad, "snd_ctl_boolean_mono_info" },
	{ 0x521a011a, "snd_pcm_lib_malloc_pages" },
	{ 0x26be0b39, "snd_card_new" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x4e1b99f, "snd_pcm_std_chmaps" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4d16dbe5, "snd_ctl_new1" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x5f92956a, "snd_dma_free_pages" },
	{ 0xd0c1e622, "pci_read_config_dword" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x625a9e96, "snd_ac97_bus" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x97ffda79, "snd_ac97_mixer" },
	{ 0x8a4baec, "snd_card_rw_proc_new" },
	{ 0x37a0cba, "kfree" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x2ac0bc7c, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0x3d549164, "snd_card_free" },
	{ 0x2c3bd8c1, "snd_card_register" },
	{ 0x72455018, "snd_pcm_add_chmap_ctls" },
	{ 0xe1f25fb, "snd_pcm_new" },
	{ 0xff94b8b9, "snd_ctl_add" },
	{ 0xe7399ee1, "snd_rawmidi_transmit" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0xb2bc72b9, "snd_rawmidi_receive" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "snd,snd-pcm,snd-rawmidi,snd-ac97-codec");

MODULE_ALIAS("pci:v00001102d00000006sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "066D20DDA14EDFA63131BFF");
