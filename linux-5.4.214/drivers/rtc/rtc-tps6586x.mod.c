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
	{ 0x7fccc099, "__ubsan_handle_load_invalid_value" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x8804d3fc, "__rtc_register_device" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x51765820, "devm_request_threaded_irq" },
	{ 0xfb2f8a4, "mktime64" },
	{ 0xe10f5c53, "devm_rtc_allocate_device" },
	{ 0x4fc0c5ca, "device_init_wakeup" },
	{ 0x7e73a43b, "platform_get_irq" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x4eed1932, "rtc_update_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x1a418fa2, "tps6586x_set_bits" },
	{ 0x10813a9f, "tps6586x_writes" },
	{ 0x19cf6e93, "tps6586x_clr_bits" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0x78b95932, "tps6586x_reads" },
	{ 0xc442f7bf, "tps6586x_update" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "4BB7F2551FCF49B0A210117");
