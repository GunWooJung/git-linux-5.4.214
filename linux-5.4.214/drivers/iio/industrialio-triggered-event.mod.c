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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xed93c0b3, "module_layout" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x55f4530a, "iio_alloc_pollfunc" },
	{ 0x1505e8e2, "iio_dealloc_pollfunc" },
};

MODULE_INFO(depends, "industrialio");


MODULE_INFO(srcversion, "7ED29CEFA5669A2DF866A59");
