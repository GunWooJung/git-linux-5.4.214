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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0xdf5d2d08, "spk_var_store" },
	{ 0x98a07291, "spk_var_show" },
	{ 0x947be5cd, "param_ops_short" },
	{ 0x81f01fac, "synth_remove" },
	{ 0x3a66088c, "synth_add" },
	{ 0x4b2e0ffe, "misc_register" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x84dad068, "synth_buffer_getc" },
	{ 0x76d40046, "synth_buffer_skip_nonlatin1" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x1000e51, "schedule" },
	{ 0xaf7d0f48, "current_task" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x41a160e5, "synth_buffer_empty" },
	{ 0xb8461707, "synth_current" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb734cb9d, "speakup_event" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf7d31de9, "kstrtoul_from_user" },
	{ 0xbbd15a51, "speakup_start_ttys" },
	{ 0xc5850110, "printk" },
	{ 0x35775925, "misc_deregister" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xd93829dd, "speakup_info" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "speakup");


MODULE_INFO(srcversion, "95382B9530A17EBEF71C483");
