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
	{ 0xa99a62a3, "platform_driver_unregister" },
	{ 0xdc3e4f72, "uart_unregister_driver" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x6fca3e42, "uart_register_driver" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x94625ee8, "uart_suspend_port" },
	{ 0xa6626805, "uart_resume_port" },
	{ 0x174e8e65, "uart_remove_one_port" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cfsl,s32v234-linflexuart");
MODULE_ALIAS("of:N*T*Cfsl,s32v234-linflexuartC*");

MODULE_INFO(srcversion, "32B04C5E65A5B6046748FB2");
