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
	{ 0x68a41536, "param_ops_bool" },
	{ 0xc21708cd, "unregister_pernet_subsys" },
	{ 0x721c9d1f, "init_net" },
	{ 0x1709a80e, "register_pernet_subsys" },
	{ 0x29ab1eb5, "xt_hook_ops_alloc" },
	{ 0xc5850110, "printk" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0x37a0cba, "kfree" },
	{ 0x20c69b66, "ipt_register_table" },
	{ 0xc4b29f4b, "ipt_alloc_initial_table" },
	{ 0xda19f9a9, "ipt_do_table" },
	{ 0xbfb360de, "ipt_unregister_table" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "x_tables,ip_tables");


MODULE_INFO(srcversion, "C0934EE589682EAFA89B5C5");
