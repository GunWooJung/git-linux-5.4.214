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
	{ 0x86973e70, "spk_synth_flush" },
	{ 0x481bf037, "spk_do_catch_up" },
	{ 0xc381847b, "spk_ttyio_synth_immediate" },
	{ 0xae7d6424, "spk_ttyio_release" },
	{ 0xb0d50aa0, "spk_ttyio_ops" },
	{ 0x765395c3, "param_ops_int" },
	{ 0x131e5561, "param_ops_charp" },
	{ 0x947be5cd, "param_ops_short" },
	{ 0x81f01fac, "synth_remove" },
	{ 0x3a66088c, "synth_add" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x26e3ea41, "spk_ttyio_synth_probe" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "speakup");


MODULE_INFO(srcversion, "659ECAFC190ABB2ABE94D28");
