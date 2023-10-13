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
	{ 0xae9b43b3, "wm8350_reg_lock" },
	{ 0xcc1d7507, "wm8350_reg_unlock" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xb13c162f, "devm_rtc_device_register" },
	{ 0x4fc0c5ca, "device_init_wakeup" },
	{ 0x4859b8bb, "rtc_year_days" },
	{ 0xbfb093b7, "__dynamic_dev_dbg" },
	{ 0x54077c21, "wm8350_clear_bits" },
	{ 0xc60cefa5, "wm8350_block_write" },
	{ 0x151f4898, "schedule_timeout_uninterruptible" },
	{ 0x97906665, "wm8350_reg_read" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc31a65aa, "wm8350_block_read" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x515bbcca, "wm8350_set_bits" },
	{ 0x4eed1932, "rtc_update_irq" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "EECF8220A9B7267C5E7B1D4");
