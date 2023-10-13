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
	{ 0x1709a80e, "register_pernet_subsys" },
	{ 0x3b3bea8b, "ebt_do_table" },
	{ 0x61cd8678, "ebt_unregister_table" },
	{ 0xa6d430bc, "ebt_register_table" },
	{ 0x45c76a53, "ebt_unregister_table_pre_exit" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ebtables");


MODULE_INFO(srcversion, "AAD497DBD4FFEA647B993EA");
