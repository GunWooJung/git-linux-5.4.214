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
	{ 0xeb233a45, "__kmalloc" },
	{ 0xb8620ad8, "snd_midi_event_reset_decode" },
	{ 0x8150b379, "snd_midi_event_reset_encode" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x1a724fcc, "snd_seq_kernel_client_ctl" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x734e4fba, "snd_midi_event_encode_byte" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x5caa2fa3, "snd_rawmidi_kernel_release" },
	{ 0xb3cb26b7, "snd_seq_create_kernel_client" },
	{ 0xebb642ae, "snd_rawmidi_kernel_open" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdd70dbf6, "snd_midi_event_decode" },
	{ 0x78829c09, "snd_rawmidi_input_params" },
	{ 0x8f6a7d3b, "__snd_seq_driver_register" },
	{ 0xe9e6c50c, "snd_midi_event_new" },
	{ 0x7b8699eb, "snd_seq_event_port_detach" },
	{ 0xc5850110, "printk" },
	{ 0x5958f428, "snd_rawmidi_drain_output" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdd935c83, "snd_midi_event_free" },
	{ 0x3836cdea, "snd_rawmidi_kernel_write" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5bb10130, "snd_rawmidi_kernel_read" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0xe934da1d, "snd_seq_dump_var_event" },
	{ 0xe72e0f5a, "snd_rawmidi_output_params" },
	{ 0x37a0cba, "kfree" },
	{ 0x3fb4d161, "snd_seq_kernel_client_dispatch" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x6bb71038, "snd_seq_delete_kernel_client" },
	{ 0xaa263392, "snd_seq_driver_unregister" },
	{ 0x1d0e36e6, "snd_rawmidi_info_select" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "snd-seq-midi-event,snd-seq,snd-rawmidi,snd-seq-device");


MODULE_INFO(srcversion, "AD53094BDFCFEA672729D41");
