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
	{ 0xab1b6c43, "__iio_device_register" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x23c6a94e, "mcb_request_mem" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0xd111bb59, "_dev_info" },
	{ 0xeb2c8905, "mcb_release_mem" },
	{ 0xedc03953, "iounmap" },
	{ 0xe1f088fa, "iio_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mcb,industrialio");


MODULE_INFO(srcversion, "D82C052B485C46E9AE8B55E");
