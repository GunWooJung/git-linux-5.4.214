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
	{ 0xd15f1b26, "pcf50633_register_irq" },
	{ 0xb13c162f, "devm_rtc_device_register" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x5838f6c9, "rtc_valid_tm" },
	{ 0x7f22c365, "pcf50633_read_block" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xfab7b840, "pcf50633_write_block" },
	{ 0xf64d82f2, "pcf50633_irq_mask_get" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x864cc58f, "pcf50633_irq_mask" },
	{ 0xd8fb0ab, "pcf50633_irq_unmask" },
	{ 0x4eed1932, "rtc_update_irq" },
	{ 0x9c4384d4, "pcf50633_free_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "pcf50633");


MODULE_INFO(srcversion, "029CD9F0F223E493087E00B");
