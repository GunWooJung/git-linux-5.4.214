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
	{ 0x692a652c, "snd_sbdsp_create" },
	{ 0x85bd1608, "__request_region" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xd712aabe, "pci_write_config_word" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x691edb72, "snd_pcm_period_elapsed" },
	{ 0xef46714e, "snd_sbdsp_reset" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0xa01de691, "snd_opl3_hwdep_new" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x18392016, "snd_mpu401_uart_new" },
	{ 0x982ccbd5, "pci_release_regions" },
	{ 0x68a41536, "param_ops_bool" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x91e0d49, "dma_set_coherent_mask" },
	{ 0xd1843f79, "snd_sbmixer_suspend" },
	{ 0x99fadb7c, "snd_sbmixer_read" },
	{ 0x1d027e4b, "snd_pcm_format_signed" },
	{ 0x131e5561, "param_ops_charp" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xc0fec227, "snd_mpu401_uart_interrupt" },
	{ 0xaed06536, "_dev_warn" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x585079d2, "snd_pcm_set_ops" },
	{ 0xb0de39d3, "pci_read_config_word" },
	{ 0x486a27d9, "snd_pcm_lib_free_pages" },
	{ 0xc5a6d10b, "release_and_free_resource" },
	{ 0xdaed65a6, "snd_pcm_lib_ioctl" },
	{ 0x8c40307b, "__gameport_register_port" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x521a011a, "snd_pcm_lib_malloc_pages" },
	{ 0x26be0b39, "snd_card_new" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xb46f899, "gameport_unregister_port" },
	{ 0x52756bef, "snd_sbmixer_new" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xba4d7ef, "snd_opl3_create" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x16ce63be, "snd_sbdsp_command" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0x4a5eb426, "pci_request_regions" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0x2ac0bc7c, "snd_pcm_lib_preallocate_pages_for_all" },
	{ 0x3d549164, "snd_card_free" },
	{ 0x2c3bd8c1, "snd_card_register" },
	{ 0xe1f25fb, "snd_pcm_new" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0xb0e60f94, "snd_sbmixer_resume" },
	{ 0xe8b136ae, "gameport_set_phys" },
	{ 0x58364862, "snd_sbmixer_write" },
};

MODULE_INFO(depends, "snd-sb-common,snd-pcm,snd-opl3-lib,snd-mpu401-uart,snd,gameport");

MODULE_ALIAS("pci:v00004005d00004000sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "813AB9FA9029AB4A88965A6");
