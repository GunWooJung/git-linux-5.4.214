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
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xb13c162f, "devm_rtc_device_register" },
	{ 0x8281b36, "devm_ioremap" },
	{ 0xc7c073b7, "__devm_request_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xd072dc20, "platform_get_resource" },
	{ 0xc22cd4dd, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D3C2AC0FA2A39588B44B6AF");
