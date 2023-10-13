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
	{ 0xbc6e4433, "mcb_unregister_driver" },
	{ 0x49b48d49, "__mcb_register_driver" },
	{ 0x66432aba, "serial8250_register_8250_port" },
	{ 0xda324510, "mcb_get_irq" },
	{ 0x5a921311, "strncmp" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x1e57910a, "devm_ioremap_resource" },
	{ 0x7976b0b0, "mcb_get_resource" },
	{ 0xcefcd99a, "serial8250_unregister_port" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mcb");


MODULE_INFO(srcversion, "00098ECE048803C2EA36838");
