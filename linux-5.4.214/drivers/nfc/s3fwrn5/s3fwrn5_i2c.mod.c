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
	{ 0x875d03e0, "i2c_del_driver" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0xf9da3b4b, "s3fwrn5_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x943b1666, "devm_kmalloc" },
};

MODULE_INFO(depends, "s3fwrn5");

MODULE_ALIAS("i2c:s3fwrn5_i2c");
MODULE_ALIAS("of:N*T*Csamsung,s3fwrn5-i2c");
MODULE_ALIAS("of:N*T*Csamsung,s3fwrn5-i2cC*");

MODULE_INFO(srcversion, "5B9E9B5BE92D3E03A5D19E7");
