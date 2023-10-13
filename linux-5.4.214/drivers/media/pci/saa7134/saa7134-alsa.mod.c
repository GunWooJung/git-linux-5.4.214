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
	{ 0x765395c3, "param_ops_int" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0xdaed65a6, "snd_pcm_lib_ioctl" },
	{ 0x730c4be3, "saa7134_boards" },
	{ 0x1211df5d, "saa7134_devlist" },
	{ 0x96457fc4, "saa7134_dmasound_exit" },
	{ 0xda936c0a, "saa7134_dmasound_init" },
	{ 0x691edb72, "snd_pcm_period_elapsed" },
	{ 0x78d38ba1, "snd_pcm_stop_xrun" },
	{ 0x2b5c8327, "saa7134_set_dmabits" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xecdc746a, "snd_pcm_hw_constraint_step" },
	{ 0x8a0fbe36, "snd_pcm_hw_constraint_integer" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x6a9a5a6c, "dma_direct_map_sg" },
	{ 0xf0e4322f, "saa7134_pgtable_build" },
	{ 0xebc0bf65, "saa7134_pgtable_alloc" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xfb578fc5, "memset" },
	{ 0xa0b04675, "vmalloc_32" },
	{ 0xd97e3be5, "saa7134_pgtable_free" },
	{ 0x94589e9e, "dma_direct_unmap_sg" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2c3bd8c1, "snd_card_register" },
	{ 0xc5850110, "printk" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x585079d2, "snd_pcm_set_ops" },
	{ 0xe1f25fb, "snd_pcm_new" },
	{ 0xff94b8b9, "snd_ctl_add" },
	{ 0x4d16dbe5, "snd_ctl_new1" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xdd64e639, "strscpy" },
	{ 0x26be0b39, "snd_card_new" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0x999e8297, "vfree" },
	{ 0x37a0cba, "kfree" },
	{ 0x1352e3a9, "saa7134_tvaudio_setmute" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x4f816e9b, "snd_pcm_format_big_endian" },
	{ 0x1d027e4b, "snd_pcm_format_signed" },
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x3e95082d, "vmalloc_to_page" },
	{ 0xb6e07b70, "saa_dsp_writel" },
	{ 0x904b4af4, "snd_ctl_notify" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe5c51729, "__ubsan_handle_divrem_overflow" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x3d549164, "snd_card_free" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "snd-pcm,saa7134,snd");


MODULE_INFO(srcversion, "609CD127C6CB9BD85FE93A0");
