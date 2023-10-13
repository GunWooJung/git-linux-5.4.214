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
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x6bcb4616, "nf_conntrack_helper_register" },
	{ 0x3230444a, "nf_conntrack_helper_unregister" },
	{ 0xd56921be, "nf_conntrack_broadcast_help" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x1cd6f316, "param_ops_uint" },
};

MODULE_INFO(depends, "nf_conntrack,nf_conntrack_broadcast");


MODULE_INFO(srcversion, "C440ABD15F8AE9D206DF88B");
