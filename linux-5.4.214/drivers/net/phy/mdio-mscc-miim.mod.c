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
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x47fb0804, "__mdiobus_register" },
	{ 0x1e57910a, "devm_ioremap_resource" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x93ad19fc, "devm_mdiobus_alloc_size" },
	{ 0xd072dc20, "platform_get_resource" },
	{ 0x12a38747, "usleep_range" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x888b323, "mdiobus_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmscc,ocelot-miim");
MODULE_ALIAS("of:N*T*Cmscc,ocelot-miimC*");

MODULE_INFO(srcversion, "C73183774118AB1BECBF774");
