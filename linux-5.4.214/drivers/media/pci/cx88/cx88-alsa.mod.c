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
	{ 0xa9fef4ad, "snd_ctl_boolean_mono_info" },
	{ 0x8b95e7b, "pci_unregister_driver" },
	{ 0xf354855a, "__pci_register_driver" },
	{ 0xed23dc5a, "cx88_risc_databuffer" },
	{ 0x6a9a5a6c, "dma_direct_map_sg" },
	{ 0x5a96cdc6, "__ubsan_handle_builtin_unreachable" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x40a9b349, "vzalloc" },
	{ 0xfb578fc5, "memset" },
	{ 0xa0b04675, "vmalloc_32" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x94589e9e, "dma_direct_unmap_sg" },
	{ 0x9fe59f14, "dma_ops" },
	{ 0x37a0cba, "kfree" },
	{ 0x5c75775f, "dma_free_attrs" },
	{ 0x999e8297, "vfree" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x37a24b11, "pci_read_config_byte" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x2c3bd8c1, "snd_card_register" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xff94b8b9, "snd_ctl_add" },
	{ 0x4d16dbe5, "snd_ctl_new1" },
	{ 0x585079d2, "snd_pcm_set_ops" },
	{ 0xdd64e639, "strscpy" },
	{ 0xe1f25fb, "snd_pcm_new" },
	{ 0xf2d62900, "dma_set_mask" },
	{ 0x93300f11, "cx88_core_get" },
	{ 0x8338fd8, "pci_set_master" },
	{ 0xf51bf8b0, "pci_enable_device" },
	{ 0x26be0b39, "snd_card_new" },
	{ 0x9debba24, "snd_pcm_hw_constraint_pow2" },
	{ 0x6e76d1b8, "cx88_sram_channel_setup" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x3e95082d, "vmalloc_to_page" },
	{ 0x1bb12e6b, "cx88_sram_channel_dump" },
	{ 0x8d88137a, "cx88_sram_channels" },
	{ 0xc5850110, "printk" },
	{ 0x691edb72, "snd_pcm_period_elapsed" },
	{ 0x5edb7ae5, "cx88_print_irqbits" },
	{ 0x7618cec2, "cx88_core_irq" },
	{ 0xc5846169, "pci_disable_device" },
	{ 0x7185b63b, "cx88_core_put" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x5f2471db, "v4l2_ctrl_g_ctrl" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x391e47a2, "__v4l2_ctrl_s_ctrl" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2570d49a, "v4l2_ctrl_find" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x3d549164, "snd_card_free" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "snd-pcm,snd,cx88xx,videodev");

MODULE_ALIAS("pci:v000014F1d00008801sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014F1d00008811sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "B8395DEA2DAFB2CB0D42A0C");
