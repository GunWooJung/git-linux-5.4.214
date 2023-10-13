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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x8804d3fc, "__rtc_register_device" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0xe10f5c53, "devm_rtc_allocate_device" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0xf31632e0, "ezx_pcap_read" },
	{ 0xd9ff2172, "ezx_pcap_write" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0x4eed1932, "rtc_update_irq" },
	{ 0x91c6e5b0, "pcap_to_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "C4BB6504B4A370DD4C78F33");
