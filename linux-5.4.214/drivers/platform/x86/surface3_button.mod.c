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
	{ 0xb1a20db, "i2c_register_driver" },
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xf14ea0e9, "platform_device_add" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0xca944cd, "devm_kfree" },
	{ 0xaf465642, "platform_device_put" },
	{ 0x7dd35ee6, "platform_device_add_data" },
	{ 0xd73c36a2, "platform_device_alloc" },
	{ 0xe22cbce1, "gpiod_put" },
	{ 0xd38e0687, "desc_to_gpio" },
	{ 0x349726b2, "gpiod_get_index" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xfef787f1, "gpiod_count" },
	{ 0x15cb5620, "is_acpi_device_node" },
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:MSHW0028:*");

MODULE_INFO(srcversion, "3D355A7E3EB48C366961A03");
