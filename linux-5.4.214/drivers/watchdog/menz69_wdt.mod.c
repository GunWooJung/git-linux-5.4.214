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
	{ 0xbc6e4433, "mcb_unregister_driver" },
	{ 0x49b48d49, "__mcb_register_driver" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xfd672d72, "watchdog_register_device" },
	{ 0x4ab741fd, "watchdog_init_timeout" },
	{ 0x8281b36, "devm_ioremap" },
	{ 0x23c6a94e, "mcb_request_mem" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xeb2c8905, "mcb_release_mem" },
	{ 0x4d290b16, "watchdog_unregister_device" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mcb");


MODULE_INFO(srcversion, "F8FBCEF70D523BB51F7DDA5");
