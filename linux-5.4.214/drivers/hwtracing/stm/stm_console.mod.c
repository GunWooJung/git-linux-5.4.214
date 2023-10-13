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
	{ 0x2d84602c, "register_console" },
	{ 0x9d801813, "stm_source_write" },
	{ 0x6b7fcc4d, "stm_source_register_device" },
	{ 0x647cf122, "stm_source_unregister_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xd238a319, "unregister_console" },
};

MODULE_INFO(depends, "stm_core");


MODULE_INFO(srcversion, "2165BE34221AE60BC17F008");
