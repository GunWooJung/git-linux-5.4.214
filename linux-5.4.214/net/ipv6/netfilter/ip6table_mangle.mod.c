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
	{ 0xc21708cd, "unregister_pernet_subsys" },
	{ 0x721c9d1f, "init_net" },
	{ 0x1709a80e, "register_pernet_subsys" },
	{ 0x29ab1eb5, "xt_hook_ops_alloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x34197a90, "ip6t_register_table" },
	{ 0x3c930764, "ip6t_alloc_initial_table" },
	{ 0xbef9bf27, "ip6_route_me_harder" },
	{ 0xadee8141, "ip6t_do_table" },
	{ 0xad756877, "ip6t_unregister_table" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "x_tables,ip6_tables");


MODULE_INFO(srcversion, "0323F0DC986FF84BCE2B6B2");
