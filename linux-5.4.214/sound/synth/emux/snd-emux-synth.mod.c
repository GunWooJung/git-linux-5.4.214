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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0x7d95566f, "snd_util_mem_avail" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x9405488d, "snd_device_register" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x79812631, "snd_device_free" },
	{ 0xddb02d73, "snd_info_create_card_entry" },
	{ 0x58f84c2d, "seq_printf" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xb3cb26b7, "snd_seq_create_kernel_client" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xfb578fc5, "memset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf0a1fdb3, "snd_midi_process_event" },
	{ 0xa9225458, "snd_hwdep_new" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xdf46d4f1, "module_put" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xb2fd5ceb, "__put_user_4" },
	{ 0x833a3e07, "snd_midi_channel_set_clear" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x25522ab1, "snd_info_free_entry" },
	{ 0xda47fd3b, "snd_virmidi_new" },
	{ 0x2c3bd8c1, "snd_card_register" },
	{ 0x6bb71038, "snd_seq_delete_kernel_client" },
	{ 0x86e0cdbd, "snd_seq_event_port_attach" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x6d71399f, "try_module_get" },
};

MODULE_INFO(depends, "snd-util-mem,snd,snd-seq,snd-seq-midi-emul,snd-hwdep,snd-seq-virmidi");


MODULE_INFO(srcversion, "2B2A1FE0D16A5E0B5EF53FE");
