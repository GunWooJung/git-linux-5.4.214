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
	{ 0xee176536, "xt_unregister_match" },
	{ 0x3b56448e, "xt_register_match" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4df2ea84, "gen_estimator_read" },
	{ 0x823353f8, "xt_rateest_lookup" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x8d32d5ae, "xt_rateest_put" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "x_tables,xt_RATEEST");


MODULE_INFO(srcversion, "7143D748E3AC33AA248D3FA");
