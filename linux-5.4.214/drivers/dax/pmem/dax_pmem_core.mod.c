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
	{ 0x38a16d2f, "__devm_create_dev_dax" },
	{ 0x77358855, "iomem_resource" },
	{ 0x365aeed1, "nvdimm_namespace_common_probe" },
	{ 0xaf8c82e3, "devm_nsio_disable" },
	{ 0xb5cdb356, "alloc_dax_region" },
	{ 0xaed06536, "_dev_warn" },
	{ 0x30b45553, "devm_nsio_enable" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xbe8ce1da, "dax_region_put" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x74a57e9a, "nvdimm_setup_pfn" },
	{ 0xc7c073b7, "__devm_request_region" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x16cf1c83, "to_nd_dax" },
	{ 0xf311784d, "to_nd_region" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "2B48A802BC85C0EA54B5E69");
