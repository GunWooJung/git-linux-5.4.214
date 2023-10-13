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
	{ 0x1cd6f316, "param_ops_uint" },
	{ 0x6eed2630, "param_array_ops" },
	{ 0x247cfc43, "isa_unregister_driver" },
	{ 0x3ebaac74, "isa_register_driver" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x1a0f5952, "__devm_iio_device_register" },
	{ 0xc7c073b7, "__devm_request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x53c6e7a4, "devm_iio_device_alloc" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "industrialio");


MODULE_INFO(srcversion, "C6E6E743F3F1CDD8D32967E");
