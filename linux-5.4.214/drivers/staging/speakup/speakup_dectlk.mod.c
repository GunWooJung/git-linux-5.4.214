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
	{ 0x3c1dfb8b, "spk_synth_is_alive_restart" },
	{ 0xc381847b, "spk_ttyio_synth_immediate" },
	{ 0xae7d6424, "spk_ttyio_release" },
	{ 0x26e3ea41, "spk_ttyio_synth_probe" },
	{ 0xb0d50aa0, "spk_ttyio_ops" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x131e5561, "param_ops_charp" },
	{ 0x947be5cd, "param_ops_short" },
	{ 0x81f01fac, "synth_remove" },
	{ 0x3a66088c, "synth_add" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x349cba85, "strchr" },
	{ 0x84dad068, "synth_buffer_getc" },
	{ 0xaadb0612, "synth_buffer_peek" },
	{ 0x41a160e5, "synth_buffer_empty" },
	{ 0x76d40046, "synth_buffer_skip_nonlatin1" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xd93829dd, "speakup_info" },
	{ 0x6361033e, "spk_get_var" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xaf7d0f48, "current_task" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "speakup");


MODULE_INFO(srcversion, "82F161B41FAC12DC010029C");
