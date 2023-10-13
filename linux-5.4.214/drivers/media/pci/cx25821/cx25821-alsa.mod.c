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
	{ 0x68a41536, "param_ops_bool" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0x765395c3, "param_ops_int" },
	{ 0xdaed65a6, "snd_pcm_lib_ioctl" },
	{ 0x4e367da1, "driver_for_each_device" },
	{ 0xdb10a0aa, "driver_find" },
	{ 0x6d00f69e, "pci_bus_type" },
	{ 0xe2d91abc, "cx25821_risc_databuffer_audio" },
	{ 0x6a9a5a6c, "dma_direct_map_sg" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xfb578fc5, "memset" },
	{ 0xa0b04675, "vmalloc_32" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x94589e9e, "dma_direct_unmap_sg" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x37a0cba, "kfree" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x999e8297, "vfree" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x2c3bd8c1, "snd_card_register" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x585079d2, "snd_pcm_set_ops" },
	{ 0xe1f25fb, "snd_pcm_new" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xdd64e639, "strscpy" },
	{ 0x26be0b39, "snd_card_new" },
	{ 0x9debba24, "snd_pcm_hw_constraint_pow2" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x8b12826e, "cx25821_sram_channel_setup_audio" },
	{ 0xc9211902, "cx25821_set_gpiopin_direction" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x3e95082d, "vmalloc_to_page" },
	{ 0x27c2f0be, "cx25821_sram_channel_dump_audio" },
	{ 0xe9050411, "cx25821_sram_channels" },
	{ 0xc5850110, "printk" },
	{ 0x691edb72, "snd_pcm_period_elapsed" },
	{ 0x44b517f5, "cx25821_print_irqbits" },
	{ 0x3d549164, "snd_card_free" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "snd-pcm,cx25821,snd");

MODULE_ALIAS("pci:v000014F1d00000920sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "549CED33EE85A1CCB4DF3EB");
