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
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x20b167ab, "snd_ac97_write" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x754d539c, "strlen" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x691edb72, "snd_pcm_period_elapsed" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xdb723e44, "snd_dma_alloc_pages" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x76cff281, "snd_card_disconnect" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x131e5561, "param_ops_charp" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0x99f86ed6, "snd_device_new" },
	{ 0xf10de535, "ioread8" },
	{ 0x3bffcc92, "pci_iounmap" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x2737b538, "snd_pcm_hw_constraint_list" },
	{ 0x585079d2, "snd_pcm_set_ops" },
	{ 0x486a27d9, "snd_pcm_lib_free_pages" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xdaed65a6, "snd_pcm_lib_ioctl" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x521a011a, "snd_pcm_lib_malloc_pages" },
	{ 0xe157cee9, "snd_ac97_suspend" },
	{ 0x26be0b39, "snd_card_new" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x848d372e, "iowrite8" },
	{ 0x5f92956a, "snd_dma_free_pages" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x625a9e96, "snd_ac97_bus" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x97ffda79, "snd_ac97_mixer" },
	{ 0x8a4baec, "snd_card_rw_proc_new" },
	{ 0x6a86bc1, "iowrite16" },
	{ 0x37a0cba, "kfree" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xc5534d64, "ioread16" },
	{ 0x2ac0bc7c, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0x3d549164, "snd_card_free" },
	{ 0x2c3bd8c1, "snd_card_register" },
	{ 0xe1f25fb, "snd_pcm_new" },
	{ 0x2e9ea8cb, "snd_ac97_resume" },
	{ 0x5c4e734e, "pci_iomap" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0xe484e35f, "ioread32" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "snd-ac97-codec,snd-pcm,snd");

MODULE_ALIAS("pci:v00008086d00002416sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002426sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002446sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002486sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000024C6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000024D6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000266Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000027DDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007196sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00007446sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001039d00007013sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000001C1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000069sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00000089sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000000D9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d0000746Esv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "9E6CA5D12537227981D9EA5");
