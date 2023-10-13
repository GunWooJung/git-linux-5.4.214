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
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xfe8c4c05, "snd_emux_new" },
	{ 0x90ac8337, "snd_emu10k1_synth_alloc" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x28d8d922, "snd_emux_register" },
	{ 0x444c6019, "snd_emu10k1_memblk_map" },
	{ 0x4231f1d1, "snd_emu10k1_voice_alloc" },
	{ 0x8f6a7d3b, "__snd_seq_driver_register" },
	{ 0xfac1d7b6, "snd_emu10k1_synth_bzero" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x3475a57c, "snd_emux_free" },
	{ 0xd1212ac1, "snd_emu10k1_ptr_write" },
	{ 0xadcaf016, "snd_emu10k1_synth_free" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xda2b8c52, "snd_emu10k1_voice_free" },
	{ 0x2d94c4bc, "snd_emu10k1_synth_copy_from_user" },
	{ 0x5f947a39, "snd_emu10k1_ptr_read" },
	{ 0xaa263392, "snd_seq_driver_unregister" },
};

MODULE_INFO(depends, "snd-emux-synth,snd-emu10k1,snd-seq-device");


MODULE_INFO(srcversion, "B9A37584DA2A60C8E54AFEE");
