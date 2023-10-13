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
	{ 0x75ed0899, "__platform_driver_probe" },
	{ 0x8804d3fc, "__rtc_register_device" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0xe10f5c53, "devm_rtc_allocate_device" },
	{ 0x8281b36, "devm_ioremap" },
	{ 0xd072dc20, "platform_get_resource" },
	{ 0x9a4c322, "_dev_err" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x6164d63, "devm_clk_get" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Ccortina,gemini-rtc");
MODULE_ALIAS("of:N*T*Ccortina,gemini-rtcC*");
MODULE_ALIAS("of:N*T*Cfaraday,ftrtc010");
MODULE_ALIAS("of:N*T*Cfaraday,ftrtc010C*");

MODULE_INFO(srcversion, "0479F4728138E8408701406");
