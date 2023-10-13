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
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x532a4e22, "regcache_sync" },
	{ 0x8c41dd8e, "regcache_mark_dirty" },
	{ 0x904a8908, "regmap_write" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x74e831b6, "platform_device_unregister" },
	{ 0xb093a6fd, "i2c_put_adapter" },
	{ 0x25730e51, "i2c_get_adapter" },
	{ 0x61d19c6, "__devm_regmap_init" },
	{ 0x7e75c696, "devm_ioport_map" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x56cf6cd9, "platform_device_register_full" },
	{ 0xd4835ef8, "dmi_check_system" },
	{ 0xf10de535, "ioread8" },
	{ 0x848d372e, "iowrite8" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("dmi*:rn*VMOD0001*:");
MODULE_ALIAS("dmi*:rn*VMOD0002*:");
MODULE_ALIAS("dmi*:rn*VMOD0003*:");
MODULE_ALIAS("dmi*:rn*VMOD0004*:");
MODULE_ALIAS("dmi*:rn*VMOD0005*:");
MODULE_ALIAS("dmi*:rn*VMOD0007*:");
MODULE_ALIAS("dmi*:pn*MSN274*:rvn*MellanoxTechnologies*:");
MODULE_ALIAS("dmi*:pn*MSN24*:rvn*MellanoxTechnologies*:");
MODULE_ALIAS("dmi*:pn*MSN27*:rvn*MellanoxTechnologies*:");
MODULE_ALIAS("dmi*:pn*MSB*:rvn*MellanoxTechnologies*:");
MODULE_ALIAS("dmi*:pn*MSX*:rvn*MellanoxTechnologies*:");
MODULE_ALIAS("dmi*:pn*MSN21*:rvn*MellanoxTechnologies*:");
MODULE_ALIAS("dmi*:pn*MSN201*:rvn*MellanoxTechnologies*:");
MODULE_ALIAS("dmi*:pn*MQM87*:rvn*MellanoxTechnologies*:");
MODULE_ALIAS("dmi*:pn*MSN37*:rvn*MellanoxTechnologies*:");
MODULE_ALIAS("dmi*:pn*MSN34*:rvn*MellanoxTechnologies*:");
MODULE_ALIAS("dmi*:pn*MSN38*:rvn*MellanoxTechnologies*:");

MODULE_INFO(srcversion, "E2B488F4065AB7B4FB22060");
