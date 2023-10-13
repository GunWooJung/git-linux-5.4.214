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
	{ 0x126fa2c0, "max8925_reg_read" },
	{ 0xe02c07d2, "max8925_bulk_read" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x4957a191, "max8925_reg_write" },
	{ 0x78dcb676, "max8925_bulk_write" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xb13c162f, "devm_rtc_device_register" },
	{ 0x4fc0c5ca, "device_init_wakeup" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0x7e73a43b, "platform_get_irq" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x4eed1932, "rtc_update_irq" },
	{ 0xd964e398, "max8925_set_bits" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "DBA939176AAC29CFC604B48");
