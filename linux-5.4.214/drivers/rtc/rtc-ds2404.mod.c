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
	{ 0x8804d3fc, "__rtc_register_device" },
	{ 0xd111bb59, "_dev_info" },
	{ 0x33560c9e, "devm_add_action" },
	{ 0x332b73a1, "__ubsan_handle_out_of_bounds" },
	{ 0x47229b5c, "gpio_request" },
	{ 0xe10f5c53, "devm_rtc_allocate_device" },
	{ 0x943b1666, "devm_kmalloc" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0x9a4c322, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0xfe88309f, "gpiod_get_raw_value" },
	{ 0xa35e10d1, "gpiod_direction_input" },
	{ 0xe66f8cb1, "gpiod_direction_output_raw" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xffb817fb, "gpiod_set_raw_value" },
	{ 0xf37d2c0b, "gpio_to_desc" },
	{ 0x7b37b558, "__ubsan_handle_type_mismatch_v1" },
	{ 0xfe990052, "gpio_free" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "713332D2968BED6D9B3F736");
