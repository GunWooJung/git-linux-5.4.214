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
	{ 0xada83f40, "lan9303_register_set" },
	{ 0xd25948c6, "mdio_driver_unregister" },
	{ 0x21ec145d, "mdio_driver_register" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xb4ff3ad4, "lan9303_probe" },
	{ 0x61d19c6, "__devm_regmap_init" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x70c02408, "mdiobus_read_nested" },
	{ 0x4407d962, "mdiobus_write_nested" },
	{ 0xd98fc9f, "lan9303_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "lan9303-core");

MODULE_ALIAS("of:N*T*Csmsc,lan9303-mdio");
MODULE_ALIAS("of:N*T*Csmsc,lan9303-mdioC*");

MODULE_INFO(srcversion, "DC115F40B08BF0FEE81EF31");
