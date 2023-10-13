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
	{ 0xa9ff810b, "b53_switch_register" },
	{ 0x2d525545, "b53_switch_alloc" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xf065f629, "ioread16be" },
	{ 0xfdb9b629, "ioread32be" },
	{ 0x26f8f0b8, "iowrite16be" },
	{ 0xe419bc99, "iowrite32be" },
	{ 0xc47fece0, "dsa_unregister_switch" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "b53_common,dsa_core");

MODULE_ALIAS("of:N*T*Cbrcm,bcm3384-switch");
MODULE_ALIAS("of:N*T*Cbrcm,bcm3384-switchC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm6328-switch");
MODULE_ALIAS("of:N*T*Cbrcm,bcm6328-switchC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm6368-switch");
MODULE_ALIAS("of:N*T*Cbrcm,bcm6368-switchC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm63xx-switch");
MODULE_ALIAS("of:N*T*Cbrcm,bcm63xx-switchC*");

MODULE_INFO(srcversion, "1B2F2AA80B85D6D87A5B43E");
