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
	{ 0x765395c3, "param_ops_int" },
	{ 0x7681946c, "unregister_pm_notifier" },
	{ 0x5b1c5c13, "debugfs_remove_recursive" },
	{ 0x9cc4f70a, "register_pm_notifier" },
	{ 0x73608817, "notifier_err_inject_init" },
	{ 0xbb53879d, "notifier_err_inject_dir" },
};

MODULE_INFO(depends, "notifier-error-inject");


MODULE_INFO(srcversion, "D91615DE246609E4DDCB242");
