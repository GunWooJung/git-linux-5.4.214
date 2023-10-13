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
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x83cc5e2e, "mcb_bus_add_devices" },
	{ 0x29993628, "chameleon_parse_cells" },
	{ 0x48eab652, "mcb_alloc_bus" },
	{ 0x8281b36, "devm_ioremap" },
	{ 0xc7c073b7, "__devm_request_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0xd072dc20, "platform_get_resource" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x85f2c9c3, "mcb_release_bus" },
	{ 0xf14ea0e9, "platform_device_add" },
	{ 0xaf465642, "platform_device_put" },
	{ 0x2f8b92de, "platform_device_add_resources" },
	{ 0xd73c36a2, "platform_device_alloc" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mcb");

MODULE_ALIAS("dmi*:svn*MEN*:pvr*14SC24*:");
MODULE_ALIAS("dmi*:svn*MEN*:pvr*14SC31*:");

MODULE_INFO(srcversion, "CF13D539220F3BF5B0E91FB");
