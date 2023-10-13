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
	{ 0x19af53eb, "__platform_driver_register" },
	{ 0x51181121, "mtd_device_parse_register" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x5566c033, "nand_scan_with_ids" },
	{ 0x127260fc, "gpiod_direction_output" },
	{ 0xa08d547b, "devm_gpiod_get" },
	{ 0x2bf355c4, "devm_gpiod_get_optional" },
	{ 0x1e57910a, "devm_ioremap_resource" },
	{ 0xd072dc20, "platform_get_resource" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x2048bf8c, "gpiod_get_value" },
	{ 0x3ae5364c, "nand_release" },
	{ 0xe23f1472, "gpiod_set_value" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mtd,nand");


MODULE_INFO(srcversion, "0B1EDAE093D22CF29C2C5F8");
