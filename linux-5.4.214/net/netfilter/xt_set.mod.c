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
	{ 0x2fe9b3cd, "xt_unregister_targets" },
	{ 0x9eede0c5, "xt_unregister_matches" },
	{ 0x3fbc2bb8, "xt_register_targets" },
	{ 0x110fcf5f, "xt_register_matches" },
	{ 0xedfbf652, "__ubsan_handle_shift_out_of_bounds" },
	{ 0x278000ee, "ip_set_test" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf9ab863e, "ip_set_del" },
	{ 0x2a74f756, "ip_set_add" },
	{ 0xc5850110, "printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x8c93c093, "ip_set_nfnl_get_byindex" },
	{ 0xc0816b1f, "ip_set_nfnl_put" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "x_tables,ip_set");


MODULE_INFO(srcversion, "2664E89D13CED67CA5A2AEC");
