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
	{ 0x86f434e2, "driver_unregister" },
	{ 0xf6dd8fef, "__spi_register_driver" },
	{ 0x51181121, "mtd_device_parse_register" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x586583b8, "spi_sync" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x5ef55b4f, "mtd_device_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "mtd");

MODULE_ALIAS("of:N*T*Cmicrochip,mchp23k256");
MODULE_ALIAS("of:N*T*Cmicrochip,mchp23k256C*");
MODULE_ALIAS("of:N*T*Cmicrochip,mchp23lcv1024");
MODULE_ALIAS("of:N*T*Cmicrochip,mchp23lcv1024C*");

MODULE_INFO(srcversion, "9ACDB7845C5DB7DCDC198C8");
