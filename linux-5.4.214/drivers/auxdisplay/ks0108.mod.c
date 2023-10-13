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
	{ 0xa15b8bbf, "parport_unregister_driver" },
	{ 0xc5850110, "printk" },
	{ 0x60d9cb33, "parport_unregister_device" },
	{ 0x16b41dd, "parport_claim" },
	{ 0x1f85bb35, "parport_release" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc97796d4, "parport_register_dev_model" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xb946a912, "__parport_register_driver" },
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x9e7d6bd0, "__udelay" },
};

MODULE_INFO(depends, "parport");


MODULE_INFO(srcversion, "A43B7A2BFC6AA42232A7B9C");
