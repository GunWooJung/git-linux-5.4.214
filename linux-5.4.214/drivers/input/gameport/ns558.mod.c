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
	{ 0xa317608d, "pnp_unregister_driver" },
	{ 0xb46f899, "gameport_unregister_port" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xf9a482f9, "msleep" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x5b641e8c, "pnp_register_driver" },
	{ 0x37a0cba, "kfree" },
	{ 0xc5850110, "printk" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x8c40307b, "__gameport_register_port" },
	{ 0xe8b136ae, "gameport_set_phys" },
	{ 0x31b7ad04, "kmem_cache_alloc_trace" },
	{ 0x72a990a4, "kmalloc_caches" },
	{ 0x85bd1608, "__request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x20c79ab5, "pnp_get_resource" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "gameport");

MODULE_ALIAS("pnp:d@P@0001*");
MODULE_ALIAS("acpi*:@P@0001:*");
MODULE_ALIAS("pnp:d@P@0020*");
MODULE_ALIAS("acpi*:@P@0020:*");
MODULE_ALIAS("pnp:d@P@1001*");
MODULE_ALIAS("acpi*:@P@1001:*");
MODULE_ALIAS("pnp:d@P@2001*");
MODULE_ALIAS("acpi*:@P@2001:*");
MODULE_ALIAS("pnp:dASB16fd*");
MODULE_ALIAS("acpi*:ASB16FD:*");
MODULE_ALIAS("pnp:dAZT3001*");
MODULE_ALIAS("acpi*:AZT3001:*");
MODULE_ALIAS("pnp:dCDC0001*");
MODULE_ALIAS("acpi*:CDC0001:*");
MODULE_ALIAS("pnp:dCSC0001*");
MODULE_ALIAS("acpi*:CSC0001:*");
MODULE_ALIAS("pnp:dCSC000f*");
MODULE_ALIAS("acpi*:CSC000F:*");
MODULE_ALIAS("pnp:dCSC0101*");
MODULE_ALIAS("acpi*:CSC0101:*");
MODULE_ALIAS("pnp:dCTL7001*");
MODULE_ALIAS("acpi*:CTL7001:*");
MODULE_ALIAS("pnp:dCTL7002*");
MODULE_ALIAS("acpi*:CTL7002:*");
MODULE_ALIAS("pnp:dCTL7005*");
MODULE_ALIAS("acpi*:CTL7005:*");
MODULE_ALIAS("pnp:dENS2020*");
MODULE_ALIAS("acpi*:ENS2020:*");
MODULE_ALIAS("pnp:dESS0001*");
MODULE_ALIAS("acpi*:ESS0001:*");
MODULE_ALIAS("pnp:dESS0005*");
MODULE_ALIAS("acpi*:ESS0005:*");
MODULE_ALIAS("pnp:dESS6880*");
MODULE_ALIAS("acpi*:ESS6880:*");
MODULE_ALIAS("pnp:dIBM0012*");
MODULE_ALIAS("acpi*:IBM0012:*");
MODULE_ALIAS("pnp:dOPT0001*");
MODULE_ALIAS("acpi*:OPT0001:*");
MODULE_ALIAS("pnp:dYMH0006*");
MODULE_ALIAS("acpi*:YMH0006:*");
MODULE_ALIAS("pnp:dYMH0022*");
MODULE_ALIAS("acpi*:YMH0022:*");
MODULE_ALIAS("pnp:dPNPb02f*");
MODULE_ALIAS("acpi*:PNPB02F:*");

MODULE_INFO(srcversion, "B5E0331A1EF63A78327C0FE");
